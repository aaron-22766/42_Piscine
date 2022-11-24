/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:46:21 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/19 13:00:57 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	position_correct(int tab[4][4], int *input, int pos);

int	num_not_exists(int tab[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	find_solution(int tab[4][4], int *input, int pos)
{
	int	num;

	if (pos == 16)
		return (0);
	num = 1;
	while (num <= 4)
	{
		if (num_not_exists(tab, pos, num) == 0)
		{
			tab[pos / 4][pos % 4] = num;
			if (position_correct(tab, input, pos) == 0)
			{
				if (find_solution(tab, input, pos + 1) == 0)
					return (0);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
		num++;
	}
	return (1);
}
