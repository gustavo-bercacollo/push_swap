/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 00:05:29 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/06 16:50:21 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void  set_indices(t_piles *piles)
{ 
	t_stack *tmp1;
	t_stack *tmp2;
	int i;

	tmp1 = piles->pile_a;
	while (tmp1)
	{
		i = 0;
		tmp2 = piles->pile_a;
		while (tmp2)
		{
			if (tmp1->value > tmp2->value)
				i++;
			tmp2 = tmp2->next;	
		}
		tmp1->index = i;
		tmp1 = tmp1->next;
	}	
}

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
	while (max_index >> bits != 0)
		bits++;
	return bits;
}

// void	radix(t_piles *piles)
// {
// 	int max_index;
// 	int max_bits;
// 	int size_pile_a;
// 	int i;
// 	int j;

// 	max_index = get_max_indice(piles);
// 	max_bits = get_max_bits(max_index);
	
// 	i = 0;
// 	while (i < max_bits)
// 	{
// 		j = 0;
// 		while (j < size_pile_a)
// 		{
// 			j++;
// 		}
		
// 		i++;
// 	}
	

	
// }
