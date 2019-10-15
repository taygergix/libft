/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:54:50 by tamather          #+#    #+#             */
/*   Updated: 2019/10/14 16:47:08 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p;

	while (*s)
	{
		if (*s == c)
			p = (char*)s;
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	if (p)
		return ((char*)s);
	return (0);
}
