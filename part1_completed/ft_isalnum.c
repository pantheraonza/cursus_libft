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

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	unsigned char	unsigned_c;

	unsigned_c = (unsigned char)c;
	if ((unsigned_c >= 'a' && unsigned_c <= 'z')
		|| (unsigned_c >= 'A' && unsigned_c <= 'Z')
		|| (unsigned_c >= '0' && unsigned_c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions\n");
// 	printf("For OK expect nonzero or 1\n");
// 	printf("Given '9': Orig %d | Repl %d\n", isalnum('9'), ft_isalnum('9'));
// 	printf("Given 'a': Orig %d | Repl %d\n", isalnum('a'), ft_isalnum('a'));
// 	printf("Given 'M': Orig %d | Repl %d\n", isalnum('M'), ft_isalnum('M'));
// 	printf("For NOK expect 0\n");
// 	printf("Given ' ': Orig %d | Repl %d\n", isalnum(' '), ft_isalnum(' '));
// 	printf("Given '\\n': Orig %d | Repl %d\n", isalnum('\n'), ft_isalnum('\n'));
// 	printf("Given NULL: Orig %d | Repl %d\n", isalnum('\0'), ft_isalnum('\0'));
// 	printf("Given -1: Orig %d | Repl %d\n", isalnum(-1), ft_isalnum(-1));
// 	printf("Given 256: Orig %d | Repl %d\n", isalnum(256), ft_isalnum(256));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME & FAMILY
// isalnum - character classification functions

// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int isalnum(int c);

// DESCRIPTION
// isalnum() checks for an alphanumeric character; it is  equivalent  to
// (isalpha(c)  ||  is‐digit(c)).

// RETURN VALUE
// The values returned are nonzero if the character c falls into the tested
// class, and zero if not. For the purpose of 42 libft project, the return value
// must be: 1 if the character meets the tested condition, 0 if not.

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

// ******************************* M A N U A L *********************************