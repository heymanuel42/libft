# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 13:24:29 by ejanssen          #+#    #+#              #
#    Updated: 2022/11/15 11:20:47 by ejanssen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C 				= gcc
CFLAGS 			= -Wall -Werror -Wextra
SRC 			= ft_isalpha.c
SRC				+= ft_isdigit.c
SRC				+= ft_isalnum.c
SRC				+= ft_isascii.c
SRC				+= ft_isprint.c
SRC				+= ft_strlen.c
SRC				+= ft_toupper.c
SRC				+= ft_tolower.c
SRC				+= ft_strlcpy.c
SRC				+= ft_strlcat.c
SRC				+= ft_strchr.c
SRC				+= ft_strrchr.c
SRC				+= ft_strncmp.c
SRC				+= ft_strnstr.c
SRC				+= ft_atoi.c
SRC				+= ft_strdup.c
SRC				+= ft_calloc.c
SRC				+= ft_memset.c
SRC				+= ft_memcpy.c
SRC				+= ft_memmove.c
SRC				+= ft_bzero.c
SRC				+= ft_memchr.c
SRC				+= ft_memcmp.c

#PART TWO
SRC				+= ft_substr.c
SRC				+= ft_strjoin.c
SRC				+= ft_strtrim.c
SRC				+= ft_split.c
SRC				+= ft_itoa.c
SRC				+= ft_strmapi.c
SRC				+= ft_striteri.c
SRC				+= ft_putchar_fd.c
SRC				+= ft_putstr_fd.c
SRC				+= ft_putendl_fd.c
SRC				+= ft_putnbr_fd.c

#PRINTF
SRC 			+= printf/ft_printf.c
SRC				+= printf/ft_printf_char.c
SRC				+= printf/ft_printf_dec.c
SRC				+= printf/ft_printf_str.c
SRC				+= printf/ft_printf_hex.c
SRC				+= printf/ft_printf_ptr.c
SRC				+= printf/ft_printf_padstr.c

#BONUS
SRC				+= ft_lstnew.c
SRC				+= ft_lstadd_front.c
SRC				+= ft_lstsize.c
SRC				+= ft_lstlast.c
SRC				+= ft_lstadd_back.c
SRC				+= ft_lstdelone.c
SRC				+= ft_lstclear.c
SRC				+= ft_lstiter.c
SRC				+= ft_lstmap.c

#extra
SRC				+= ft_swap.c
OBJECTS				= $(SRC:.c=.o)

NAME				= libft.a

all: $(NAME)



$(NAME): $(OBJECTS)
	ar r $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re $(NAME)
