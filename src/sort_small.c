/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:49:32 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/04 18:17:23 by gbercaco         ###   ########.fr       */
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
	int a;
	int b;
	int c;
	
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
