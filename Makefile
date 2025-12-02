NAME = libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_printf.c ./prints/printchr.c ./prints/printbase.c ./prints/printstr.c ./prints/printnbr.c ./prints/printadr.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

VALGRIND = valgrind -s --leak-check=full --show-leak-kinds=all \
           --track-origins=yes

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR)

$(NAME) : $(OBJS) $(LIBFT)
	@cp $(LIBFT) $@
	@ar rcs $(NAME) $(OBJS)

main.o: main.c
	@$(CC) $(CFLAGS) -I. -c main.c -o main.o

test: $(NAME) main.o
	@$(CC) main.o $(NAME) -o test.o
	@./test.o

valg: $(NAME) main.o
	@$(CC) main.o $(NAME) -o test.o
	@echo "Running Valgrind..."
	@$(VALGRIND) ./test.o 2>&1 | tee valgrind_report.txt

clean: 
	@rm -rf $(OBJS)
	@rm -rf test.o
	@$(MAKE) -s -C $(LIBFT_DIR) $@

fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -s -C $(LIBFT_DIR) $@

re: fclean all
	@nm $(NAME)