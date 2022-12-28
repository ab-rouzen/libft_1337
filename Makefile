# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arouzen <arouzen@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/27 14:16:42 by arouzen           #+#    #+#              #
#    Updated: 2022/12/28 18:50:20 by arouzen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all re bonus clean fclean $(NAME)

NAME = libft.a
INCL = libft.h
BUILD_DIR = build/
MAND_SRCS = ft_atoi.c ft_bzero.c ft_calloc.c \
			ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c \
			ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_striteri.c ft_strcmp.c ft_tolower.c \
			ft_toupper.c ft_itoa.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c \
			ft_lstnew_alloca.c ft_strjoin_alloca.c \
			ft_strdup_alloca.c ft_itoa_alloca.c

MAND_OBJS = $(MAND_SRCS:%.c=$(BUILD_DIR)%.o)
BONU_SRCS = ft_lstnew.c ft_lstsize.c ft_lstadd_back.c \
			ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstmap.c \
			ft_lstremove.c
BONU_OBJS = $(BONU_SRCS:%.c=$(BUILD_DIR)%.o)
AR = ar
ARFLAGS = -rs
CC = gcc
LIB  = libft.a
FLAGS = -Wall -Wextra -Werror


all : $(NAME)
	@echo Everything is up to go!

$(NAME) : $(MAND_OBJS) $(INCL)
	@echo Checking files...
	$(AR) $(ARFLAGS) libft.a $(MAND_OBJS)

bonus : all $(BONU_OBJS)
	@echo Compiling bonus + mandatory objects...
	$(AR) $(ARFLAGS) libft.a $(BONU_OBJS)

clean :
	@echo cleaning up...
	rm -rf $(BUILD_DIR)

$(BUILD_DIR)%.o : %.c $(INCL)
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c  $< -o $@

fclean : clean
	rm -rf $(LIB)

re : fclean all
