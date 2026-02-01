/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:44:02 by sebavaro          #+#    #+#             */
/*   Updated: 2025/11/03 14:40:41 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*error_handle(t_list *lst, void (*del)(void *), void *content)
{
	if (content && del)
		del(content);
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newcontent;
	void	*content;

	if (!lst)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		content = NULL;
		if (!f)
			newcontent = ft_lstnew(lst->content);
		else
		{
			content = f(lst->content);
			if (!content)
				return (error_handle(newlist, del, NULL));
			newcontent = ft_lstnew(content);
		}
		if (!newcontent)
			return (error_handle(newlist, del, content));
		ft_lstadd_back(&newlist, newcontent);
		lst = lst->next;
	}
	return (newlist);
}
