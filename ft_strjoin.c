/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 01:25:14 by eanella           #+#    #+#             */
/*   Updated: 2025/01/10 23:26:08 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(size);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}
