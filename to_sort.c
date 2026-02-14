/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:42:41 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/14 18:04:28 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void sort_five(t_stack **a, t_stack **b)

// void sort_four_o_five(t_stack **a, t_stack **b)
// {
//     while(ft_lstsize_stack(*a) > 3)
//         push(a, b, "b");
//     while (!is_sorted(*a))
//         sort_three(a);
//     while (*b)
//         push(b, a, "a");
    
        
//     // int min_index;

//     // min_index = find_index(*a, find_min(*a));
//     // if (min_index == 1)
//     //     swap(a, "a");
//     // else if (min_index == 2)
//     // {
//     //     rotate(a, "a");
//     //     rotate(a, "a");
//     // }
//     // else if (min_index == 3)
//     //     reverse_rotate(a, "a");
//     // push(b, a, "b");
//     // sort_three(a);
//     // push(a, b, "a");
// }


void sort_three(t_stack **a)
{
    if (find_min(*a) == (*a)->content)
    {
        reverse_rotate(a, 'a');
        swap(a, 'a');
    }
    else if (find_max(*a) == (*a)->content)
    {
        rotate(a, 'a');
        if (!is_sorted(*a))
            swap(a, 'a');
    }
    else
    {
        if (find_index(*a, find_max(*a)) == 1)
            reverse_rotate(a, 'a');
        else
            swap(a, 'a');
    }
    
}



void sort_small(t_stack **a, t_stack **b)
{
    int size;

    size = ft_lstsize_stack(*a);
    if (size == 2)
    {
        if ((*a)->content > (*a)->next->content)
            swap(a, 'a');
    }
    else if (size == 3)
        sort_three(a);
//     else if (size == 4)
//         sort_four(a, b);
//     else if (size == 5)
//         sort_five(a, b);
}

void sort_stack(t_stack **a, t_stack **b)
{
    indexer(*a); //on met des index sur les elements de la stack a 
    if (ft_lstsize_stack(*a) <= 5)
        sort_small(a, b);
    // else
    //     buterfly_sort(a, b);
    ft_lstclear_stack(a, free);
}