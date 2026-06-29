/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:01:45 by criredon          #+#    #+#             */
/*   Updated: 2026/06/11 17:01:47 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*r;
//
// 	printf("Tests with Replicated Function (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path): trim(\"   hello world   \", \" \")\n");
// 	r = ft_strtrim("   hello world   ", " ");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 1 (Different trim char): trim(\"xxhelloxx\", \"x\")\n");
// 	r = ft_strtrim("xxhelloxx", "x");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 2 (Empty s1): trim(\"\", \"x\")\n");
// 	r = ft_strtrim("", "x");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 3 (Empty set, nothing to trim): trim(\"hello\", \"\")\n");
// 	r = ft_strtrim("hello", "");
// 	printf("--> Repl \"%s\" (unchanged)\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 4 (Trim char appears in the MIDDLE too, must NOT be\n");
// 	printf("removed there): trim(\"xhelxloxworldx\", \"x\")\n");
// 	r = ft_strtrim("xhelxloxworldx", "x");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 5 (Entire string is in set, must NOT underflow): \"xxxx\"\n");
// 	r = ft_strtrim("xxxx", "x");
// 	printf("--> Repl \"%s\" (empty, not NULL)\n", r);
// 	free(r);
// 	return (0);
// }
