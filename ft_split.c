/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 00:34:59 by eanella           #+#    #+#             */
/*   Updated: 2025/01/13 00:27:44 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_segments(char const *s, char c);
static char		**split_into_segments(char **segments, char const *s, char c);
static void		free_segments(char **strs);

char	**ft_split(char const *s, char c)
{
	char	**segments;
	size_t	segments_count;

	if (!s)
	{
		return (NULL);
	}
	segments_count = count_segments(s, c);
	segments = (char **)malloc(sizeof(char *) * (segments_count + 1));
	if (!segments)
	{
		return (NULL);
	}
	segments[segments_count] = NULL;
	return (split_into_segments(segments, s, c));
}

static size_t	count_segments(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
		}
		else
		{
			count++;
			while (*s && *s != c)
			{
				s++;
			}
		}
	}
	return (count);
}

static char	**split_into_segments(char **segments, char const *s, char c)
{
	size_t	i;
	size_t	segment_len;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			segment_len = 0;
			while (s[segment_len] && s[segment_len] != c)
				segment_len++;
			segments[i] = ft_substr(s, 0, segment_len);
			if (!segments[i])
			{
				free_segments(segments);
				return (NULL);
			}
			i++;
			s += segment_len;
		}
	}
	return (segments);
}

static void	free_segments(char **segments)
{
	if (!segments)
	{
		return ;
	}
	while (*segments)
	{
		free(*segments);
		segments++;
	}
	free(segments);
}
