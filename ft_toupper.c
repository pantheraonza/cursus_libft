/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:02:22 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:02:23 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path w/lowercase): Given 'a'\n");
// 	printf("--> Orig %c | Repl %c\n", toupper('a'), ft_toupper('a'));
// 	printf("--> Orig %c | Repl %c\n", toupper('z'), ft_toupper('z'));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Already uppercase, no change): Given 'A'\n");
// 	printf("--> Orig %c | Repl %c\n", toupper('A'), ft_toupper('A'));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Digit, no change): Given '1'\n");
// 	printf("--> Orig %c | Repl %c\n", toupper('1'), ft_toupper('1'));
// 	printf("************************************************************\n");
// 	printf("Test 3 (Symbol just below 'a', no change): Given '`' (96)\n");
// 	printf("--> Orig %d | Repl %d\n", toupper('`'), ft_toupper('`'));
// 	printf("************************************************************\n");
// 	printf("Test 4 (Negative int, EOF-like): Given -1\n");
// 	printf("--> Orig %d | Repl %d\n", toupper(-1), ft_toupper(-1));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME
// toupper — convert lowercase character to uppercase
//
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int
// toupper(int c);
//
// DESCRIPTION
// The toupper() function converts a lowercase letter to the
// corresponding uppercase letter, if a mapping exists. Other
// characters are returned unchanged.
//
// RETURN VALUES & ERRORS
// Returns the converted character, cast to an int, or c unchanged if
// no conversion was applicable.
//
// EXTRA NOTES BY CRIREDON
//
// How to build it?
// 1. Cast c to unsigned char (same defensive pattern as every is*()
// function) — but ONLY to use for the comparison.
// 2. If the value falls in ['a', 'z'], subtract 32 to land on the
// matching uppercase letter.
// 3. Otherwise, return c UNCHANGED — the original parameter, not the
// cast variable.
//
// Why must the "no conversion" branch return c and NOT unsigned_c?
// This was an actual bug caught while testing against real toupper():
// toupper(-1) returns -1 in glibc, not 255. If a value does not fall
// in the convertible range, the function must hand back EXACTLY what
// it received, with no reinterpretation at all — the unsigned char
// cast exists purely to make the RANGE CHECK safe (so that an
// extended-ASCII byte arriving as a negative int still compares
// correctly against 'a'/'z'), it was never meant to change what gets
// returned when no conversion happens. Returning the cast variable
// instead of c silently corrupts EOF (-1) into 255, which would break
// any caller looping with "while ((c = ft_getchar()) != EOF)"-style
// logic that also ran the result through ft_toupper.
//
// Why is the magic number 32 used, and where does it come from?
// In the ASCII table, every lowercase letter sits exactly 32 places
// after its uppercase counterpart: 'a' is 97, 'A' is 65, and 97 - 32
// = 65. This 32-distance pattern repeats for the entire alphabet
// because uppercase and lowercase blocks are laid out in parallel,
// 32 positions apart, by design of the original ASCII standard.
//
// Why does the function return int instead of char?
// This matches the man page prototype exactly. Returning int also
// allows the function to safely pass through values like EOF (-1)
// unchanged, which would be lossy or ambiguous if forced into a
// signed or unsigned char return type.
//
// What happens with Test 4 ('`', ASCII 96) and why does it matter?
// '`' sits at ASCII 96, exactly ONE position before 'a' (97). It is
// the closest possible non-letter neighbour to the lowercase range.
// Testing it confirms the boundary check (>= 'a') is strict and does
// not accidentally include the character just outside the range —
// the kind of off-by-one bug that is easy to introduce and easy to
// miss with only mid-range letters as test data.
//
// Is there any correlation with the Piscine content?
// ft_strupcase from Piscine C02 looped this exact same -32 logic over
// every character of a whole string. ft_toupper isolates the
// single-character transformation so it can now be reused: a future
// ft_strupcase rewritten with libft would just call ft_toupper() once
// per byte inside its loop, instead of repeating the arithmetic.
//
// ******************************* M A N U A L ********************************
