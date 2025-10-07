/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:24:07 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/07 09:41:20 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cuenta cuántas palabras hay en la cadena */
static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

/* Libera memoria si algo falla */
static void	*free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		res[i] = ft_substr(s, start, end - start);
		if (!res[i])
			return (free_all(res, i));
		i++;
		start = end;
	}
	res[i] = NULL;
	return (res);
}
