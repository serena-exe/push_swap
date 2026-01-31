/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:10:23 by sebavaro          #+#    #+#             */
/*   Updated: 2026/01/31 16:42:49 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_lstnew_stack(int content)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->content = content;
    new->index = 0; // On initialisera plus tard
    new->next = NULL;
    return (new);
}

void    append_to_stack(t_stack **stack, int num)
{
    t_stack *node;
    t_stack *last_node;
    
    if (!stack)
        return ;
    node = ft_lstnew_stack(num);
    if (!node)
        return ;
    if (!(*stack))
    {
        *stack = node;
        return ;
    }
    last_node = *stack;
    while (last_node->next)
        last_node = last_node->next;
    last_node->next = node;
}
