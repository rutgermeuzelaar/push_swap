CC = cc
CFLAGS = -Wall -Wextra -Werror -g
OBJDIR = build
SRCDIR = src
LIB = libft/libft.a
NAME = push_swap
NAME_BONUS = checker
SOURCE = push_swap.c
SOURCE_BONUS = checker.c movecheck.c
SOURCE_SHARED = initialize_1.c initialize_2.c operations_helper_1.c \
parsing.c shared_operations.c sort_three.c sort_utilities_1.c \
sort_utilities_2.c sort_utilities_3.c stack_a_operations.c \
stack_b_operations.c terminate.c validation_1.c validation_2.c sorter.c \
moveset_1.c moveset_2.c move_calculation_1.c move_calculation_2.c \
move_calculation_3.c operations_helper_2.c move_calculation_4.c \
operations_helper_3.c 
OBJECTS = $(SOURCE:%.c=$(OBJDIR)/%.o)
OBJECTS_SHARED = $(SOURCE_SHARED:%.c=$(OBJDIR)/%.o)
OBJECTS_BONUS = $(SOURCE_BONUS:%.c=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

all: $(LIB) $(NAME) 

$(OBJECTS) $(OBJECTS_SHARED) $(OBJECTS_BONUS): $(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	mkdir $(OBJDIR)

$(NAME): $(LIB) $(OBJECTS_SHARED) $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS_SHARED) $(OBJECTS) $(LIB) -o $(NAME)

$(NAME_BONUS): $(LIB) $(OBJECTS_SHARED) $(OBJECTS_BONUS)
	$(CC) $(CFLAGS) $(OBJECTS_SHARED) $(OBJECTS_BONUS) $(LIB) -o $(NAME_BONUS)

$(LIB):
	$(MAKE) bonus -C libft/

bonus: $(NAME_BONUS)

clean:
	rm -r -f $(OBJECTS_SHARED) $(OBJECTS) $(OBJECTS_BONUS)
	$(MAKE) clean -C libft/

fclean: clean
	rm -r -f $(NAME) $(NAME_BONUS) $(LIB)
	$(MAKE) fclean -C libft/

re: fclean all