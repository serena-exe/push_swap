/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_n_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:31:00 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/11 14:32:20 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_stack *stack)
{
    int min;

    if (!stack)
        return (0);
    min = stack->content;
    while (stack)
    {
        if (stack->content < min)
            min = stack->content;
        stack = stack->next;
    }
    return (min);
}

int find_max(t_stack *stack)
{
    int max;

    if (!stack)
        return (0);
    max = stack->content;
    while (stack)
    {
        if (stack->content > max)
            max = stack->content;
        stack = stack->next;
    }
    return (max);
}