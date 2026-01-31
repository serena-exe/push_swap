/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:33:57 by sebavaro          #+#    #+#             */
/*   Updated: 2026/01/31 16:46:09 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int  print_error(void)
{
    write(2, "Error\n", 6);
    return (1);
}

int main(int ac, char **av)
{
    t_stack  *a; //a pointeur vers la stack a
    t_stack  *b;

    a = NULL;
    b = NULL;
    (void)b;
    if (ac == 1 || (ac == 2 && !av[1][0]))
        return (1); //error in english
    create_stacks(&a, av);
    
    //print stack a for debug
    t_stack *tmp = a;
    while (tmp)
    {
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
    
    return (0);
}

