/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:30:10 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 19:30:12 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path with lower & uppercase): Given 'a', 'Z' \n");
// 	printf("--> Orig %d | Repl %d\n", isalpha('a'), ft_isalpha('a'));
// 	printf("--> Orig %d | Repl %d\n", isalpha('Z'), ft_isalpha('Z'));
// 	printf("************************************************************\n");
// 	printf("Test 1 (Digit, must be false): Given '9'\n");
// 	printf("--> Orig %d | Repl %d\n", isalpha('9'), ft_isalpha('9'));
// 	printf("************************************************************\n");
// 	printf("Test 2 (Symbol, must be false): Given '_' (95)\n");
// 	printf("--> Orig %d | Repl %d\n", isalpha('_'), ft_isalpha('_'));
// 	printf("************************************************************\n");
// 	printf("Test 3 (NULL byte, must be false): Given '\\0'\n");
// 	printf("--> Orig %d | Repl %d\n", isalpha('\0'), ft_isalpha('\0'));
// 	printf("************************************************************\n");
// 	printf("Test 4 (Ext ASCII, negative signed char): Given -1, 256\n");
// 	printf("--> Orig %d | Repl %d\n", isalpha(-1), ft_isalpha(-1));
// 	printf("--> Orig %d | Repl %d\n", isalpha(256), ft_isalpha(256));
// 	return (0);
// }

// ******************************* M A N U A L ********************************
// NAME & FAMILY
// isalpha - character classification functions
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int isalpha(int c);
// DESCRIPTION
// isalpha() checks for an alphabetic character; in the standard "C" locale,
// it is equivalent to (isupper(c) || islower(c)).  
// RETURN VALUES
// The values returned are nonzero if the character c falls into the tested
// class, and zero if not. For the purpose of 42 libft project, the return
// value must be: 1 if the character meets the tested condition, 0 if not.
// ERRORS
// Not mentioned by the "man".
// NOTES FROM THE MAN
// The standards require that the argument c for these functions is either
// EOF  or  a  value that  is  representable  in the type unsigned char. 
// If the argument c is of type char, it must be cast to unsigned char.
// EXTRA NOTES BY CRIREDON
// To safely use the value of c inside the function, it must be cast to unsigned
// char before comparing. This is necessary because the parameter c is of type
// int, but it may originally come from a signed char, where values above 127
// are stored as negative numbers. For example, the character 'é' has the value
// 233 in extended ASCII, but in a system where char is signed, it gets stored
// as -23. Casting to unsigned char converts that -23 back to 233, guaranteeing
// that the value is always between 0 and 255, which is the valid range for any
// real character. The cast syntax is: variable = (destin_type)source_value;
// ******************************* M A N U A L ********************************
