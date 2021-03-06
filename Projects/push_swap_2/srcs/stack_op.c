/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes <alopes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:45:41 by alopes            #+#    #+#             */
/*   Updated: 2021/07/05 12:51:26 by alopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack_overflow	*stack_command(int rule, int pile_a_b,
		t_stack_overflow *stacks)
{
	if (rule == SWAP)
	{
		stacks = swap_stack(stacks);
		if (pile_a_b == STACK_A)
			write(1, "sa\n", 3);
		if (pile_a_b == STACK_B)
			write(1, "sb\n", 3);
	}
	else if (rule == ROTATE)
	{
		stacks = rotate_stack(stacks);
		if (pile_a_b == STACK_A)
			write(1, "ra\n", 3);
		if (pile_a_b == STACK_B)
			write(1, "rb\n", 3);
	}
	else if (rule == REVERSE)
	{
		stacks = rev_rotate_stack(stacks);
		if (pile_a_b == STACK_A)
			write(1, "rra\n", 4);
		if (pile_a_b == STACK_B)
			write(1, "rrb\n", 4);
	}
	return (stacks);
}

void	run_push(int from_a_or_b, t_stack_overflow **from, t_stack_overflow **to)
{
	push_stack(from, to);
	if (from_a_or_b == STACK_A)
		write(1, "pb\n", 3);
	else
		write(1, "pa\n", 3);
}
