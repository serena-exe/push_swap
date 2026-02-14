/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:10:23 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/11 14:41:20 by sebavaro         ###   ########.fr       */
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

int	ft_lstsize_stack(t_stack *lst)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_lstdelone_stack(t_stack *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del((void *)(lst->content));
	free(lst);
}

void	ft_lstclear_stack(t_stack **lst, void (*del)(void *))
{
	t_stack	*tmp;

	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)->next;
		ft_lstdelone_stack(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}

t_stack	*ft_lstlast_stack(t_stack *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
