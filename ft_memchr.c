/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:25:32 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/01 18:14:26 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr_s;
	size_t i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return(&ptr_s[i]);
		i++;
	}
	return (NULL);
}
