/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 16:16:59 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[12] = "";
	char	to_find[7] = "";

	if (ft_strstr(&str[0], &to_find[0]) != (void *)0)
	{
		printf("%s\n", ft_strstr(&str[0], &to_find[0]));
	}
	else
	{
		printf("No match!\n");
	}
	return (0);
}
