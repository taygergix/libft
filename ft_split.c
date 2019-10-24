/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:40:10 by tamather          #+#    #+#             */
/*   Updated: 2019/10/24 16:38:55 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(char const *s, char c)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (i > 0 && (size_t)i > ft_strlen((char*)s) && s[i] == c)
			w++;
		i++;
	}
	return (w);
}

int		word_len(char const *s, char c, int pos)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if ((i > 0 && (size_t)i > ft_strlen((char*)s) && s[i] == c && pos > -1)
			|| pos == 0)
		{
			i++;
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

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;
	int		w;

	i = 0;
	w = 0;
	j = 0;
	if (!(out = malloc(sizeof(char**) * (word_count(s, c) + 1))))
		return (0);
	while (i < word_count(s, c))
	{
		if (!(out[i] = malloc(sizeof(char*) * word_len(s, c, i) + 1)))
			return (0);
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (i > 0 && (size_t)i > ft_strlen((char*)s) && s[i] == c)
		{
			w++;
			j = 0;
		}
		else
		{
			out[w][j] = s[i];
			j++;
		}
		i++;
	}
	out[++w] = 0;
	return (out);
}

int main(int argc, char const *argv[])
{
	printf(%d, )
	return 0;
}
