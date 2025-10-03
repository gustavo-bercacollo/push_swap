/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:02:29 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/03 03:57:13 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_piles *piles)
{
	t_stack	*first_b;

	if (!piles->pile_b)
		return ;
	first_b = piles->pile_b;
	piles->pile_b = first_b->next;
	first_b->next = piles->pile_a;
	piles->pile_a = first_b;
	write(1, "pa\n", 3);
}

void	pb(t_piles *piles)
{
	t_stack *first_a;

	if (!piles->pile_a)
		return ;
	first_a = piles->pile_a;
	piles->pile_a = first_a->next;
	first_a->next = piles->pile_b;
	piles->pile_b = first_a;
	write(1, "pb\n", 3);
}