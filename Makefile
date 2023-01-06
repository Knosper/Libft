# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroth <jroth@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 16:22:22 by jroth             #+#    #+#              #
#    Updated: 2022/05/20 17:14:10 by jroth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c \
		ft_bzero.c ft_calloc.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strcmp.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		get_next_line_bonus.c get_next_line_utils_bonus.c ft_strdupn.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

$(NAME): $(SRC)
	@cc -Wall -Werror -Wextra -c $(SRC)
	ar -rcs $(NAME) $(SRC:.c=.o)
	@make clean

all: $(NAME) 

clean:
	@rm -f *.o

fclean:
	@rm -f $(NAME)

re: fclean all $(NAME)

bonus: $(BONUS)
	@gcc -Wall -Werror -Wextra -c $(BONUS)
	@ar -r $(NAME) $(BONUS:.c=.o) 