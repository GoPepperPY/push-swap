/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:18:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/12 16:29:59 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int counter, char **argument)
{
	if (checker(*argument))
	{
		t_stack	stack_a;
		t_stack	stack_b;
		
		fill_stack_a(&stack_a, &stack_b, argument, counter);
		sort(&stack_a, &stack_b);
	}
	return (0);
}
