/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 00:58:27 by eanella           #+#    #+#             */
/*   Updated: 2025/01/08 01:15:07 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	letter;
	char	*last_c;

	i = 0;
	letter = (char)c;
	last_c = NULL;
	while (s[i])
	{
		if (s[i] == letter)
		{
			last_c = ((char *)&s[i]);
		}
		i++;
	}
	if (letter == '\0')
	{
		last_c = ((char *)&s[i]);
	}
	return (last_c);
}
