/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:40:37 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/03 03:59:04 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_piles *piles)
{
	t_stack	*first;
	t_stack	*second;

	if (!piles->pile_a || !piles->pile_a->next)
		return ;
	first = piles->pile_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	piles->pile_a = second;
	write(1, "sa\n", 3);
}

void	sb(t_piles *piles)
{
	t_stack	*first;
	t_stack	*second;

	if (!piles->pile_b || !piles->pile_b->next)
		return ;
	first = piles->pile_b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	piles->pile_b = second;
	write(1, "sb\n", 3);
}

void	ss(t_piles *piles)
{
	t_stack	*first;
	t_stack	*second;

	if (piles->pile_a && piles->pile_a->next)
	{
		first = piles->pile_a;
		second = first->next;
		first->next = second->next;
		second->next = first;
		piles->pile_a = second;
	}
	if (piles->pile_b && piles->pile_b->next)
	{
		first = piles->pile_b;
		second = first->next;
		first->next = second->next;
		second->next = first;
		piles->pile_b = second;
	}
	write(1, "ss\n", 3);
}
