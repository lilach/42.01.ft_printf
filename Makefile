NAME = libftprintf.a
CC=cc
CFLAGS = -Wall -Werror -Wextra
DFLAGS = -g -MMD
FILES := 
OBJECTS := $(FILES:.c=.o)
DOSE := $(FILES: .c=.d)

all: $(NAME) clean

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)
	@rm -f $(DOSE)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
