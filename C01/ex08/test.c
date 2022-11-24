/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:27:19 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/15 21:31:15 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			a = *(tab + i);
			b = *(tab + j);
			if (a > b)
			{
				*(tab + j) = a;
				*(tab + i) = b;
			}
			printf("%i, %i, %i, %i, %i\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int arr[5] = {9879, 0, 65, -715274617, -87};
	printf("%i, %i, %i, %i, %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	ft_sort_int_tab(&arr[0], 5);
	printf("%i, %i, %i, %i, %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return (0);
}
