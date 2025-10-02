/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:36:25 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/02 15:03:15 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "ft_ctype.h"
# include "ft_stdlib.h"

typedef struct s_stack
{
	int value;
	struct s_stack *next;
}t_stack;

typedef struct s_piles
{
	t_stack *pile_a;
	t_stack *pile_b;
}t_piles;

// swap
void sa(t_piles *piles);
void sb(t_piles *piles);
void ss(t_piles *piles);

// push
void pa(t_piles *piles);
void pb(t_piles *piles);

// rotate
void ra(t_piles *piles);
void rb(t_piles *piles);
void rrb(t_piles *piles);

// reverse
void rra(t_piles *piles);
void rrb(t_piles *piles);

// ultils
t_stack *new_node(int value);
void print_stack(t_stack *stack);
void add_back(t_stack **stack, t_stack *new);
int is_number(const char *str);
int has_duplicate(char *argv[], int i);
void free_stack(t_stack *stack);

#endif