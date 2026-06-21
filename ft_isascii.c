/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:35 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:36 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path with boundaries): Given 0, 127\n");
// 	printf("--> Orig %d | Repl %d\n", isascii(0), ft_isascii(0));
// 	printf("--> Orig %d | Repl %d\n", isascii(127), ft_isascii(127));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Just past boundary): Given 128\n");
// 	printf("--> Orig %d | Repl %d\n", isascii(128), ft_isascii(128));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Negative): Given -1\n");
// 	printf("--> Orig %d | Repl %d\n", isascii(-1), ft_isascii(-1));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME
// isascii — array of character test functions
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int
// isascii(int c);
// DESCRIPTION
// The isascii() function tests for an ASCII character, which is any
// character with a value from 0 (zero) to 0x7F (127) inclusive.
// RETURN VALUES & ERRORS
// The values returned are nonzero if the character c falls into the
// tested class, and zero if not. For libft purposes, the return value
// must be exactly 1 if true, 0 if false.
// EXTRA NOTES BY CRIREDON
// How to build it?
// 1. Compare c directly against the inclusive range [0, 127]. No table
// lookup, no cast: c is checked as a plain int.
// 2. Return 1 if both bounds hold, 0 otherwise.
// Why does this function NOT cast c to unsigned char, unlike
// ft_isalpha or ft_isdigit?
// isascii() is the one is*() function defined for the FULL int domain,
// not just for values representable as unsigned char. The check
// c >= 0 already rejects every negative int directly — there is no
// sign-extension trap to guard against, because we are not comparing
// against a char-derived constant like 'A' or '0'. Casting here would
// not change the result, but it would misrepresent what the function
// is actually testing: a raw numeric range, not a character class.
// Why is isascii() considered obsolete by some standards (POSIX)?
// POSIX.1-2008 marks it obsolete because its result depends on how c
// was produced upstream: if c came from a signed char above 127, it
// arrives as a negative int and silently fails the test, even though
// the original byte value (e.g. 233 for an accented letter) was never
// outside the unsigned char range. Most other is*() functions defend
// against this with an explicit cast; isascii() does not, by design,
// since 0-127 IS the definition of ASCII regardless of signedness.
// Is there any correlation with the Piscine content?
// This function does not exist in the Piscine modules (C00-C04). It
// is a new addition required directly by the libft Part 1 subject.
//
// ******************************* M A N U A L ********************************
