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
	unsigned char	unsigned_c;

	unsigned_c = (unsigned char)c;
	if (unsigned_c >= 32 && unsigned_c <= 126)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("Tests with Original & Replicated Functions\n");
// 	printf("For OK expect nonzero or 1\n");
// 	printf("Given ' ': Orig %d | Repl %d\n", isprint(' '), ft_isprint(' '));
// 	printf("Given 'A': Orig %d | Repl %d\n", isprint('A'), ft_isprint('A'));
// 	printf("Given '~': Orig %d | Repl %d\n", isprint('~'), ft_isprint('~'));
// 	printf("For NOK expect 0\n");
// 	printf("Given '\\t': Orig %d | Repl %d\n", isprint('\t'), ft_isprint('\t'));
// 	printf("Given DEL: Orig %d | Repl %d\n", isprint(127), ft_isprint(127));
// 	printf("Given -1: Orig %d | Repl %d\n", isprint(-1), ft_isprint(-1));
// 	return (0);
// }

// ******************************** M A N U A L ********************************
// NAME & FAMILY
// isprint - character classification functions

// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <ctype.h>
// int isprint(int c);

// DESCRIPTION
// isprint() checks for any printable character including space.
// The printable characters are those with ASCII values 32 (space)
// through 126 (tilde ~). Character 127 (DEL) is NOT printable.

// RETURN VALUES & ERRORS
// The values returned are nonzero if the character c falls into the tested
// class, and zero if not. For the purpose of 42 libft project, the return
// value must be: 1 if the character meets the tested condition, 0 if not.

// NOTES FROM THE MAN
// The standards require that the argument c for these functions is either
// EOF or a value that is representable in the type unsigned char.
// If the argument c is of type char, it must be cast to unsigned char.

// EXTRA NOTES BY CRIREDON
// isprint() is the inverse of iscntrl(). The key boundary to memorize:
// - 32 (space) is the FIRST printable character — it IS included.
// - 127 (DEL) is a control character — it is NOT included.
// So the valid printable range is [32, 126] inclusive. The unsigned char
// cast is applied here for the same reason as in ft_isalpha and ft_isdigit:
// a char value above 127 arriving as a signed int would be negative, and
// without the cast it would fail the c >= 32 check incorrectly.

// ANOTHER REFERENCES BY CRIREDON
// https://azulschool.net/
// que-es-el-codigo-ascii-quien-lo-invento-y-para-que-sirve/
// https://es.wikipedia.org/wiki/ASCII

// ******************************* M A N U A L ********************************