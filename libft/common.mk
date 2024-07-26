CC := cc
CFLAGS := -Wall -Wextra -Werror -g -c -o
SRCDIR := src
OBJDIR := build
OBJECTS_STANDARD := $(SOURCES_STANDARD:%.c=$(OBJDIR)/%.o)
OBJECTS_SHARED := $(SOURCES_SHARED:%.c=$(OBJDIR)/%.o)
OBJECTS_BONUS := $(SOURCES_BONUS:%.c=$(OBJDIR)/%.o)
NAME := ../../libft.a

.PHONY: all

all: $(NAME)

bonus: $(NAME) $(OBJECTS_BONUS)

$(OBJECTS_BONUS): $(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $@ $<
	ar -rs $(NAME) $@

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJECTS_STANDARD) $(OBJECTS_SHARED): $(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $@ $<

$(NAME): $(OBJECTS_STANDARD) $(OBJECTS_SHARED)
	ar -rcs $(NAME) $(OBJECTS_STANDARD) $(OBJECTS_SHARED)

clean:
	rm -rf $(OBJECTS_STANDARD) $(OBJECTS_SHARED) $(OBJECTS_BONUS)