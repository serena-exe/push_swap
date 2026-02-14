/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:33:57 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/14 18:00:00 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
    
    // //print stack a for debug
    // t_stack *tmp = a;
    // while (tmp)
    // {
    //     printf("%d\n", tmp->content);
    //     tmp = tmp->next;
    // }
    
    if (ft_lstsize_stack(a) == 1 || is_sorted(a) == 1)
    {
        free_list(&a);
        printf("Already sorted\n");
        return (0);
    }
    else
    {
        sort_stack(&a, &b);
    }
    free_list(&a);
    return (0);
}

