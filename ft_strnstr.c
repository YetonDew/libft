/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:08:49 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/01 19:56:04 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len;
	size_t i;
	size_t j;

	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *)&big[i]);
	while (i + little_len <= len && big[i] != '\0')
	{
		j = 0;
		while (j < little_len && big[i + j] == little[j])
			j++;
		if (j == little_len)
			return (big[i]);
		i++;
	}
	return (NULL);
}
