/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:44:16 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/22 16:57:47 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*ptr;
	int		i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (start > (size - 1))
	{
		ptr = ft_strdup("");
		return (ptr);
	}
	if (size <= len)
		len = size - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !ptr)
		return (NULL);
	while (len-- && s[start])
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* #include <stdio.h>
int	main(void)
{
	char *test = ft_substr("42", 0, 0);
	size_t	len = ft_strlen(test);
	printf("%zu", len);
} */
