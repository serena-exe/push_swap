/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:47:46 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/14 18:22:49 by sebavaro         ###   ########.fr       */
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

void	error_handler(t_stack **a, char **av)
{
    freeMatrix(av);
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

int is_sorted(t_stack *stack)
{
    while (stack && stack->next)
    {
        if (stack->content > stack->next->content)
            return (0);
        stack = stack->next;
    }
    return (1);
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
            error_handler(a, split_av);
        j = 0;
        while (split_av[j])
        {
            if(check_number(split_av[j]))
                error_handler(a, split_av);
            num = ft_atol(split_av[j]);
            if (num < INT_MIN || num > INT_MAX)
                error_handler(a, split_av);
            if (twice(*a, (int)num))
                error_handler(a, split_av);
            append_to_stack(a, (int)num);
            j++;
        }
        freeMatrix(split_av);
        i++;
    }
}