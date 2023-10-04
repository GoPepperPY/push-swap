/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:31:44 by goda-sil          #+#    #+#             */
/*   Updated: 2023/09/27 12:10:01 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	temporary;
	int	counter;

	temporary = stack_a->stack[0];
	counter = -1;
	while (++counter < stack_a->size)
		stack_a->stack[counter] = stack_a->stack[counter + 1];
	stack_a->size--;
	stack_b->size++;
	counter = stack_b->size;
	while (--counter > 0)
		stack_b->stack[counter] = stack_b->stack[counter - 1];
	stack_b->stack[0] = temporary;
	ft_printf("pb\n");
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	temporary;
	int	counter;

	temporary = stack_b->stack[0];
	counter = -1;
	while (++counter < stack_b->size)
		stack_b->stack[counter] = stack_b->stack[counter + 1];
	stack_b->size--;
	stack_a->size++;
	counter = stack_a->size;
	while (--counter > 0)
		stack_a->stack[counter] = stack_a->stack[counter - 1];
	stack_a->stack[0] = temporary;
	ft_printf("pa\n");
}