/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:24:51 by kpuwar            #+#    #+#             */
/*   Updated: 2022/06/10 22:24:52 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(char begin, char travel, char end, int columns)
{
	int	column_tracker;

	if (columns == 1)
	{
		ft_putchar(begin);
	}
	else if (columns == 2)
	{
		ft_putchar(begin);
		ft_putchar(end);
	}
	else if (columns > 2)
	{
		column_tracker = 2;
		ft_putchar(begin);
		while (column_tracker++ < columns)
		{
			ft_putchar(travel);
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int columns, int rows)
{
	int	row_tracker;

	if (rows == 1)
	{
		ft_printline('A', 'B', 'C', columns);
	}
	else if (rows == 2)
	{
		ft_printline('A', 'B', 'C', columns);
		ft_printline('C', 'B', 'A', columns);
	}
	else if (rows > 2)
	{
		row_tracker = 2;
		ft_printline('A', 'B', 'C', columns);
		while (row_tracker++ < rows)
		{
			ft_printline('B', ' ', 'B', columns);
		}
		ft_printline('C', 'B', 'A', columns);
	}
}
