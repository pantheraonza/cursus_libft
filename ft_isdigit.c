/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:11:47 by criredon          #+#    #+#             */
/*   Updated: 2026/06/03 16:11:49 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path with digits): Given '0', '9'\n");
// 	printf("--> Orig %d | Repl %d\n", isdigit('0'), ft_isdigit('0'));
// 	printf("--> Orig %d | Repl %d\n", isdigit('9'), ft_isdigit('9'));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Letter, must be false): Given 'a'\n");
// 	printf("--> Orig %d | Repl %d\n", isdigit('a'), ft_isdigit('a'));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Symbol, must be false): Given '/' (47)\n");
// 	printf("--> Orig %d | Repl %d\n", isdigit('/'), ft_isdigit('/'));
// 	printf("************************************************************\n");
// 	printf("Test 3 (NULL byte): Given '\\0'\n");
// 	printf("--> Orig %d | Repl %d\n", isdigit('\0'), ft_isdigit('\0'));
// 	printf("************************************************************\n");
// 	printf("Test 4 (Ext ASCII via negative signed char): Given -1, 256\n");
// 	printf("--> Orig %d | Repl %d\n", isdigit(-1), ft_isdigit(-1));
// 	printf("--> Orig %d | Repl %d\n", isdigit(256), ft_isdigit(256));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME & FAMILY
// isdigit - character classification functions
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int isdigit(int c);
// DESCRIPTION
// isdigit() checks for a digit (0 through 9).
// RETURN VALUES & ERRORS
// The values returned are nonzero if the character c falls into the tested
// class, and zero if not. For the purpose of 42 libft project, the return value
// must be: 1 if the character meets the tested condition, 0 if not.
// NOTES FROM THE MAN
// The standards require that the argument c for these functions is either
// EOF  or  a  value that  is  representable  in the type unsigned char. 
// If the argument c is of type char, it must be cast to unsigned char.
// EXTRA NOTES BY CRIREDON
// How to build it?
// 1. Cast c to unsigned char.
// 2. Compare the cast value against the inclusive range ['0', '9'].
// 3. Return 1 if it holds, 0 otherwise.
// Why is this the simplest is*() function in the whole file, and
// why does it still need the unsigned char cast despite that
// simplicity?
// Unlike ft_isalpha (two ranges OR'd together), ft_isdigit checks
// only one contiguous range, so the logic itself is minimal. The cast
// is still required for the exact same reason as every other is*()
// function: c may have originated from a signed char above 127
// (arriving here as a negative int), and without reinterpreting it as
// unsigned char first, the >= '0' comparison would silently fail in a
// platform-dependent way instead of cleanly returning false.
// What does '/' (ASCII 47) check?
// '/' sits immediately before '0' (48) in the ASCII table — the
// tightest possible boundary test below the digit range, confirming
// the >= '0' check does not accidentally include the character right
// before it.
// Why does the test output above show "Orig 2048" instead of
// "Orig 1" for a true case — is that a bug?
// No. glibc's real isdigit() returns an internal bitmask value, not
// literally 1 — the standard only guarantees "nonzero if true". The
// libft subject is stricter: ft_isdigit must return EXACTLY 1, not
// just any nonzero value. A mismatch like "Orig 2048 | Repl 1" in
// the test output is expected — both are "truthy" in C, but only the
// Repl value satisfies the libft Part 1 specification.
// Is there any correlation with the Piscine content?
// No direct ancestor in the Piscine modules. This was the FIRST is*()
// function built for libft, and the unsigned char cast pattern
// established here was then reused identically across every other
// character-classification and character-conversion function in this
// library (ft_isalpha, ft_isalnum, ft_isascii, ft_isprint,
// ft_toupper, ft_tolower).
// ******************************* M A N U A L ********************************
