# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamather <tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 08:30:12 by taygergix         #+#    #+#              #
#    Updated: 2019/10/14 07:23:24 by tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strdup.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlcat.c ft_strchr.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

OBJS = ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:	${NAME}

clean:
			rm -f  ${OBJS}

fclean:		clean
			rm -f ${NAME}

re: fclean all