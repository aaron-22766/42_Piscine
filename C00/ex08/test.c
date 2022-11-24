/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:29:50 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/13 11:58:22 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combination(int n, int combinations[], int a, int i)
{
	int	w;

	w = 0;
	if (a == n)
	{
		if (i != n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		while (w < n)
		{
			ft_putchar('0' + combinations[w]);
			w++;
		}
		return ;
	}
	if (i >= 10)
	{
		return ;
	}
	combinations[a] = i;
	ft_combination(n, combinations, a + 1, i + 1);
	ft_combination(n, combinations, a, i + 1);
}

void	ft_print_combn(int n)
{
	int	combinations[9];

	ft_combination(n, combinations, 0, 0);
}

int	main(void)
{
	int	n;

	printf("Please enter a number: ");
	scanf("%i", &n);
	ft_print_combn(n);
	return (0);
}
