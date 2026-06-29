/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:02:58 by criredon          #+#    #+#             */
/*   Updated: 2026/06/11 17:02:59 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	if (fd == 1)
		write(1, &c, 1);
	write(1, &c, 2);
	return (0);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("Tests with Replicated Function (Edge Cases)\n");
// 	printf("************************************************************\n");
// 	printf("Test 0 (Happy path): write 'H' to fd 1 (stdout)\n");
// 	ft_putchar_fd('H', 1);
// 	printf("\n--> visible output above should be a single 'H'\n");
// 	printf("************************************************************\n");
// 	printf("Test 1 (Newline character): write '\\n' to fd 1\n");
// 	ft_putchar_fd('\n', 1);
// 	printf("--> a blank line should have appeared just above\n");
// 	printf("************************************************************\n");
// 	printf("Test 2 (Write to stderr instead of stdout): fd 2\n");
// 	ft_putchar_fd('E', 2);
// 	printf("\n--> 'E' should appear on stderr, not mixed into stdout\n");
// 	printf("************************************************************\n");
// 	printf("Test 3 (Extended ASCII byte, value > 127)\n");
// 	ft_putchar_fd((char)200, 1);
// 	printf("\n--> a single (possibly unprintable) byte was written\n");
// 	printf("************************************************************\n");
// 	printf("Test 4 (Null byte, must still write exactly 1 byte)\n");
// 	ft_putchar_fd('\0', 1);
// 	printf("--> no visible character above, but write() still ran\n");
// 	printf("************************************************************\n");
// 	printf("Test 5 (Invalid fd, must not crash): fd 99\n");
// 	ft_putchar_fd('X', 99);
// 	printf("--> write() silently fails on a bad fd, program continues\n");
// 	return (0);
// }