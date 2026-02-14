/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:32:16 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/11 13:47:38 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(t_stack **stack)
{
    t_stack  *tmp;
    t_stack  *current;
    
    if (!stack || !*stack)
    return ;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        current->content = 0;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}

void freeMatrix(char **matrix)
{
    int i;

    i = 0;
    if (!matrix)
        return ;
    while (matrix[i])
    {
        free(matrix[i]);
        i++;
    }
    free(matrix);
}