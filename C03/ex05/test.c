/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 14:02:23 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	dest_length = i;
	while (src[j] != '\0')
		j++;
	src_length = j;
	j = 0;
	if (dest_length == size)
		return (src_length + dest_length);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_length + dest_length);
}

int	main(void)
{
	char	dest[20] = "abcdefghijklmno";
	char	src[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%s\n", dest);
	printf("%i\n%s\n", ft_strlcat(&dest[0], &src[0], 14), dest);
	return (0);
}
