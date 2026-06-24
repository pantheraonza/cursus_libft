/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:07:38 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:07:39 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == '\0' || dst == '\0')
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] == src[i];
		i++;
	}
	dst[i] == '\0';
	return (i);
}

#include <stdio.h>
#include <bsd/string.h>


/* ******************************* M A N U A L *********************************

EXTRA NOTES BY CRIREDON
Some funcions such as strlcpy, strlcat, and bzero, are not included in the
libraby glibc. In order to compare the replicated functions with the system
standard it will be necessary to include <bsd/string.h> and compile with -lbsd.

******************************** M A N U A L ******************************** */