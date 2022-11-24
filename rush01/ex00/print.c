/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:58:46 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/19 12:59:40 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	put_error(void)
{
	int		i;
	char	*str;

	i = 0;
	str = "Error\n";
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_tab(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
