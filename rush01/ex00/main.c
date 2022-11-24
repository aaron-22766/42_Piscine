/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:18:22 by coder             #+#    #+#             */
/*   Updated: 2022/06/19 13:11:05 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_error(void);
void	print_tab(int tab[4][4]);
int		find_solution(int tab[4][4], int *input, int pos);

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

int	*convert_input(char *str)
{
	int			i;
	int			j;
	static int	input[16];

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
