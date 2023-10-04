/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:26:22 by goda-sil          #+#    #+#             */
/*   Updated: 2023/09/27 10:43:22 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	rra(t_stack *stack_a)
{
	int	counter;
	int	temporary;

	counter = stack_a->size - 1;
	temporary = stack_a->stack[counter];
	while (counter > 0)
	{
		stack_a->stack[counter] = stack_a->stack[counter - 1];
		counter--;
	}
	stack_a->stack[counter] = temporary;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack_b)
{
	int	counter;
	int	temporary;

	counter = stack_b->size - 1;
	temporary = stack_b->stack[counter];
	while (counter > 0)
	{
		stack_b->stack[counter] = stack_b->stack[counter - 1];
		counter--;
	}
	stack_b->stack[counter] = temporary;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}
