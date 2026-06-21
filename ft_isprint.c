/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:47 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:49 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path with boundaries): Given ' ', 'A', '~'\n");
// 	printf("--> Orig %d | Repl %d\n", isprint(' '), ft_isprint(' '));
// 	printf("--> Orig %d | Repl %d\n", isprint('A'), ft_isprint('A'));
// 	printf("--> Orig %d | Repl %d\n", isprint('~'), ft_isprint('~'));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Out of boudaries, must be false): Given '\\t', DEL\n");
// 	printf("--> Orig %d | Repl %d\n", isprint(127), ft_isprint(127));
// 	printf("--> Orig %d | Repl %d\n", isprint('\t'), ft_isprint('\t'));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME
// isprint — array of character test functions
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int
// isprint(int c);
// DESCRIPTION
// The isprint() function tests for any printable character, including
// space (' '). A printable character is one in the range 0x20 (32) to
// 0x7E (126) inclusive.
// RETURN VALUES & ERRORS
// Nonzero if c falls into the tested class, zero if not. For libft
// purposes, the return value must be exactly 1 if true, 0 if false.
// EXTRA NOTES BY CRIREDON
// How to build it?
// 1. Cast c to unsigned char first, same defensive pattern as every
// other is*() function in this library.
// 2. Compare the cast value against the inclusive range [32, 126].
// 3. Return 1 if both bounds hold, 0 otherwise.
// Why is space (32) printable but tab (9) and DEL (127) are not?
// "Printable" in the ASCII table means the character occupies a
// visible (or at least spacing) position when rendered — space moves
// the cursor but does not draw a glyph, yet it is still classified as
// printable by the standard. Tab, newline, and DEL are control
// characters: they trigger an ACTION (move cursor, delete, etc.)
// rather than displaying a symbol, which is exactly what iscntrl()
// tests for. isprint() and iscntrl() partition the byte range with
// almost no overlap.
// Why must the unsigned char cast happen BEFORE comparing >= 32?
// Without the cast, a char value above 127 arriving through a signed
// char promotion would already be a negative int (e.g. -23 instead of
// 233). The comparison unsigned_c >= 32 would then evaluate against
// that negative number directly and incorrectly return false for a
// character that, once correctly reinterpreted as unsigned, falls
// well outside the printable range anyway — so the cast does not
// change THIS particular outcome, but it is the same defensive habit
// used everywhere else and is required to avoid undefined behaviour
// when characters ARE near the boundary.
// Why does the test output above show "Orig 16384" instead of
// "Orig 1" for a true case — is that a bug?
// No. glibc's real isprint() returns an internal bitmask value, not
// literally 1 — the standard only guarantees "nonzero if true". The
// libft subject is stricter: ft_isprint must return EXACTLY 1, not
// just any nonzero value. A mismatch like "Orig 16384 | Repl 1" in
// the test output is expected — both are "truthy" in C, but only the
// Repl value satisfies the libft Part 1 specification.
// Is there any correlation with the Piscine content?
// ft_str_is_printable from Piscine C02 used an equivalent inline
// check (str[i] >= 32 && str[i] <= 126) looped over a whole string.
// ft_isprint extracts that single-character condition into its own
// reusable building block — note how a future ft_str_is_printable
// rewritten with libft could now just call ft_isprint() per byte.
// ******************************* M A N U A L ********************************
