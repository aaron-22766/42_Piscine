/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 11:54:42 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[30] = "aBcA";
	char	s2[10] = "aBcAe";

	printf("%i\n", strncmp(&s1[0], &s2[0], 0));
	return (0);
}
