/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:40:10 by tamather          #+#    #+#             */
/*   Updated: 2019/10/25 01:01:48 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(char const *s, char c)
{
	size_t i;
	int w;

	i = 0;
	w = 1;
	while(s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			w++;
		i++;
	}
	return (w);
}

int		word_len(char const *s, char c, int pos)
{
	size_t i;
	int len;

	i = 0;
	len = 0;
	while(s[i] == c)
		i++;
	while (s[i])
	{
		i++;
		if ((s[i] == c && s[i + 1] != c && s[i + 1] && pos > -1)
			|| pos == 0)
		{
			if (!pos)
			{
				while (s[i] != c && s[i])
				{
					len++;
					i++;
				}
			}
			pos--;
		}
	}
	return (len);
}

char **malloc_set(const char *s, char c)
{
	int i;
	char **out;

	i = 0;
	if (!word_count(s, c))
	{
		if (!(out = malloc(sizeof(char**) * 2)))
			return (0);
		if (!(out[i] = malloc(sizeof(char*) * 1)))
			return (0);
	}
	else
	{
		if (!(out = malloc(sizeof(char**) * (word_count(s, c) + 1))))
			return (0);
		while (i < word_count(s, c))
		{
			if (!(out[i] = malloc(sizeof(char*) * word_len(s, c, i) + 1)))
				return (0);
			i++;
		}
		if (!word_count(s, c))
			if (!(out[i] = malloc(sizeof(char*) * 1)))
				return (0);
	}
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;
	int		w;

	w = 0;
	j = 0;
	i = 0;
	out = malloc_set(s, c);
	while(s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
		{
			out[w++][j] = '\0';
			j = 0;
		}
		else if (s[i] != c)
			out[w][j++] = s[i];
		i++;
	}
	out[w][j] = '\0';
	out[++w] = 0;
	return (out);
}

