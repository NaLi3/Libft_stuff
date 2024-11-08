# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilevy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 18:10:43 by ilevy             #+#    #+#              #
#    Updated: 2024/11/08 18:12:18 by ilevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:=libft.a
CC:= gcc
CFLAGS:= -Wall -Wextra -Werror -c -I
HEADER:= libft.h
SRCS:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS:= ft_lstadd_back_bonus.c ft_lstadd_front.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
CC:= gcc
FLAGS:= -Wall -Wextra -Werror -c
OBLIGATORY:= $(SRCS:.c=.o)
BONY:= $(BONUS:.c=.o)

%.o:%.c
	${CC} ${FLAGS} $< -o ${<:.c=.o}

${NAME}: ${OBLIGATORY}
	ar -rcs $@ $^

all: ${NAME}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBLIGATORY}

re: fclean all

.PHONY: fclean clean re all
