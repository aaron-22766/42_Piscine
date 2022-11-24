/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:36:53 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/21 15:02:12 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb < 2)
		return (0);
	while (check <= nb / check)
	{
		if (nb == ((nb / check) * check))
			return (0);
		check++;
	}
	return (1);
}
