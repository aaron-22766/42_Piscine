/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:06:41 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/15 12:10:30 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	d[7] = {'H', 'E', 'L', 'L', 'O', ' '};
	char	s[6] = {'W', 'O', 'R', 'L', 'D'};
	char	*dest;
	char	*src;

	dest = &d[0];
	src = &s[0];
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
