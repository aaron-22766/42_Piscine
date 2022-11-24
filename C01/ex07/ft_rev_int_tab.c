/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:49:32 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/14 17:49:33 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	keep_value;

	i = 0;
	while (i < (size / 2))
	{
		keep_value = *(tab + size - i - 1);
		*(tab + size - i - 1) = *(tab + i);
		*(tab + i) = keep_value;
		i++;
	}
}
