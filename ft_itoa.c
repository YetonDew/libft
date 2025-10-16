/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:00:32 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/10 14:35:55 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(long n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*convert_to_string(long n, char *res, int is_negative)
{
	int	i;
	int	digit;

	i = 0;
	if (n == 0)
	{
		res[i++] = '0';
		res[i] = '\0';
		return (res);
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n != 0)
	{
		digit = n % 10;
		res[i++] = digit + '0';
		n = n / 10;
	}
	if (is_negative)
		res[i++] = '-';
	res[i] = '\0';
	return (res);
}

static char	*reverse_string(char *res, int size)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = res[start];
		res[start] = res[end];
		res[end] = temp;
		start++;
		end--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	n = (long)n;
	size = number_size(n);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	convert_to_string(n, res, 0);
	res = reverse_string(res, size);
	return (res);
}
