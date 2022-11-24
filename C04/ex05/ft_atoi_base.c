/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:08:07 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/21 11:24:35 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] && j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	print_in_base(long long n, char *base, int base_length)
{
	if (n < base_length)
	{
		write(1, &base[n], 1);
		return ;
	}
	print_in_base(n / base_length, base, base_length);
	print_in_base(n % base_length, base, base_length);
}

long long	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	while (str[i] >= '0' && str[i] <= '9')
		number = (number * 10) + (str[i++] - '0');
	return (number * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	long long	n;
	int			base_length;

	n = ft_atoi(str);
	base_length = valid_base(base);
	if (base_length == 0)
		return (0);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	print_in_base(n, base, base_length);
	return (1);
}
