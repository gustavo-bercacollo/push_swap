/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:05:29 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/07 20:16:59 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_indice(t_piles *piles)
{
	t_stack *tmp;
	int max_index;
	
	tmp = piles->pile_a;
	max_index = piles->pile_a->index;
	while (tmp)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	return max_index;
}

static int get_max_bits(int max_index)
{
	int bits;

	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return bits;
}

void	radix(t_piles *piles)
{
	int	max_bits;
	int	size;
	int	i;

	size = stack_size(piles);
	max_bits = get_max_bits(get_max_indice(piles));
	i = 0;

	while (i < max_bits)
	{
		int j = 0;
		while (j < size)
		{
			int num = piles->pile_a->index;
			if (((num >> i) & 1) == 0)
				pb(piles);
			else
				ra(piles);
			j++;
		}
		while (piles->pile_b)
			pa(piles);
		i++;
	}
}

