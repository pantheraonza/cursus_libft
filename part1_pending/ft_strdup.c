/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:04:09 by criredon          #+#    #+#             */
/*   Updated: 2026/06/10 17:04:10 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc *(ft_strlen(s));
	while (s[i] != '\0')
		&str[i] = s[i];
	&str[i] = '\0';
	return (&str);
}

/* ******************************* M A N U A L *********************************
// SYNOPSIS (LIBRARY & FUNCTION PROTOTYPE)
// #include <string.h>
// char *strdup(const char *s);
// DESCRIPTION
// The  strdup()  function returns a pointer to a new string which is a
// duplicate of the string s. Memory for the new string is obtained with
// malloc(3), and can be freed with free(3).
// The strndup() function is similar, but copies at most n bytes.
// If s is longer than n,  only  n bytes are copied, and a terminating
// null byte ('\0') is added.
// strdupa()  and  strndupa()  are  similar,  but  use alloca(3) to allocate
// the buffer.  They are available only when using the GNU GCC suite,
// and suffer from the same limitations described  in alloca(3)
// RETURN VALUES
// On  success, the strdup() function returns a pointer to the duplicated string.
// It returns NULL if insufficient memory was available, with errno set to
// indicate the cause of the error.
// ERRORS
// ENOMEM Insufficient memory available to allocate duplicate string.
******************************** M A N U A L ******************************** */