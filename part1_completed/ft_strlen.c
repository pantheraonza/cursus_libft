/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:01:03 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:01:04 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions\n");
// 	printf("Given \"hello\": Orig %zu | Repl %zu\n",
// 		strlen("hello"), ft_strlen("hello"));
// 	printf("Given \"42\": Orig %zu | Repl %zu\n",
// 		strlen("42"), ft_strlen("42"));
// 	printf("Given \"\": Orig %zu | Repl %zu\n",
// 		strlen(""), ft_strlen(""));
// 	printf("Improvements to the Original Function\n");
// 	printf("Given NULL as an input for the Replicated Function: %zu\n",
// 		ft_strlen(NULL));
// 	printf("Given NULL as an input for the Original Function:\n");
// 	printf("%zu", strlen(NULL));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME & FAMILY
// strlen - string operations

// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <string.h>
// size_t strlen(const char *s);

// DESCRIPTION
// strlen() calculates the length of the string pointed to  by s, excluding
// the terminating null byte ('\0').

// RETURN VALUES & ERRORS
// strlen() returns the number of bytes in the string pointed to by s.

// EXTRA NOTES BY CRIREDON
// The function must not receive a NULL pointer (behaviour is undefined).
// 
// Compared to the Piscine C04, two changes are required for libft:
// 1. The return type is size_t, not int. size_t is an unsigned type large
//    enough to represent any object's size.
// 2. The parameter is (const char *s), not (char *str). The const keyword
//    guarantees that the function will not modify the string — a promise
//    that the compiler enforces and that callers rely on.
//
// The use %zu for size_t in printf is because size_t's size varies by system
// (e.g., 32/64-bit), unlike unsigned int. %zu ensures correct, portable output,
// preventing undefined behavior when sizes mismatch.
// Most commonly, printf will only read the lower-order bits of the size_t
// value (32 bits) and interpret them as an unsigned int. If the size_t value
// is larger than the maximum value an unsigned int can hold (4 billion),
// the printed number will be incorrect and likely much smaller than expected.
// ******************************* M A N U A L ********************************