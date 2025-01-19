/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 01:03:15 by eanella           #+#    #+#             */
/*   Updated: 2025/01/08 01:03:29 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (!s)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s) || len == 0)
	{
		return (ft_strdup(""));
	}
	s_len = ft_strlen(s + start);
	if (s_len > len)
	{
		s_len = len;
	}
	substr = malloc(s_len + 1);
	if (!substr)
	{
		return (NULL);
	}
	ft_memcpy(substr, s + start, s_len);
	substr[s_len] = '\0';
	return (substr);
}
