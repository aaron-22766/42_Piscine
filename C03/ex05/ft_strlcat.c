/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:09:32 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 14:02:26 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
