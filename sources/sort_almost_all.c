/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_almost_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:40:48 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/09 14:58:03 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	size_result(t_stack *stack_a)
{
	int	counter;
	int	counter_two;

	counter = lowest(stack_a);
	counter_two = 0;
	while (counter <= highest(stack_a))
	{
		counter_two++;
		counter++;
	}
	counter_two = counter_two / 5;
	return (counter_two);
}

void	sort_almost_all(t_stack *stack_a, t_stack *stack_b)
{
	t_chuck	chuck_one;
	t_chuck	chuck_two;
	t_chuck	chuck_three;
	t_chuck	chuck_four;
	t_chuck	chuck_five;
	int		real_size;

	real_size = size_result(stack_a);
	chuck_one.min_range = lowest (stack_a);
	chuck_one.max_range = lowest (stack_a) + real_size;
	chuck_two.min_range = chuck_one.max_range + 1;
	chuck_two.max_range = lowest (stack_a) + (real_size * 2);
	chuck_three.min_range = chuck_two.max_range + 1;
	chuck_three.max_range = lowest (stack_a) + (real_size * 3);
	chuck_four.min_range = chuck_three.max_range+ 1;
	chuck_four.max_range = lowest (stack_a) +(real_size * 4);
	chuck_five.min_range = chuck_four.max_range + 1;
	chuck_five.max_range = highest(stack_a);
	chuck_sort (stack_a, stack_b, chuck_one);
	chuck_sort (stack_a, stack_b, chuck_two);
	chuck_sort (stack_a, stack_b, chuck_three);
	chuck_sort (stack_a, stack_b, chuck_four);
	chuck_sort (stack_a, stack_b, chuck_five);
}
