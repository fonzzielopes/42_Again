/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes- <alopes-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:10:50 by alopes-           #+#    #+#             */
/*   Updated: 2021/01/26 19:17:13 by alopes-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			i = 1;
		}
		else
			return (0);
		str++;
	}
	return (i);
}