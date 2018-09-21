# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/26 15:27:26 by tmakgale          #+#    #+#              #
#    Updated: 2017/09/26 15:27:29 by tmakgale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

CFLAGS = -Wall -Werror -Wextra -I.

FILES =	main.c \
		pass_arguments.c \
		browse_directory.c \
		get_file_info.c \
		print_files.c \
		print_utils.c \
		errors.c \
		manage_lists.c \
		free.c \
		sort_files.c

LIBFT	= ./libft

SRC = $(addprefix , $(FILES))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	gcc $(CFLAGS) -o $@ $^ -L$(LIBFT) -lft

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $<
	
clean:
	rm -f $(OBJ)
	@make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all
