/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:26:22 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/04 16:04:06 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	highest(t_stack *stack_a)
{
	int	counter;
	int	number;

	counter = -1;
	number = stack_a->stack[0];
	while (stack_a->stack[++counter])
		if (number < stack_a->stack[counter])
			number = stack_a->stack[counter];
	return (number);
}

int	lowest(t_stack *stack_a)
{
	int	counter;
	int	number;

	counter = -1;
	number = stack_a->stack[0];
	while (stack_a->stack[++counter])
		if (number > stack_a->stack[counter])
			number = stack_a->stack[counter];
	return (number);
}

void	passing_b(t_stack *stack_a, t_stack *stack_b, int a, int b)
{
	int	counter;
	int counter_two;

	counter = 0;
	counter_two = 0;
	while (stack_b->size < 2)
	{
		if (stack_a->stack[0] == a || stack_a->stack[0] == b)
		{
			pb(stack_a, stack_b);
		}
		else
		{
			if ((stack_a->stack[1] == a || stack_a->stack[1] == b)
				|| (stack_a->stack[2] == a || stack_a->stack[2] == b))
				ra(stack_a);
			else
				rra(stack_a);
		}
	}
	if (stack_b->stack[1] > stack_b->stack[0])
		rb(stack_b);
}

void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b)
{
	passing_b(stack_a, stack_b, lowest(stack_a), highest(stack_a));
	sort_three_numbers(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
	pa(stack_a, stack_b);
}
