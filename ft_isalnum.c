/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:20 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:21 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path w/digits & letters): Given '9', 'a', 'M'\n");
// 	printf("--> Orig %d | Repl %d\n", isalnum('9'), ft_isalnum('9'));
// 	printf("--> Orig %d | Repl %d\n", isalnum('a'), ft_isalnum('a'));
// 	printf("--> Orig %d | Repl %d\n", isalnum('M'), ft_isalnum('M'));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Space, must be false): Given ' '\n");
// 	printf("--> Orig %d | Repl %d\n", isalnum(' '), ft_isalnum(' '));
// 	printf("************************************************************\n");
// 	printf("Test 3 (Symbol between '9' and 'A'): Given ':' (58)\n");
// 	printf("--> Orig %d | Repl %d\n", isalnum(':'), ft_isalnum(':'));
// 	printf("************************************************************\n");
// 	printf("Test 4 (Extended ASCII via negative signed char): Given -1\n");
// 	printf("--> Orig %d | Repl %d\n", isalnum(-1), ft_isalnum(-1));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME
// isalnum — array of character test functions
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int
// isalnum(int c);
// DESCRIPTION
// The isalnum() function tests for any character for which isalpha()
// or isdigit() is true — that is, any letter ('A'-'Z', 'a'-'z') or
// any digit ('0'-'9').
// RETURN VALUES & ERRORS
// Nonzero if c falls into the tested class, zero if not. For libft
// purposes, the return value must be exactly 1 if true, 0 if false.
// EXTRA NOTES BY CRIREDON
// How to build it?
// 1. Cast c to unsigned char.
// 2. OR together THREE ranges: ['a','z'], ['A','Z'], ['0','9'] — this
// is literally isalpha()'s two ranges plus isdigit()'s one range,
// combined into a single condition.
// 3. Return 1 if any range holds, 0 otherwise.
// Why could this function be written as a single call to
// (ft_isalpha(c) || ft_isdigit(c)) instead of repeating all three
// range checks inline — and is doing so a Norma violation?
// Functionally, calling the two already-existing helper functions
// would be both shorter AND would directly mirror the man page's own
// description ("equivalent to (isalpha(c) || isdigit(c))"). It is NOT
// a Norma violation to do so — this version keeps the three ranges
// inline only to match the original structure already submitted and
// evaluated; reusing ft_isalpha/ft_isdigit directly is equally valid
// and arguably better practice (avoids ever having the same range
// boundaries written in two places that could drift out of sync).
// What does test ':' (ASCII 58) check?
// ':' sits immediately after '9' (57) and before 'A' (65) — the
// tightest boundary test between the digit range and the uppercase
// range, confirming none of the three OR'd conditions accidentally
// leaks into this gap.
// Why does the test output above show "Orig 8" instead of "Orig 1"
// for a true case — is that a bug?
// No. glibc's real isalnum() returns an internal bitmask value, not
// literally 1 — the standard only guarantees "nonzero if true". The
// libft subject is stricter: ft_isalnum must return EXACTLY 1, not
// just any nonzero value. A mismatch like "Orig 8 | Repl 1" in the
// test output is expected — both are "truthy" in C, but only the
// Repl value satisfies the libft Part 1 specification.
// Is there any correlation with the Piscine content?
// No direct ancestor in the Piscine modules. ft_isalnum is the most
// natural function to demonstrate how libft's own building blocks
// compose: it is defined entirely in terms of what isalpha() and
// isdigit() already check, even when (as here) it is implemented with
// inline ranges rather than direct calls to those two sibling
// functions.
// ******************************* M A N U A L ********************************
