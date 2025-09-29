#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

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


void sa(t_piles *piles);
t_stack *new_node(int value);
void print_stack(t_stack *stack);


#endif