/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:41:26 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/19 10:33:29 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int decimal)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[decimal / 16]);
	ft_putchar(base[decimal % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && (str[i] < 32 || str[i] > 126))
			ft_puthex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
