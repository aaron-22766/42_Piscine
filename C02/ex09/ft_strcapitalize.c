/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:33:18 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/19 10:32:59 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_charcapitalize(char *str, int k)
{
	if ((str[k] >= 'a') && (str[k] <= 'z'))
	{
		str[k] -= 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((str[i + 1] >= 'A') && (str[i + 1] <= 'Z'))
			str[i + 1] += 32;
		if (i == 0)
			str = ft_charcapitalize(str, 0);
		else if ((c < '0') || ((c > '9') && (c < 'A')))
			str = ft_charcapitalize(str, i + 1);
		else if (((c > 'Z') && (c < 'a')) || (c > 'z'))
			str = ft_charcapitalize(str, i + 1);
		i++;
	}
	return (str);
}
