/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:53:05 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/01 15:04:54 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen(s);
	if (s[len_s] == (char)c)
		return ((char *)&s[len_s]);
	while (len_s--)
	{
		if (s[len_s] == (char)c)
			return ((char *)&s[len_s]);
	}
	return (NULL);
}
