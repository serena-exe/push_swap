// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:15:54 by sebavaro          #+#    #+#             */
/*   Updated: 2026/01/31 15:57:48 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_number(char *str)
{
    int i;
    
    i = 0;
    if (str[i] == '+' || str[i] == '-')
    {
        if (!ft_isdigit(str[i + 1]))
        return (1);
        i++;
    }
    if (!ft_isdigit(str[i]))
    return (1);
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
        return (1);
        i++;
    }
    return (0);
}

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

void	error_handler(t_stack **a, char **av)
{
    (void)av;
    free_list(a);
	write(2, "Error\n", 6);
	exit(2);
}

int    twice(t_stack *stack, int num)
{
    if (stack == NULL)
        return (0);
    while (stack)
    {
        if (stack->content == num)
            return (1);
        stack = stack->next;
    }
    return (0);
}

void ft_freeMatrix(char **matrix)
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

void create_stacks(t_stack **a, char **av)
{
    int i;
    int j;
    long num;
    char **split_av;

    i = 1;
    while (av[i])
    {
        split_av = ft_split(av[i], ' ');
        if (!split_av)
            error_handler(a, av);
        j = 0;
        while (split_av[j])
        {
            if(check_number(split_av[j]))
                error_handler(a, av);
            num = ft_atol(split_av[j]);
            if (num < INT_MIN || num > INT_MAX)
                error_handler(a, av);
            if (twice(*a, (int)num))
                error_handler(a, av);
            append_to_stack(a, (int)num);
            j++;
        }
        ft_freeMatrix(split_av);
        i++;
    }
}