/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:30 by gbercaco          #+#    #+#             */
/*   Updated: 2025/09/29 16:24:13 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(void)
{
	t_piles pile;
	t_stack *a1 = new_node(2);
	t_stack *a2 = new_node(5);
	t_stack *a3 = new_node(7);

	a1->next = a2;
	a2->next = a3;

	pile.pile_a = a1;
	pile.pile_b = NULL;
	
	printf("Antes do sa\n");
	print_stack(pile.pile_a);
	
	sa(&pile);
	
	printf("Depois do sa\n");
	print_stack(pile.pile_a);
	
	return (0);
}