# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 16:48:53 by jarumuga          #+#    #+#              #
#    Updated: 2024/05/30 19:37:20 by jarumuga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_tolower.c \
      ft_toupper.c

BONUS_SRC = ft_lstnew.c \
            ft_lstadd_front.c \
            ft_lstsize.c \
            ft_lstlast.c \
            ft_lstadd_back.c \
            ft_lstdelone.c \
            ft_lstclear.c \
            ft_lstiter.c \
            ft_lstmap.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
