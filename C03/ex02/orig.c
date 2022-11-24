/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 12:29:03 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[6] = "abd";
	char	src[30] = "";

	printf("%s\n", dest);
	printf("%s\n", strcat(&dest[0], &src[0]));
	return (0);
}
