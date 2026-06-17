/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:01:14 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:01:15 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > 0 && i <= n)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[] = '\0';
	return (ptr);
}

int	main(void)
{
	ft_memset("Hello");
	return (0);
}

/* ******************************* M A N U A L *********************************
NAME
memset - fill memory with a constant byte

SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
#include <string.h>
void *memset(void *s, int c, size_t n);

DESCRIPTION
The  memset()  function fills the first n bytes of the memory area pointed
to by s with the constant byte c.

RETURN VALUES & ERRORS
The memset() function returns a pointer to the memory area s.

EXTRA NOTES BY CRIREDON
It is the fastest and most efficient way to initialize an array, zero out
a structure, or set memory to zero.
void *b: A pointer to the block of memory you want to fill. It is a void *
because memset doesn't care if you pass an array of int, char, or a struct;
it only sees raw memory.
The value to be copied. Even though it is passed as an int, the function
internally converts it to an unsigned char (1 byte) before writing it.
size_t len: The number of bytes to be filled.

******************************** M A N U A L ******************************** */