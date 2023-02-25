/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:32:57 by kakorzar          #+#    #+#             */
/*   Updated: 2022/12/19 20:33:48 by kakorzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static size_t	ft_wordsize(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		word;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_wordcount(s, c);
	array = (char **)malloc((word + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_wordsize(s, c, i);
		array[j] = ft_substr(s, i, size);
		if (!(array[j]))
			return (NULL);
		i += size;
	}
	array[j] = NULL;
	return (array);
}
