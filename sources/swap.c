/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:04 by goda-sil          #+#    #+#             */
/*   Updated: 2023/09/26 14:59:15 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sa(t_stack *stack_a)
{
	int	temporary;

	temporary = stack_a->stack[1];
	stack_a->stack[1] = stack_a->stack[0];
	stack_a->stack[0] = temporary;
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	temporary;

	temporary = stack_b->stack[1];
	stack_b->stack[1] = stack_b->stack[0];
	stack_b->stack[0] = temporary;
	ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}
