/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:27:19 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/14 18:31:02 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			j++;
		}
		i++;
	}
}
