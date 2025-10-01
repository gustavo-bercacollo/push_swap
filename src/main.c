/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:30 by gbercaco          #+#    #+#             */
/*   Updated: 2025/10/01 16:10:42 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_piles pile;
	int value;
	
	if (argc < 2)
		return (0);
		
	pile.pile_a = NULL;
	pile.pile_b = NULL;
	
	for (int i = 1; i < argc; i++)
	{
		value = atoi(argv[i]);
		if (is_int(value))
		{
			add_back(&pile.pile_a, new_node(value));
		}
		else
			printf("ERROR\n");
		
	}
	
	print_stack(pile.pile_a);

	return (0);
}
