/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:18:22 by coder             #+#    #+#             */
/*   Updated: 2022/06/19 12:42:17 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_input(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc != 2)
		return (1);
	i = 0;
	str = argv[1];
	while (str[i] != '\0')
	{
		if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '4'))
			break ;
		else if (i % 2 == 1 && str[i] != ' ')
			break ;
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

void	put_str(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	put_error(void)
{
	put_str("Error\n");
}

int	*convert_input(char *str)
{
	int	i;
	int	j;
	static int input[16];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			input[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (input);
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

int	num_not_exists(int tab[4][4], int pos, int num)
{
	int i;

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

int	main(int argc, char **argv)
{
	int	tab[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int	*input;
	
	if (check_input(argc, argv) == 1)
	{
		put_error();
		return (0);
	}
	input = convert_input(argv[1]);
	if (input == 0)
	{
		put_error();
		return (0);
	}
	if (find_solution(tab, input, 0) == 0)
		print_tab(tab);
	else
		put_error();
	return (0);
}
