/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:01:29 by criredon          #+#    #+#             */
/*   Updated: 2026/06/11 17:01:31 by criredon         ###   ########.fr       */
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
// 	printf("Test 0 (Happy path): join(\"hello \", \"world\")\n");
// 	r = ft_strjoin("hello ", "world");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 1 (s1 empty): join(\"\", \"world\")\n");
// 	r = ft_strjoin("", "world");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 2 (s2 empty): join(\"hello\", \"\")\n");
// 	r = ft_strjoin("hello", "");
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 3 (both empty): join(\"\", \"\")\n");
// 	r = ft_strjoin("", "");
// 	printf("--> Repl \"%s\" (empty, not NULL)\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 4 (independence): result must not alias s1 or s2)\n");
// 	{
// 		char	a[6];
//
// 		strcpy(a, "hello");
// 		r = ft_strjoin(a, " world");
// 		a[0] = 'X';
// 		printf("--> a=\"%s\" | result still \"%s\"\n", a, r);
// 		free(r);
// 	}
// 	printf("************************************************************\n");
// 	printf("Test 5 (long strings, > 90 chars combined)\n");
// 	r = ft_strjoin("0123456789012345678901234567890123456789012345",
// 		"6789012345678901234567890123456789012345678901");
// 	printf("--> strlen(result) = %zu (expected 92)\n", strlen(r));
// 	free(r);
// 	return (0);
// }