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



size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (src == '\0' || dst == '\0')
		return (NULL);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && (i + j) < size)
	{
		dst[i] == src[j];
		i++;
		j++;
	}
	dst[i] == '\0';
	return (i);
}


#include <stdio.h>

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

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	dst_f_orig[20];
	char	dst_f_repl[20];

	strcpy(dst_f_orig, "Hello");
	strcpy(dst_f_repl, "Hello");
	printf("Tests with Original & Replicated Functions (Edge Cases)\n");
	printf("************************************************************\n");
	printf("Test 0 (Happy Path): Append \" World\" into \"Hello\", size 20\n");
	printf("--> Return Value: Orig %zu | Repl %zu\n",
		strlcat(dst_f_orig, " World", 20), ft_strlcat(dst_f_repl, " World", 20));
	printf("--> Mod Buffer: Orig \"%s\" | Repl \"%s\"\n",
		dst_f_orig, dst_f_repl);
	memset(dst_f_orig, 0, 20);
	memset(dst_f_repl, 0, 20);
	strcpy(dst_f_orig, "Hello");
	strcpy(dst_f_repl, "Hello");
	printf("************************************************************\n");
	printf("Test 1 (Truncation): Append \" World\" into \"Hello\", size 8\n");
	printf("--> Return Value: Orig %zu | Repl %zu\n",
		strlcat(dst_f_orig, " World", 8), ft_strlcat(dst_f_repl, " World", 8));
	printf("--> Mod Buffer: Orig \"%s\" | Repl \"%s\"\n",
		dst_f_orig, dst_f_repl);
	printf("--> Truncation: Returned Value %zu vs Mod Buffer Length %zu\n",
		ft_strlcat(dst_f_repl, "", 8), strlen(dst_f_repl));
	memset(dst_f_orig, 0, 20);
	memset(dst_f_repl, 0, 20);
	strcpy(dst_f_orig, "Hello");
	strcpy(dst_f_repl, "Hello");
	printf("************************************************************\n");
	printf("Test 2 (Zero Size): Append \" World\" into \"Hello\", size 0\n");
	printf("--> Return Value: Orig %zu | Repl %zu\n",
		strlcat(dst_f_orig, " World", 0), ft_strlcat(dst_f_repl, " World", 0));
	printf("--> Mod Buffer (must stay untouched): Orig \"%s\" | Repl \"%s\"\n",
		dst_f_orig, dst_f_repl);
	memset(dst_f_orig, 0, 20);
	memset(dst_f_repl, 0, 20);
	strcpy(dst_f_orig, "HelloWorld");
	strcpy(dst_f_repl, "HelloWorld");
	printf("************************************************************\n");
	printf("Test 3 (size < strlen(dst)): dst len 10, append \"!!\", size 5\n");
	printf("--> Return Value: Orig %zu | Repl %zu\n",
		strlcat(dst_f_orig, "!!", 5), ft_strlcat(dst_f_repl, "!!", 5));
	printf("--> Mod Buffer (must stay untouched): Orig \"%s\" | Repl \"%s\"\n",
		dst_f_orig, dst_f_repl);
	memset(dst_f_orig, 0, 20);
	memset(dst_f_repl, 0, 20);
	strcpy(dst_f_orig, "");
	strcpy(dst_f_repl, "");
	printf("************************************************************\n");
	printf("Test 4 (dst empty): dst=\"\", append \"World\", size 20\n");
	printf("--> Return Value: Orig %zu | Repl %zu\n",
		strlcat(dst_f_orig, "World", 20), ft_strlcat(dst_f_repl, "World", 20));
	printf("--> Mod Buffer: Orig \"%s\" | Repl \"%s\"\n",
		dst_f_orig, dst_f_repl);
	memset(dst_f_orig, 0, 20);
	memset(dst_f_repl, 0, 20);
	strcpy(dst_f_orig, "Hello");
	strcpy(dst_f_repl, "Hello");
	printf("************************************************************\n");
	printf("Test 5 (src empty): dst=\"Hello\", append \"\", size 20\n");
	printf("--> Return Value: Orig %zu | Repl %zu\n",
		strlcat(dst_f_orig, "", 20), ft_strlcat(dst_f_repl, "", 20));
	printf("--> Mod Buffer: Orig \"%s\" | Repl \"%s\"\n",
		dst_f_orig, dst_f_repl);
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
// or that dst is not a proper “C” string).  The check exists to
// prevent potential security problems in incorrect code.
 
// EXTRA NOTES BY CRIREDON
 
// How to build it?
// 1. Measure and compare sizes: if the current size of dst is bigger than
// the size mentioned in the parameter, the buffer is invalid (already "full").
// In this case the return is size + strlen(src).
// 2. Copy and paste the characters of src to dst: repeat until src finished
// or that only 1 free byte exists in the buffer dst. This last byte should
// be \0.
// 3. Include the final character and return the total length of dst.
 
// Why use char *dst and const char *src in the prototype?
// char *dst (Writable Buffer): Passed without 'const' because the function
// must modify its memory by appending characters and a trailing '\0'.
// const char *src (Read-Only Source): Passed with 'const' as a safety
// contract; a promise to never modify the source string's content.
 
// Why declare char dst_f_orig[20] and use strcpy in the main tests?
// 'dst' must be declared as a modifiable array (char dst[20]).
// strcpy must be used to populate the array instead of assigning a value
// directly with '=' because an array name acts as a constant pointer to its
// allocated Stack memory. Direct assignment is valid only for a single
// memory space within the array (for example in dst_f_orig[1] = 'H').
 
// How to test it?
// Some functions such as strlcpy, strlcat, and bzero, are not included in
// the glibc library. In order to compare the replicated functions with the
// system standard it is necessary to include <bsd/string.h> and compile
// with -lbsd.
 
// What edge case is Test 1 (truncation) checking, and what IS
// truncation detection?
// Truncation detection is the process of checking whether a string
// operation had to cut off the original content because the destination
// buffer was too small to hold it. Comparing the returned value against
// strlen(dst) after the call reveals it: if the return is >= size,
// truncation happened — exactly the comparison Test 1 performs after
// calling ft_strlcat a second time on the already-truncated buffer.
// This matters in real code: strlcat() itself never tells you "I cut
// your string short", it just silently does it. The return value is
// the ONLY signal available, so ignoring it is a common bug source —
// the caller thinks the full string was appended when it was not.
 
// What edge case is Test 2 (size 0) checking?
// When size is 0, there is no space at all in dst for a NULL terminator,
// so the function must not write ANYTHING to dst — not even '\0'. The
// buffer must stay byte-for-byte untouched.
 
// What edge case is Test 3 (size < strlen(dst)) checking?
// This is different from Test 2: here dst is NOT empty, but the caller
// passed a size SMALLER than the string already stored in dst. The man
// page calls this an invalid/improper "C" string for the given size. The
// function must detect dst_len >= size and refuse to write anything,
// returning size + src_len. This is the case most beginners miss, because
// it looks like a "normal" buffer at first glance — it is only invalid
// relative to the size argument received.
 
// What edge case is Test 4 (dst empty) checking?
// When dst starts as "", dst_len is 0, so the function behaves like a
// bounded strcpy: it should fully copy src (as long as it fits) and
// return strlen(src). This confirms the dst_len + i offset logic still
// works correctly at the boundary i = 0.
 
// What edge case is Test 5 (src empty) checking?
// When src is "", the inner while loop condition src[i] != '\0' fails
// immediately, so no bytes are appended. dst stays as it was, and the
// return value equals dst_len (since src_len is 0). This confirms the
// function does not crash or misbehave when there is nothing to append.
 
// Why are these 5 cases the ones worth testing?
// Together they cover every boundary of the size/dst_len relationship:
// dst_len < size with room to spare (0), dst_len < size with not enough
// room (1), size = 0 (2), dst_len >= size (3), dst_len = 0 (4), and
// src_len = 0 (5). None of these require malloc or trigger undefined
// behaviour, so they are safe to test without AddressSanitizer — but they
// ARE exactly the kind of cases francinette does NOT check automatically,
// since they depend on exact buffer-boundary arithmetic rather than just
// "does the output string look right".
 
// Is there any correlation with the Piscine content?
// Compared to the Piscine C03 ft_strlcat (unsigned int nb), two changes
// are required for libft:
// 1. The parameter is (size_t size), not (unsigned int nb): size_t is the
// unsigned type used across the whole standard library for sizes/lengths.
// 2. The return type and truncation-detection trick (returning the would-be
// total length, even past size) were not required in the Piscine version,
// but are mandatory for libft compliance with the real strlcat() behaviour.
 
// ******************************* M A N U A L ********************************