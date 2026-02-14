# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sebavaro <sebavaro@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 10:35:19 by sebavaro          #+#    #+#              #
#    Updated: 2026/02/11 14:49:11 by sebavaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

LIBFT_DIR = ft_libft

CFILES = main.c \
		 to_stack.c \
		 utils.c \
		 to_free.c \
		 to_index.c \
		 to_sort.c \
		 mouv.c \
		 min_n_max.c \

OBJS = $(CFILES:.c=.o)

CC = clang

CFLAGS = -g 
LIBFT = $(LIBFT_DIR)/libft.a

all : $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(OBJS) $(LIBFT) $(CFLAGS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I.  

clean :
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re : fclean $(NAME)

.PHONY: all bonus clean fclean re