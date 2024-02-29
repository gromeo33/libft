Library		= libft

files 	   =  ft_toupper \
			 ft_tolower \
			 ft_isalnum \
			 ft_isalpha \
			 ft_isascii \
			 ft_isdigit \
			 ft_isprint \
			 ft_strlen  \
			 ft_strlcpy \
			 ft_strlcat \
			 ft_strchr \
			 ft_strrchr \
			 ft_strncmp \
			 ft_strnstr \
			 ft_memchr \
			 ft_memcmp \
			 ft_memcpy \
			 ft_memset \
			 ft_bzero \
			 ft_memmove \
			 ft_atoi \
			 ft_strdup			

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

