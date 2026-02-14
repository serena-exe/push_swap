/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:37:43 by sebavaro          #+#    #+#             */
/*   Updated: 2026/02/11 14:48:33 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include "ft_libft/libft.h"

//ma structure de stack
typedef struct s_stack
{
    int             content;
    int             index;
    struct s_stack  *next;
}   t_stack; 

void create_stacks(t_stack **a, char **av);
int check_number(char *str);
void append_to_stack(t_stack **stack, int num);
int twice(t_stack *stack, int num);
void error_handler(t_stack **a, char **av);
void free_list(t_stack **stack);
void freeMatrix(char **matrix);
t_stack *ft_lstnew_stack(int content);
int	ft_lstsize_stack(t_stack *lst);
int is_sorted(t_stack *stack);
void indexer(t_stack *stack);
void sort_stack(t_stack **a, t_stack **b);
void sort_small(t_stack **a, t_stack **b);
void buterfly_sort(t_stack **a, t_stack **b);
void ft_lstdelone_stack(t_stack *lst, void (*del)(void*));
void ft_lstclear_stack(t_stack **lst, void (*del)(void *));
void swap(t_stack **stack, char *ab);
int find_min(t_stack *stack);
int find_max(t_stack *stack);
void rotate(t_stack **stack, char *ab);
void reverse_rotate(t_stack **stack, char *ab);
t_stack *ft_lstlast_stack(t_stack *lst);
int find_index(t_stack *stack, int num);






#endif