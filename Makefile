# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 08:30:12 by taygergix         #+#    #+#              #
#    Updated: 2019/10/25 01:02:27 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strdup.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_substr.c ft_strtrim.c ft_strmapi.c ft_strlcpy.c ft_strjoin.c ft_split.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = -I ./

NAME = libft.a

OBJS = ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

$(NAME): 	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:	${NAME}

clean:
			rm -f  ${OBJS}

fclean:		clean
			rm -f ${NAME}

re: fclean all