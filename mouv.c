/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:17:32 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/14 17:55:07 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack **stack, char *ab)
{
    t_stack *first;
    t_stack *second;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    first = *stack;
    second = (*stack)->next;
    first->next = second->next;
    second->next = first;
    if (ab == 'a')
        write(1, "sa\n", 3);
    else if (ab == 'b')
        write(1, "sb\n", 3);
}

void reverse_rotate(t_stack **stack, char *ab)
{
    t_stack *last;
    t_stack *last_last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    last = *stack;
    last_last = ft_lstlast_stack(*stack);
    while (last->next->next != NULL)
        last = last->next;
    last->next = NULL;
    last_last->next = *stack;
    *stack = last_last;
    if (ab == 'a')
        write(1, "rra\n", 4);
    else if (ab == 'b')
        write(1, "rrb\n", 4);
}

void rotate(t_stack **stack, char *ab)
{
    t_stack *first;
    t_stack *last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    first = *stack;
    last = *stack;
    while (last->next)
        last = last->next;
    *stack = first->next;
    first->next = NULL;
    last->next = first;
    if (ab == 'a')
        write(1, "ra\n", 3);
    else if (ab == 'b')
        write(1, "rb\n", 3);
}

void push(t_stack **from, t_stack **to, char *ab)
{
    t_stack *tmp;

    if (!from || !*from)
        return ;
    tmp = *from;
    *from = (*from)->next;
    tmp->next = *to;
    *to = *from;
    *from = tmp;
    if (ab == 'a')
        write(1, "pa\n", 3);
    else if (ab == 'b')
        write(1, "pb\n", 3);
}