/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:49:00 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/19 12:49:01 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int tab[4][4], int *input, int pos)
{
	int	i;
	int	max_height;
	int	count_visible;

	i = 0;
	max_height = 0;
	count_visible = 0;
	if ((pos / 4) == 3)
	{
		while (i <= 3)
		{
			if (tab[i][pos % 4] > max_height)
			{
				max_height = tab[i][pos % 4];
				count_visible++;
			}
			i++;
		}
		if (input[pos % 4] != count_visible)
			return (1);
	}
	return (0);
}

int	col_down(int tab[4][4], int *input, int pos)
{
	int	i;
	int	max_height;
	int	count_visible;

	i = 3;
	max_height = 0;
	count_visible = 0;
	if ((pos / 4) == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max_height)
			{
				max_height = tab[i][pos % 4];
				count_visible++;
			}
			i--;
		}
		if (input[(pos % 4) + 4] != count_visible)
			return (1);
	}
	return (0);
}

int	row_left(int tab[4][4], int *input, int pos)
{
	int	i;
	int	max_height;
	int	count_visible;

	i = 0;
	max_height = 0;
	count_visible = 0;
	if ((pos % 4) == 3)
	{
		while (i <= 3)
		{
			if (tab[pos / 4][i] > max_height)
			{
				max_height = tab[pos / 4][i];
				count_visible++;
			}
			i++;
		}
		if (input[pos / 4 + 8] != count_visible)
			return (1);
	}
	return (0);
}

int	row_right(int tab[4][4], int *input, int pos)
{
	int	i;
	int	max_height;
	int	count_visible;

	i = 3;
	max_height = 0;
	count_visible = 0;
	if ((pos % 4) == 3)
	{
		while (i >= 0)
		{
			if (tab[pos / 4][i] > max_height)
			{
				max_height = tab[pos / 4][i];
				count_visible++;
			}
			i--;
		}
		if (input[pos / 4 + 12] != count_visible)
			return (1);
	}
	return (0);
}

int	position_correct(int tab[4][4], int *input, int pos)
{
	if (col_up(tab, input, pos) == 1)
		return (1);
	if (col_down(tab, input, pos) == 1)
		return (1);
	if (row_left(tab, input, pos) == 1)
		return (1);
	if (row_right(tab, input, pos) == 1)
		return (1);
	return (0);
}
