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

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions\n");
// 	printf("For OK expect nonzero or 1\n");
// 	printf("Given 0: Orig %d | Repl %d\n", isascii(0), ft_isascii(0));
// 	printf("Given 127: Orig %d | Repl %d\n", isascii(127), ft_isascii(127));
// 	printf("Given 'a': Orig %d | Repl %d\n", isascii('a'), isascii('a'));
// 	printf("Given '\\n': Orig %d | Repl %d\n", isascii('\n'), ft_isascii('\n'));
// 	printf("Given NULL: Orig %d | Repl %d\n", isascii('\0'), ft_isascii('\0'));
// 	printf("For NOK expect 0\n");
// 	printf("Given 128: Orig %d | Repl %d\n", isascii(128), ft_isascii(128));
// 	printf("Given -1: Orig %d | Repl %d\n", isascii(-1), ft_isascii(-1));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME & FAMILY
// isascii - character classification functions

// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int isascii(int c);

// DESCRIPTION
// isascii() checks whether c is a 7-bit unsigned char value that fits
// into the ASCII character set.

// RETURN VALUES
// The values returned are nonzero if the character c falls into the tested
// class, and zero if not. For the purpose of 42 libft project, the return
// value must be: 1 if the character meets the tested condition, 0 if not.

// ERRORS
// Not mentioned by the "man".

// NOTES FROM THE MAN
// isascii() is not specified by POSIX.1 but is present in most systems.
// POSIX.1-2008 marks isascii() as obsolete, noting that it cannot be
// used portably in a localized application.

// EXTRA NOTES BY CRIREDON
// Unlike the other is*() functions, isascii() does NOT require the
// unsigned char cast. The reason: isascii() is defined for all int values
// and simply checks if c falls in the range [0, 127]. There is no risk of
// sign extension causing a false result because the condition c >= 0 already
// excludes any negative value (which would come from a signed char above 127).
// The check is purely arithmetic, not a table lookup, so no cast is needed.

// ANOTHER REFERENCES BY CRIREDON
// https://azulschool.net/
// que-es-el-codigo-ascii-quien-lo-invento-y-para-que-sirve/
// https://es.wikipedia.org/wiki/ASCII

// ******************************* M A N U A L ********************************