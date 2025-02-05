/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 03:22:05 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/22 19:03:24 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	while (n--)
	{
		*c_dest++ = *c_src++;
	}
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char	test[100] = "A";

	ft_memcpy(test, NULL, 0);
	printf("%s", &test[0]);
} */