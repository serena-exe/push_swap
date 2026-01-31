/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:37:43 by sebavaro          #+#    #+#             */
/*   Updated: 2026/01/31 16:13:41 by sebavaro         ###   ########.fr       */
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



/* todo to do push swap :


    
*/


#endif