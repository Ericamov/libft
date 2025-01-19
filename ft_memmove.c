/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:56:14 by eanella           #+#    #+#             */
/*   Updated: 2024/12/15 17:29:57 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*buffer_src;
	unsigned char		*buffer_dest;
	int					to_left;
	size_t				i;

	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	buffer_src = (const unsigned char *)src;
	buffer_dest = (unsigned char *)dest;
	to_left = (buffer_dest < buffer_src);
	i = 0;
	while (i < n)
	{
		if (to_left)
			buffer_dest[i] = buffer_src[i];
		else
			buffer_dest[n - 1 - i] = buffer_src[n - 1 - i];
		i++;
	}
	return (dest);
}
