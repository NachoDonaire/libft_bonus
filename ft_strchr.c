/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndonaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:27:14 by ndonaire          #+#    #+#             */
/*   Updated: 2022/03/22 10:08:36 by ndonaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (*(s + a) != (unsigned char)c)
	{
		if (*(s + a) == '\0')
			return (0);
		a = a + 1;
	}
	return ((char *)(s + a));
}
