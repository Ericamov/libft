/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 01:02:32 by eanella           #+#    #+#             */
/*   Updated: 2025/01/08 01:11:24 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (len == 0)
	{
		if (little[0] == '\0')
			return ((char *)big);
		else
			return (NULL);
	}
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while ((big[i]) && (len - i >= little_len))
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
