/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:11:22 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/18 15:00:26 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	d[30] = "hello world";
	char	s[100] = "what the actual fuck is this shit maybe this is the solution";

	printf("%i\n", ft_strlcpy(&d[0], &s[0], 31));
	printf("%s\n", d);
	return (0);
}
