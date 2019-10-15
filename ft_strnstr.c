/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:33:48 by tamather          #+#    #+#             */
/*   Updated: 2019/10/14 12:41:23 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;

	while (s2 && i < n + 1)
	{
		j = 0;
		k = 0;
		while (s1[k] == s2[j] && s1[k] && s2[j])
		{
			j++;
			k++;
		}
		if (s1[k] == '\0' || i + k > n + 1)
			return ((char*)s2);
		s2++;
	}
	return ((char*)s2);
}
