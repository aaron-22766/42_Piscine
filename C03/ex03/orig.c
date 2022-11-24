/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 12:33:27 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "abhijk";
	char	src[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%s\n", dest);
	printf("%s\n", strncat(&dest[0], &src[0], 20));
	return (0);
}
