/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 00:56:56 by eanella           #+#    #+#             */
/*   Updated: 2025/01/08 00:57:07 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	letter;

	i = 0;
	letter = (char)c;
	while (s[i])
	{
		if (s[i] == letter)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (letter == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
