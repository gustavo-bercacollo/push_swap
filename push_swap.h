#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

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

#endif