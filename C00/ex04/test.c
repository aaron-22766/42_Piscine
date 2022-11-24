/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:29:33 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/09 18:20:36 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n < 0)
	{
		c = 'N';
	}
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
