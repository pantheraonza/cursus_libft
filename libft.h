/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:17:26 by criredon          #+#    #+#             */
/*   Updated: 2026/06/03 16:17:28 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

// ----- COMPLETED -----
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);

// ----- ON GOING -----
char	*ft_strchr(const char *s, int c);

// ----- PENDING -----
// ----- String search -----
// char	*ft_strrchr(const char *s, int c);
// char	*ft_strnstr(const char *big, const char *little, size_t len);
// ----- String comparison -----
// int		ft_strncmp(const char *s1, const char *s2, size_t n);
// ----- String copy / concatenation (size-bounded) -----
// size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// size_t	ft_strlcat(char *dst, const char *src, size_t size);
// ----- String duplication (uses malloc) -----
// char	*ft_strdup(const char *s);
// int		ft_atoi(const char *nptr);
// void	*ft_memset(void *s, int c, size_t n);
// void	ft_bzero(void *s, size_t n);
// void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*ft_memmove(void *dest, const void *src, size_t n);
// void	*ft_memchr(const void *s, int c, size_t n);
// int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif

// ******************************** M A N U A L ********************************
// FUNCTION REFERENCE BY CATEGORY
// ----- Character classification -----
// ft_isalpha  : returns 1 if c is a letter, 0 otherwise.
// ft_isdigit  : returns 1 if c is a digit ('0'-'9'), 0 otherwise.
// ft_isalnum  : returns 1 if c is a letter or digit, 0 otherwise.
// ft_isascii  : returns 1 if c is in [0, 127], 0 otherwise.
// ft_isprint  : returns 1 if c is printable (incl. space), 0 otherwise.
// ----- Character conversion -----
// ft_toupper  : returns c in uppercase if lowercase, c unchanged otherwise.
// ft_tolower  : returns c in lowercase if uppercase, c unchanged otherwise. 
// ----- String length -----
// ft_strlen   : returns the length of s, excluding the '\0'.
// ----- String search -----
// ft_strchr   : returns a pointer to the first occurrence of c in s.
// ft_strrchr  : returns a pointer to the last occurrence of c in s.
// ft_strnstr  : returns a pointer to the first occurrence of little in big.
// ----- String comparison -----
// ft_strncmp  : compares at most n bytes of s1 and s2.
// ----- String copy / concatenation (size-bounded) -----
// ft_strlcpy  : copies src into dst within size, returns length tried.
// ft_strlcat  : appends src to dst within size, returns length tried.
// ----- String duplication (uses malloc) -----
// ft_strdup   : returns a malloc'd copy of s, or NULL on failure.
// ----- String / number conversion -----
// ft_atoi     : converts the numeric portion of nptr to an int.
// ----- Memory operations -----
// ft_memset   : fills the first n bytes of s with byte value c.
// ft_bzero    : fills the first n bytes of s with zero bytes.
// ft_memcpy   : copies n bytes from src to dest (no overlap allowed).
// ft_memmove  : copies n bytes from src to dest (overlap-safe).
// ft_memchr   : returns a pointer to the first occurrence of c in s.
// ft_memcmp   : compares the first n bytes of s1 and s2.
// EXTRA NOTES BY CRIREDON
// Why are there no comments at all between #ifndef and #endif?
// The Norma's allowed header content (III.5) is an explicit list:
// header inclusions, declarations, defines, prototypes, and macros.
// Comments are not on that list. Every explanatory comment in this
// file — including the one-line purpose of each function above —
// therefore lives strictly AFTER #endif, where it cannot be mistaken
// for header content.
// Why <stddef.h> here and not <stdlib.h> alone?
// size_t is defined in <stddef.h>. It is the unsigned integer type
// used everywhere in this header (ft_strlen, ft_memset, ft_strlcpy,
// ft_strlcat...) because a length or a byte count can never be
// negative, and size_t is guaranteed to be large enough to hold the
// size of any object on the system.
// Why <stdlib.h> here too?
// ft_strdup() calls malloc() internally, so the prototype for
// malloc() must be visible wherever libft.h is included.
// Does including <stddef.h> and <stdlib.h> break the idea of libft
// being a self-contained library?
// No. The functions being reimplemented from scratch are the ones
// that belong to libc's FUNCTION surface (strlen, memset, atoi,
// etc.) — that is the "no external dependency" rule the subject is
// actually about. <stddef.h> is not a function library: it defines
// fundamental LANGUAGE types and constants (size_t, NULL,
// ptrdiff_t) that are effectively part of the C compiler itself,
// not something libft is meant to reimplement. <stdlib.h> is
// included here only for malloc()'s prototype, and ft_strdup
// calling the real malloc() is explicitly required by the subject
// ("you will need to use malloc()") — it is not an optional
// convenience, it is the only way to satisfy the function's
// contract.
// Why use # include / # define inside the include guard, with a
// leading '#' indented by one space?
// The Norma explicitly requires this (III.7): "You must indent the
// characters that follow #if, #ifdef, or #ifndef." This is not a
// stylistic choice — it is the literal rule, and the Norma's own
// official example in chapter III.5 shows exactly this pattern:
// #ifndef FT_HEADER_H / # define FT_HEADER_H / # include <stdlib.h>
// / ... / #endif. The leading directive (#ifndef) stays at column
// 0, and every directive nested inside it gets indented with "# "
// to visually show the nesting level — the same way braces show
// nesting level in normal code.
// ******************************* M A N U A L ********************************
