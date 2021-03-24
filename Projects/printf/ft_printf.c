/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes <alopes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:54:48 by alopes            #+#    #+#             */
/*   Updated: 2021/03/24 14:59:59 by alopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	t_flags		check_format(const char **format, va_list args)
{
	t_flags flag;

	flag = ft_init_flags();
	(*format)++;
	while (!check_var(**format) && **format != '\0')
	{
		if (**format == '-') //regra para colocar à esquerda
			flag.minus = 1;
		else if (**format == '0') //preenche com zeros consoante o width
			flag.zero = 1;
		else if (**format == '*' || ft_isdigit(**format)) // especifica o num minimo de caracters que vao sair do output
			flag.width = get_width(&(*format), args);	//pode ser definido pela *, ou por colocar digit no format
		else if (**format == '.') // especifica maximo de caracters num arg que vai sair do output
		{
			flag.dot = 1;
			flag.precision = get_precision(&(*format), args);
		}
		else
			break ;
		(*format)++;
	}
	flag.type = **format;
	return (flag);
}

static int			convert_flag(va_list args, t_flags flag)
{
	if (flag.type == 'c')
		return (case_char(va_arg(args, int), flag));
	if (flag.type == 's')
		return (case_str(va_arg(args, char *), flag));
	if (flag.type == 'p')
		return (case_ptr(va_arg(args, unsigned long *), flag));
	if (flag.type == 'd' || flag.type == 'i')
		return (case_nbr(va_arg(args, int), flag));
	else
		return (case_char(flag.type, flag));
	return (0);
}

int					ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		temp;

	if (format == NULL)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		temp = count;
		if (*format == '%')
			count += convert_flag(args, check_format(&format, args));
		else
			count += case_char(*format, ft_init_flags()); // apenas imprime char a char, nao precisa de flags(por isso sao iniciadas a 0)
		if (count < temp)
			count = -1;
		if (count < 0 || *format == '\0')
			break ;
		format++;
	}
	va_end(args);
	return (count);
}
/*
int main (void)
{
	printf(" 0*%0-*.*d*0 0*%0*.*d*0 \n", 6, 2, 102, 10, 21, -101);
	printf(" 0*%0-*.*d*0 0*%0*.*d*0 \n", 2, 6, 102, 21, 10, -101);

	return (0);
}
*/
