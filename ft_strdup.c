/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:34:19 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/05 20:43:20 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	len;

	len = ft_strlen(s) + 1;
	new_s = (char *)malloc(sizeof(char) * len);
	if (new_s == NULL)
		return (0);
	ft_strlcpy(new_s, s, len);
	return (new_s);
}
