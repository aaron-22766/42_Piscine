/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 12:37:21 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[12] = "abcdefghijk";
	char	to_find[7] = "iaj";

	if (strstr(&str[0], &to_find[0]) != NULL)
	{
		printf("%s\n", strstr(&str[0], &to_find[0]));
	}
	else
	{
		printf("No match!\n");
	}
	return (0);
}
