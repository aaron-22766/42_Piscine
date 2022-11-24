/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:33:25 by arabenst          #+#    #+#             */
/*   Updated: 2022/06/20 13:48:58 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	strlcat(char *dst, char *src, unsigned int dsize)
{
	char *odst = dst;
	char *osrc = src;
	unsigned int n = dsize;
	unsigned int dlen;

	/* Find the end of dst and adjust bytes left but don't go past end. */
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dsize - dlen;

	if (n-- == 0)
		return(dlen + strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';

	return(dlen + (src - osrc));	/* count does not include NUL */
}

int	main(void)
{
	char	dest[20] = "abcdefghijklmno";
	char	src[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%s\n", dest);
	printf("%i\n%s\n", strlcat(&dest[0], &src[0], 17), dest);
	return (0);
}
