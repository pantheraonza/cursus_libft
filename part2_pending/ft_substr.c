/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:01:12 by criredon          #+#    #+#             */
/*   Updated: 2026/06/11 17:01:13 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	*r;
//
// 	printf("Tests with Replicated Function (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path): substr(\"hello world\", 6, 5)\n");
// 	r = ft_substr("hello world", 6, 5);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 1 (len longer than available): substr(.., 6, 100)\n");
// 	r = ft_substr("hello world", 6, 100);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 2 (len=0): substr(\"hello\", 0, 0)\n");
// 	r = ft_substr("hello", 0, 0);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 3 (start exactly at last valid index): substr(.., 4, 10)\n");
// 	r = ft_substr("hello", 4, 10);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 4 (start equals strlen, must return empty string)\n");
// 	r = ft_substr("hello", 5, 3);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 5 (start beyond string length, must NOT crash)\n");
// 	r = ft_substr("hello", 100, 5);
// 	printf("--> Repl \"%s\" (empty, not NULL)\n", r);
// 	free(r);
// 	return (0);
// }