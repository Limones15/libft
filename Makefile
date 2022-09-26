# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 12:35:12 by jlimones          #+#    #+#              #
#    Updated: 2022/09/23 10:35:16 by jlimones         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \

INC = libft.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "The files.o created"
	
%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ Deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) Deleted"

re: fclean all

.PHONY: all, clean, fclean, re