/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:38:21 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 21:47:48 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return ((void *)0);
}
