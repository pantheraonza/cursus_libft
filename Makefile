# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: criredon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/22 16:41:08 by criredon          #+#    #+#              #
#    Updated: 2026/06/22 16:41:10 by criredon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
AR		=	ar
ARFLAGS	=	rcs
RM		=	rm -rf

SOURCES	= 	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlen.c \
			ft_strchr.c \
# 			ft_strrchr.c \
# 			ft_strnstr.c \
# 			ft_strncmp.c \
# 			ft_strlcpy.c \
# 			ft_strlcat.c \
# 			ft_strdup.c \
# 			ft_atoi.c \
# 			ft_memset.c \
# 			ft_bzero.c \
# 			ft_memcpy.c \
# 			ft_memmove.c \
# 			ft_memchr.c \
# 			ft_memcmp.c \
# 			ft_substr.c \
# 			ft_strjoin.c \
# 			ft_strtrim.c \
# 			ft_itoa.c \
# 			ft_putchar_fd.c

OBJECTS	=	$(SOURCES:.c=.o)
all:		$(NAME)
$(NAME):	$(OBJECTS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)
%.o:		%.c libft.h
				$(CC) $(CFLAGS) -c $< -o $@
clean:
				$(RM) $(OBJECTS)
fclean:		clean
				$(RM) $(NAME)
re:			fclean all
.PHONY:		all clean fclean re