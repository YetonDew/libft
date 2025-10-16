/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:21:45 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/10 18:23:48 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	to_delete_c(char const *s1, char const *set, size_t s_l)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	while (s1[i])
	{
		found = 0;
		j = 0;
		while (j < s_l)
		{
			if (s1[i] == set[j])
			{
				found = 1;
				i++;
				break ;
			}
			j++;
		}
		if (found == 0)
			break ;
	}
	return (i);
}

static size_t	to_d_r(char const *s1, char const *set, size_t s1_l, size_t s_l)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	while (s1_l != 0)
	{
		found = 0;
		j = 0;
		while (j < s_l)
		{
			if (s1[s1_l - 1] == set[j])
			{
				found = 1;
				i++;
				s1_l--;
				break ;
			}
			j++;
		}
		if (found == 0)
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s_l;
	size_t	s1_l;
	size_t	s_p;
	size_t	d_e;
	char	*new_str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	s_l = ft_strlen(set);
	s1_l = ft_strlen(s1);
	s_p = to_delete_c(s1, set, s_l);
	d_e = to_d_r(s1, set, s1_l, s_l);
	if (s_p + d_e > s1_l)
		return (ft_strdup(""));
	new_str = malloc(sizeof(char) * (s1_l - s_p - d_e + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1 + s_p, s1_l - s_p - d_e + 1);
	return (new_str);
}
