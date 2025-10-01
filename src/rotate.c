/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:01:21 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/01 13:54:13 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_piles *piles)
{
	t_stack	*first;
	t_stack	*last;

	if (!piles->pile_a || !piles->pile_a->next)
		return ;
	first = piles->pile_a;
	last = piles->pile_a;
	piles->pile_a = first->next;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	rb(t_piles *piles)
{
	t_stack	*first;
	t_stack	*last;

	if (!piles->pile_b || !piles->pile_b->next)
		return ;
	first = piles->pile_b;
	last = piles->pile_b;
	piles->pile_b = first->next;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	rr(t_piles *piles)
{
	t_stack	*first;
	t_stack	*last;

	if (piles->pile_a && piles->pile_a->next)
	{
		first = piles->pile_a;
		piles->pile_a = first->next;
		last = piles->pile_a;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
	if (piles->pile_b && piles->pile_b->next)
	{
		first = piles->pile_b;
		piles->pile_b = first->next;
		last = piles->pile_b;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
}
