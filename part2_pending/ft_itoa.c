/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:02:11 by criredon          #+#    #+#             */
/*   Updated: 2026/06/11 17:02:12 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





// #include <stdio.h>
// #include <limits.h>
//
// int	main(void)
// {
// 	char	*r;
//
// 	printf("Tests with Replicated Function (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path): itoa(42)\n");
// 	r = ft_itoa(42);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 1 (Zero): itoa(0)\n");
// 	r = ft_itoa(0);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 2 (Negative): itoa(-42)\n");
// 	r = ft_itoa(-42);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 3 (Single negative digit): itoa(-7)\n");
// 	r = ft_itoa(-7);
// 	printf("--> Repl \"%s\"\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 4 (INT_MAX): itoa(MAX)\n");
// 	r = ft_itoa(INT_MAX);
// 	printf("--> Repl \"%s\" (expected 2147483647)\n", r);
// 	free(r);
// 	printf("************************************************************\n");
// 	printf("Test 5 (INT_MIN, cannot be negated in plain int): itoa(MIN)\n");
// 	r = ft_itoa(INT_MIN);
// 	printf("--> Repl \"%s\" (expected -2147483648)\n", r);
// 	free(r);
// 	return (0);
// }