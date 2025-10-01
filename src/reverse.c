/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:32:40 by gbercaco          #+#    #+#             */
/*   Updated: 2025/09/30 20:26:53 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_piles *piles)
{
  t_stack *last;
  
  if (!piles->pile_a || !piles->pile_a->next)
    return ;
  last = piles->pile_a;

  while (last->next->next != NULL)
    last = last->next;
    
  last->next->next = piles->pile_a;
  piles->pile_a = last->next;
  last->next = NULL;
}

void rrb(t_piles *piles)
{
  t_stack *last;
  
  if (!piles->pile_b || !piles->pile_b->next)
    return ;
  last = piles->pile_b;

  while (last->next->next != NULL)
    last = last->next;
    
  last->next->next = piles->pile_b;
  piles->pile_b = last->next;
  last->next = NULL;
}

void rrr(t_piles *piles)
{
  t_stack *last;
  
  if (piles->pile_a && piles->pile_a->next)
  {
    last = piles->pile_a;

    while (last->next->next != NULL)
      last = last->next;
    
    last->next->next = piles->pile_a;
    piles->pile_a = last->next;
    last->next = NULL;
  }
  if (piles->pile_b && piles->pile_b->next)
  {
    last = piles->pile_b;

    while (last->next->next != NULL)
      last = last->next;
    
    last->next->next = piles->pile_b;
    piles->pile_b = last->next;
    last->next = NULL;
  }
}

