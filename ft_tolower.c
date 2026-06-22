/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:02:35 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:02:36 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path w/uppercase): Given 'A'\n");
// 	printf("--> Orig %c | Repl %c\n", tolower('A'), ft_tolower('A'));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Already lowercase, no change): Given 'a'\n");
// 	printf("--> Orig %c | Repl %c\n", tolower('a'), ft_tolower('a'));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Digit, no change): Given '1'\n");
// 	printf("--> Orig %c | Repl %c\n", tolower('1'), ft_tolower('1'));
// 	printf("************************************************************\n");
// 	printf("Test 3 (Symbol just past 'Z', no change): Given '[' (91)\n");
// 	printf("--> Orig %d | Repl %d\n", tolower('['), ft_tolower('['));
// 	printf("************************************************************\n");
// 	printf("Test 4 (Negative int, EOF-like): Given -1\n");
// 	printf("--> Orig %d | Repl %d\n", tolower(-1), ft_tolower(-1));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME
// tolower — convert uppercase character to lowercase
//
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int
// tolower(int c);
//
// DESCRIPTION
// The tolower() function converts an uppercase letter to the
// corresponding lowercase letter, if a mapping exists. Other
// characters are returned unchanged.
//
// RETURN VALUES & ERRORS
// Returns the converted character, cast to an int, or c unchanged if
// no conversion was applicable.
//
// EXTRA NOTES BY CRIREDON
//
// How to build it?
// This is the mirror image of ft_toupper: cast to unsigned char ONLY
// for the comparison, then if the value is in ['A', 'Z'], ADD 32
// instead of subtracting it. Otherwise, return c UNCHANGED — the
// original parameter, not the cast variable.
//
// Why must the "no conversion" branch return c and NOT unsigned_c,
// exactly like ft_toupper?
// Same bug, same fix: tolower(-1) returns -1 in glibc (EOF stays
// EOF), not 255. The unsigned char cast is only there to make the
// range check ['A','Z'] safe against extended-ASCII bytes arriving as
// negative ints — it must never leak into the return value when no
// conversion actually happens.
//
// Why add 32 here but subtract 32 in ft_toupper?
// The direction of the 32-position ASCII gap depends on which way you
// are converting. Uppercase letters sit BEFORE lowercase letters in
// the table ('A' = 65, 'a' = 97), so moving from upper to lower means
// moving forward (+32), and moving from lower to upper means moving
// backward (-32). Same constant, opposite sign, because the table
// itself only has one direction.
//
// What happens with Test 4 ('[', ASCII 91) and why does it matter?
// '[' sits at ASCII 91, exactly ONE position after 'Z' (90). Like the
// '`' case in ft_toupper, this is the tightest possible boundary
// test: it confirms the <= 'Z' check does not leak into the next
// character by mistake.
//
// Why does this function return int and not char, just like
// ft_toupper?
// Same reasoning: matching the standard prototype, and allowing
// negative sentinel values such as EOF (-1) to pass through the
// function without being silently reinterpreted as a valid byte.
//
// Is there any correlation with the Piscine content?
// ft_strlowcase from Piscine C02 applied this same +32 logic in a
// loop over a whole string. ft_tolower is the reusable single-byte
// version of that same transformation.
//
// ******************************* M A N U A L ********************************
