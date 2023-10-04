/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:46:16 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/04 13:59:18 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	highest_range(t_stack *stack)
{
	int	counter;
	int	value;
	int position;

	counter = 0;
	value = 0;

	while (stack->stack[counter])
	{
		if (stack->stack[counter] > value)
		{
			value = stack->stack[counter];
			position = counter;
		}
		counter++;
	}
	return (position);
}

void	organize(t_stack *stack_a, t_stack *stack_b)
{
	int	highest_number_position;
	int	counter;
	int	temporary;

	while (stack_b->size > 0)
	{
		highest_number_position = highest_range(stack_b);
		temporary = stack_b->stack[highest_number_position];
		if (highest_number_position <= stack_b->size / 2)
		{
			counter = -1;
			while (1)
			{
				if (stack_b->stack[0] == temporary)
					break ;
				rb(stack_b);
			}
		}
		else 
		{
			counter = stack_b->size + 1;
			while (1)
			{
				if (stack_b->stack[0] == temporary)
					break ;
				rrb(stack_b);
			}
		}
		pa(stack_a, stack_b);
	}
}
