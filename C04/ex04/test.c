/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:08:07 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 18:45:38 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		ft_putchar(base[n]);
		return ;
	}
	print_in_base(n / base_length, base, base_length);
	print_in_base(n % base_length, base, base_length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	n;
	int			base_length;

	n = nbr;
	base_length = valid_base(base);
	if (base_length == 0)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	print_in_base(n, base, base_length);
	return ;
}

int	main(void)
{
    printf("\n--- Hexadecimal ---\n");

    ft_putnbr_base(123, "0123456789abcdef");
    write(1, "\n", 1);

    ft_putnbr_base(0, "0123456789abcdef");
    write(1, "\n", 1);

    ft_putnbr_base(-123, "0123456789abcdef");
    write(1, "\n", 1);

    ft_putnbr_base(2147483647, "0123456789abcdef");
    write(1, "\n", 1);

    ft_putnbr_base(-2147483648, "0123456789abcdef");
    write(1, "\n", 1);

    printf("\n--- Binary ---\n");

    ft_putnbr_base(123, "01");
    write(1, "\n", 1);

    ft_putnbr_base(0, "01");
    write(1, "\n", 1);

    ft_putnbr_base(-123, "01");
    write(1, "\n", 1);

    ft_putnbr_base(2147483647, "01");
    write(1, "\n", 1);

    ft_putnbr_base(-2147483648, "01");
    write(1, "\n", 1);
	
	printf("\n--- Base 10 ---\n");

    ft_putnbr_base(123, "0123456789");
    write(1, "\n", 1);

    ft_putnbr_base(0, "0123456789");
    write(1, "\n", 1);

    ft_putnbr_base(-123, "0123456789");
    write(1, "\n", 1);

    ft_putnbr_base(2147483647, "0123456789");
    write(1, "\n", 1);

    ft_putnbr_base(-2147483648, "0123456789");
    write(1, "\n", 1);
	
	printf("\n--- Octal ---\n");

    ft_putnbr_base(123, "01234567");
    write(1, "\n", 1);

    ft_putnbr_base(0, "01234567");
    write(1, "\n", 1);

    ft_putnbr_base(-123, "01234567");
    write(1, "\n", 1);

    ft_putnbr_base(2147483647, "01234567");
    write(1, "\n", 1);

    ft_putnbr_base(-2147483648, "01234567");
    write(1, "\n", 1);
    return (0);
}
