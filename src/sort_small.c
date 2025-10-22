/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:49:32 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/22 15:56:15 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_piles *piles)
{
	if (piles->pile_a->value > piles->pile_a->next->value)
		sa(piles);
}

void	sort_three(t_piles *piles)
{
	int	a;
	int	b;
	int	c;

	a = piles->pile_a->value;
	b = piles->pile_a->next->value;
	c = piles->pile_a->next->next->value;
	if (a < b && b > c && a < c)
	{
		sa(piles);
		ra(piles);
	}
	else if (a > b && b < c && a < c)
		sa(piles);
	else if (a < b && b > c && a > c)
		rra(piles);
	else if (a > b && b < c && a > c)
		ra(piles);
	else
	{
		sa(piles);
		rra(piles);
	}
}

void	sort_four(t_piles *piles)
{
	t_stack	*tmp;
	int		pos;

	pos = 0;
	tmp = piles->pile_a;
	while (tmp && tmp->index != 0)
	{
		pos++;
		tmp = tmp->next;
	}
	if (pos == 1)
		ra(piles);
	else if (pos == 2)
	{
		ra(piles);
		ra(piles);
	}
	else if (pos == 3)
		rra(piles);
	pb(piles);
	sort_three(piles);
	pa(piles);
}

static void	push_index_to_b(t_piles *piles, int target_index)
{
	t_stack	*tmp;
	int		pos;

	pos = 0;
	tmp = piles->pile_a;
	while (tmp && tmp->index != target_index)
	{
		pos++;
		tmp = tmp->next;
	}
	if (pos == 1)
		ra(piles);
	else if (pos == 2)
	{
		ra(piles);
		ra(piles);
	}
	else if (pos == 3)
	{
		rra(piles);
		rra(piles);
	}
	else if (pos == 4)
		rra(piles);
	pb(piles);
}

void	sort_five(t_piles *piles)
{
	push_index_to_b(piles, 0);
	push_index_to_b(piles, 1);
	sort_three(piles);
	pa(piles);
	pa(piles);
}
