/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:44:22 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/11 14:48:20 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void indexer(t_stack *stack)
{
    t_stack *tmp;
    t_stack *current;
    int i;

    tmp = stack;
    while (tmp)
    {
        i = 0;
        current = stack;
        while (current)
        {
            if (tmp->content > current->content)
                i++;
            current = current->next;
        }
        tmp->index = i;
        tmp = tmp->next;
    }
}

int find_index(t_stack *stack, int num)
{
    int i;

    i = 0;
    while (stack)
    {
        if (num ==stack->content)
            return (i);
        i++;
        stack = stack->next;
    }
    return (-1);
}