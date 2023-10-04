/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:19:18 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/03 12:10:39 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_atoi(char *number)
{
	int	counter;
	int	saver;
	int	rest;

	rest = 0;
	saver = 1;
	counter = 0;
	if (number[counter] == '-')
	{
		saver = -1;
		counter++;
	}
	else if (number[counter] == '+')
		counter++;
	while (number[counter] >= '0' && number[counter] <= '9')
	{
		rest = (number[counter] - 48) + (rest * 10);
		counter++;
	}
	return (rest * saver);
}

void	fill_stack_a(t_stack *a, t_stack *b, char **arguments, int counter)
{
	int	number;
	int	counter_one;
	int	counter_two;

	counter_one = 1;
	number = 0;
	counter_two = 0;
	a->stack = ft_calloc((counter - 1), sizeof(int));
	b->stack = ft_calloc((counter - 1), sizeof(int));
	a->size = counter - 1;
	b->size = 0;
	while (counter_one <= a->size)
	{
		number = ft_atoi(arguments[counter_one]);
		a->stack[counter_two] = number;
		counter_one++;
		counter_two++;
	}
}
