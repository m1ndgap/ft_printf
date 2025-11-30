NAME = libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR)

$(NAME) : $(OBJS) $(LIBFT)
	@cp $(LIBFT) $@
	@ar rcs $(NAME) $(OBJS)

clean: 
	@rm -rf $(OBJS)
	@$(MAKE) -s -C $(LIBFT_DIR) $@

fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -s -C $(LIBFT_DIR) $@

re: fclean all
	@nm $(NAME)