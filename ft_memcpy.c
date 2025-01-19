/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:43:14 by eanella           #+#    #+#             */
/*   Updated: 2024/12/14 19:37:35 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*buffer_src;
	unsigned char		*buffer_dest;
	size_t				i;

	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	buffer_src = (const unsigned char *)src;
	buffer_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		buffer_dest[i] = buffer_src[i];
		i++;
	}
	return (dest);
}
