/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 18:41:47 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		match = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					match = 1;
				j++;
			}
			if (match == 0)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[15] = "abcdefghijbczk";
	char	to_find[7] = "bcz";

	if (ft_strstr(&str[0], &to_find[0]) != NULL)
	{
		printf("%s\n", ft_strstr(&str[0], &to_find[0]));
	}
	else
	{
		printf("No match!\n");
	}
	return (0);
}
