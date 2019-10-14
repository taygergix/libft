/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 03:26:06 by tamather          #+#    #+#             */
/*   Updated: 2019/10/14 07:26:24 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>

int		        ft_atoi(char *str);
int             ft_isalnum(int c);
int             ft_isalpha(int c);
int             ft_isascii(int c);
int             ft_isdigit(int c);
int             ft_isprint(int c);
char            *ft_strchr(const char *s, int c);
char	        *ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	            ft_strlen(char *str);
int             ft_strncmp(const char *s1, const char *s2, size_t n);
int             ft_tolower(int c);
int             ft_toupper(int c);

#endif