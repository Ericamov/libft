/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:23:06 by eanella           #+#    #+#             */
/*   Updated: 2025/01/15 18:37:29 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n);

char	*ft_itoa(int n)
{
	int		num_digits;
	char	*res;
	long	abs_nb;

	num_digits = count_digits(n);
	abs_nb = (long)n;
	res = ft_calloc(num_digits + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (abs_nb < 0)
		abs_nb = -abs_nb;
	while (num_digits > 0)
	{
		res[num_digits - 1] = (abs_nb % 10) + '0';
		num_digits--;
		abs_nb = abs_nb / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
