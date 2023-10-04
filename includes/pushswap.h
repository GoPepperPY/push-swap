/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:24:09 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/04 12:47:10 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include "ft_printf.h"

typedef struct s_stack{
	int				size;
	int				*stack;
}					t_stack;

typedef struct s_chuck{
	int				min_range;
	int				max_range;
}					t_chuck;

int		ft_atoi(char *number);
int		lowest(t_stack *stack_a);
int		highest(t_stack *stack_a);
int	highest_range(t_stack *stack);

void	pb(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	fill_stack_a(t_stack *a, t_stack *b, \
			char **arguments, int counter);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t	nmemb, size_t size);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	sort(t_stack *stack_a, t_stack *stack_b);
void	sort_three_numbers(t_stack *stack_a);
void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b);
void	passing_b(t_stack *stack_a, t_stack *stack_b, int a, int b);
void	sort_four_numbers(t_stack *stack_a, t_stack *stack_b);
void	sort_almost_all(t_stack *stack_a, t_stack *stack_b);
void	chuck_sort(t_stack *stack_a, t_stack *stack_b, t_chuck chuck);
void	push_above(t_stack *a, t_stack *b, int value);
void	push_below(t_stack *a, t_stack *b, int value);
void	organize(t_stack *stack_a, t_stack *stack_b);
void	pass_a(t_stack *stack_a, t_stack *stack_b);

#endif