/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_almost_all->c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student->42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:40:48 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 16:41:49 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	define_chucks(t_chuck *chuck_one, t_chuck *chuck_two, t_chuck \
					*chuck_three, t_chuck *chuck_four, t_chuck *chuck_five, \
					t_chuck *chuck_six, t_chuck *chuck_seven, t_chuck \
					*chuck_eight, t_chuck *chuck_nine, t_chuck *chuck_ten, \
					t_chuck *chuck_eleven, t_stack *stack_a)
{
	chuck_one->min_range = 0;
	chuck_one->max_range = highest(stack_a) / 11 - 1;
	chuck_two->min_range = highest(stack_a) / 11;
	chuck_two->max_range = (highest(stack_a) / 11) * 2;
	chuck_three->min_range = chuck_two->max_range + 1;
	chuck_three->max_range = (highest(stack_a) / 11) * 3;
	chuck_four->min_range = chuck_three->max_range + 1;
	chuck_four->max_range = (highest(stack_a) / 11) * 4;
	chuck_five->min_range = chuck_four->max_range + 1;
	chuck_five->max_range = (highest(stack_a) / 11) * 5;
	chuck_six->min_range = chuck_five->max_range + 1;
	chuck_six->max_range = (highest(stack_a) / 11) * 6;
	chuck_seven->min_range = chuck_six->max_range + 1;
	chuck_seven->max_range = (highest(stack_a) / 11) * 7;
	chuck_eight->min_range = chuck_seven->max_range + 1;
	chuck_eight->max_range = (highest(stack_a) / 11) * 8;
	chuck_nine->min_range = chuck_eight->max_range + 1;
	chuck_nine->max_range = (highest(stack_a) / 11) * 9;
	chuck_ten->min_range = chuck_nine->max_range + 1;
	chuck_ten->max_range = (highest(stack_a) / 11) * 10;
	chuck_eleven->min_range = chuck_ten->max_range + 1;
	chuck_eleven->max_range = highest(stack_a);
	
}

void	sort_almost_all(t_stack *stack_a, t_stack *stack_b)
{
	t_chuck	*chuck_one;
	t_chuck	*chuck_two;
	t_chuck	*chuck_three;
	t_chuck	*chuck_four;
	t_chuck	*chuck_five;
	t_chuck	*chuck_six;
	t_chuck	*chuck_seven;
	t_chuck	*chuck_eight;
	t_chuck	*chuck_nine;
	t_chuck	*chuck_ten;
	t_chuck	*chuck_eleven;

	define_chucks(&chuck_one, &chuck_two, &chuck_three,\
	 &chuck_four, &chuck_five, &chuck_six, &chuck_seven,\
	 &chuck_eight, &chuck_nine, &chuck_ten, &chuck_eleven\
	 stack_a);
	chuck_sort (stack_a, stack_b, chuck_one);
	chuck_sort (stack_a, stack_b, chuck_two);
	chuck_sort (stack_a, stack_b, chuck_three);
	chuck_sort (stack_a, stack_b, chuck_four);
	chuck_sort (stack_a, stack_b, chuck_five);
	chuck_sort (stack_a, stack_b, chuck_six);
	chuck_sort (stack_a, stack_b, chuck_seven);
	chuck_sort (stack_a, stack_b, chuck_eight);
	chuck_sort (stack_a, stack_b, chuck_nine);
	chuck_sort (stack_a, stack_b, chuck_ten);
	chuck_sort (stack_a, stack_b, chuck_eleven);
}
