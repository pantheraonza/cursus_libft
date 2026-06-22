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

#include "libft.h"

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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path): Given \"hello\", \"a b c\"\n");
// 	printf("--> Orig %zu | Repl %zu\n", strlen("hello"), ft_strlen("hello"));
// 	printf("--> Orig %zu | Repl %zu\n",
// 		strlen("a b c"), ft_strlen("a b c"));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Empty string): Given \"\"\n");
// 	printf("--> Orig %zu | Repl %zu\n", strlen(""), ft_strlen(""));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Long string, > 100 chars)\n");
// 	printf("--> Orig %zu | Repl %zu\n",
// 		strlen("0123456789012345678901234567890123456789"
// 			"0123456789012345678901234567890123456789"
// 			"0123456789012345678901234567890123456789"
// 			"01234567890123456789"),
// 		ft_strlen("0123456789012345678901234567890123456789"
// 			"0123456789012345678901234567890123456789"
// 			"0123456789012345678901234567890123456789"
// 			"01234567890123456789"));
// 	printf("************************************************************\n");
// 	printf("Improvements to the Original Function\n");
// 	printf("Given NULL as an input for the Replicated Function: %zu\n",
// 		ft_strlen(NULL));
// 	printf("Given NULL as an input for the Original Function:\n");
// 	printf("%zu\n", strlen(NULL));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <string.h>
// size_t
// strlen(const char *s);
// DESCRIPTION
// The strlen() function calculates the length of the string s,
// excluding the terminating NULL byte ('\0').
// RETURN VALUES & ERRORS
// Returns the number of bytes in the string s. Behaviour is undefined
// if s is not NULL-terminated, or if s is NULL.
// EXTRA NOTES BY CRIREDON
// How to build it?
// Walk the string one byte at a time with a counter i, stopping the
// instant s[i] is the null terminator. The counter's final value IS
// the length — no separate "size" accumulator is needed.
// Why does the function return size_t and not int?
// A length can never be negative, and size_t is guaranteed by the C
// standard to be wide enough to represent the size of any object the
// platform can allocate. Returning int would silently overflow into
// negative territory on a string longer than INT_MAX bytes — size_t
// removes that ceiling.
// Why is the parameter (const char *s) and not just (char *s)?
// strlen() only reads the string, it never modifies it. Marking the
// parameter const is a compile-time promise to the caller: "this
// function will not write to your buffer." It also allows the
// function to legally accept string literals, which are themselves
// typed as const char * in modern C.
// What happens if s is NULL?
// Undefined behaviour — the function dereferences s[0] immediately
// inside the while condition, which crashes on a NULL pointer. The
// man page does not require a NULL check, and neither does the libft
// subject for this function: the caller is responsible for never
// passing NULL here. (Contrast this with ft_strdup, where the same
// crash is guarded against because malloc failure is a real runtime
// possibility, not just a contract violation by the caller.)
// ATENTION!!! In order to show the difference between ft_strlen & strlen
// please compile with the flag -Who-nonnull. It is recommended to exit
// FISH and execute the program to show the "segmentation fault" error.
// This function must not receive a NULL pointer (behaviour is undefined).
// The use %zu for size_t in printf is because its size varies by system,
// unlike unsigned int. %zu ensures correct, portable output, preventing
// undefined behavior when sizes mismatch. If the size_t value
// is larger than the maximum value an unsigned int can hold (4 billion),
// the printed number will be incorrect and likely much smaller than expected.
// Is there any correlation with the Piscine content?
// This is the same loop pattern from Piscine c04_v1/ft_strlen, with
// two adjustments required by libft: the return type changed from int
// to size_t, and the parameter gained both the const qualifier and a
// rename from str to s to match the standard prototype exactly.
//
// ******************************* M A N U A L ********************************
