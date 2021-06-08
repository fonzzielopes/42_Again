/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes <alopes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:43:17 by alopes            #+#    #+#             */
/*   Updated: 2021/06/08 12:24:49 by alopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdarg.h>
# include "../libft/libft.h"
# include "../libft/get_next_line.h"

typedef struct	s_stack_overflow
{
	int						content;
	struct s_stack_overflow	*next;
	struct s_stack_overflow	*prev;

}				t_stack_overflow;

int				push_swap(...);

#endif