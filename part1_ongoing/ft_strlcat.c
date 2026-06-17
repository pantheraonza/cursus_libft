/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:02:05 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:02:11 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	dst_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

int	main(void)
{
	char	d_orig_t1[20];
	char	d_repl_t1[20];
	char	d_orig_t2[20];
	char	d_repl_t2[20];
	char	d_orig_t3[20];
	char	d_repl_t3[20];

	strcpy(d_orig_t1, "Hello");
	strcpy(d_repl_t1, "Hello");
	strcpy(d_orig_t2, "42");
	strcpy(d_repl_t2, "42");
	strcpy(d_orig_t3, "");
	strcpy(d_repl_t3, "");

	printf("Tests with Original & Replicated Functions\n");
	printf("Test 1: Append \" World\" into \"Hello\", size 20\n");
	printf("Return Value: Orig %zu | Repl %zu\n",
		strlcat(d_orig_t1, " World", 20), ft_strlcat(d_repl_t1, " World", 20));
	printf("Result Content: Orig \"%s\" | Repl \"%s\"\n", d_orig_t1, d_repl_t1);
	printf("Tests with Original & Replicated Functions\n");
	printf("Test 1: Append \" World\" into \"Hello\", size 20\n");
	printf("Return Value: Orig %zu | Repl %zu\n",
		strlcat(d_orig_t1, " World", 20), ft_strlcat(d_repl_t1, " World", 20));
	printf("Result Content: Orig \"%s\" | Repl \"%s\"\n", d_orig_t1, d_repl_t1);
	return (0);
}

// ******************************** M A N U A L ********************************
// NAME
// strlcpy, strlcat — size-bounded string copying and concatenation

// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <string.h>
// size_t
// strlcat(char *dst, const char *src, size_t size);

// DESCRIPTION
// The strlcat() function appends the NULL-terminated string src to the end of
// dst.  It will append at most size - strlen(dst) - 1 bytes, NULL-terminating
// the result.

// The strlcpy() and strlcat() functions copy/concatenate strings respectively.
// They are designed to be safer, more consistent, and less error prone
// replacements for strncpy(3) and strncat(3).  Unlike those functions,
// strlcpy() and strlcat() take the full size of the buffer (not just the
// length) and guarantee to NULL-terminate the result (as long as size is larger
// than 0 or, in the case of strlcat(), as long as there is at least
// one byte free in dst).  Note that a byte for the NULL should be included in
// size.  Also note that strlcpy() and strlcat() only operate on true “C”
// strings.  This means that for strlcpy() src must be NULL-terminated and for
// strlcat() both src and dst must be NULL-terminated.

// RETURN VALUES & ERRORS
// The strlcpy() and strlcat() functions return the total length of the
// string they tried to create.  For strlcpy() that means the length of src.
// For strlcat() that means the initial length of dst plus the length of src.
// While this may seem somewhat confusing, it was done to make truncation de‐
// tection simple.

// Note, however, that if strlcat() traverses size characters without finding
// a NULL, the length of the string is considered to be size and the destina‐
// tion string will not be NULL-terminated (since there was no space for the
// NULL).  This keeps strlcat() from running off the end of a string.  In
// practice this should not happen (as it means that either size is incorrect
// or that dst is not a proper “C” string).  The check exists to prevent po‐
// tential security problems in incorrect code.

// EXTRA NOTES BY CRIREDON

// How to build it?
// 1. Measure and compare sizes: if the current size of dst is bigger than
// the size mentioned in the parameter, the buffer is invalid (already "full").
// In this case the return is size + strlen(src).
// 2. Copy and past the caracters of src to dst: repeat until src finished or
// that only 1 free byte exists in the buffer dst. This last byte should be \0.
// 3. Include the final caracter and return the total length of dst.

// Why use char *dest y const char *src in the prototype?
// char *dst (Writable Buffer): Passed without 'const' because the function
// must modify its memory by appending characters and a trailing '\0'.
// const char *src (Read-Only Source): Passed with 'const' as a safety
// contract; a promise to never modify the source string's content.

// Why declare char d_org_t1 and use strcpy in the main tests?
// 'dst' must be declared as a modifiable array (char dst[20]).
// strcpy must be used to populate the array instead of assigning a value
// directly with '=' because an array name acts as a constant pointer to its 
// allocated Stack memory. Direct assignment is valid only for a single
// memory space within the array (for example in d_orig_t1[1] = 'H').

// What is truncation detection?
// Truncation detection is the process of checking whether a data-transfer
// or string operation had to cut off the original content because the
// destination buffer was too small to hold it.

// How to test it?
// Some funcions such as strlcpy, strlcat, and bzero, are not included in the
// libraby glibc. In order to compare the replicated functions with the system
// standard it will be necessary to include <bsd/string.h> and compile with -lbsd.

// Is there any correlation with the Piscine content?
// Compared to the Piscine C03, two changes are required for libft:
// 2. The parameter is (size_t size), instead of (unsigned int nb). T....

// ******************************* M A N U A L ********************************