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

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	ft_isalpha(int c)
{
	unsigned char	unsigned_c;

	unsigned_c = (unsigned char)c;
	if ((unsigned_c >= 'A' && unsigned_c <= 'Z') ||
		(unsigned_c >= 'a' && unsigned_c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/* int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	printf("Tests with Original & Replicated Functions\n");
	printf("For OK expect nonzero\n");
	printf("Lowercase & Uppercase\n");
	printf("'z':      Orig %d | Repl %d\n", isalpha('m'), ft_isalpha('m'));
	printf("'Z':      Orig %d | Repl %d\n", isalpha('M'), ft_isalpha('M'));
	printf("For OK expect 0\n");	
	printf("Digits\n");
	printf("'0':         Orig %d | Repl %d\n", isalpha('0'), ft_isalpha('0'));
	printf("'9':         Orig %d | Repl %d\n", isalpha('9'), ft_isalpha('9'));
	printf("Borders & Special Characters\n(For OK expect 0)\n");
	printf("'@':         Orig %d | Repl %d\n", isalpha('@'), ft_isalpha('@'));
	printf("'[':         Orig %d | Repl %d\n", isalpha('['), ft_isalpha('['));
	printf("'`':         Orig %d | Repl %d\n", isalpha('`'), ft_isalpha('`'));
	printf("'{':         Orig %d | Repl %d\n", isalpha('{'), ft_isalpha('{'));
	printf("' ':         Orig %d | Repl %d\n", isalpha(' '), ft_isalpha(' '));
	printf("'\\n':        Orig %d | Repl %d\n", isalpha('\n'), ft_isalpha('\n'));
	printf("Extreme Limits\n");
	printf("NULL:        Orig %d | Repl %d\n", isalpha('\0'), ft_isalpha('\0'));
	printf("-1:          Orig %d | Repl %d\n", isalpha(-1), ft_isalpha(-1));
	printf("256:         Orig %d | Repl %d\n", isalpha(256), ft_isalpha(256));
	printf("Extended ASCII\n");
	printf("'n tilde':   Orig %d | Repl %d\n", isalpha(241), ft_isalpha(241));
	printf("'c cedilla': Orig %d | Repl %d\n", isalpha(231), ft_isalpha(231));
	if (argc > 1)
	{
		c = argv[1][0];
	}
	printf("\nResults using the Command-Line Argument (1st character)\n");
	printf("Given Character:     %d\n", c);
	printf("Original Function:   %d\n", isalpha(c));
	printf("Replicated Function: %d\n", ft_isalpha(c));
	return (0);
} */

/* ******************************* M A N U A L *********************************
NAME
isalpha - character classification functions

SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
#include <ctype.h>
int isalpha(int c);

DESCRIPTION
isalpha() checks for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) || islower(c)).  In some locales, there may
be  additional  characters for which isalpha() is true—letters which are
neither uppercase nor lowercase.

RETURN VALUES
The values returned are nonzero if the character c falls into the tested
class, and zero if not.

42SUBJECT BY CRIREDON
For character classification functions (isalpha, isdigit, isalnum,
isascii, isprint), the return value must be:
1 if the character meets the tested condition.
0 if the character does not meet it. 

ERRORS
Not mentioned by the "man".

NOTES
The standards require that the argument c for these functions is either
EOF  or  a  value that  is  representable  in the type unsigned char. 
If the argument c is of type char, it must be cast to unsigned char.

EXTRA NOTES BY CRIREDON
To safely use the value of c inside the function, it must be cast to unsigned
char before comparing. This is necessary because the parameter c is of type
int, but it may originally come from a signed char, where values above 127
are stored as negative numbers. For example, the character 'é' has the value
233 in extended ASCII, but in a system where char is signed, it gets stored
as -23. Casting to unsigned char converts that -23 back to 233, guaranteeing
that the value is always between 0 and 255, which is the valid range for any
real character.

The cast syntax in C is:
	variable = (destination_type)source_value;

******************************** M A N U A L ******************************** */
