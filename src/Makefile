# Variables
CC = gcc
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, main.o html.o)

# Default target
all: $(OBJDIR) main

$(OBJDIR):
	mkdir -p $(OBJDIR)

# Compile source files into object files
$(OBJDIR)/%.o: %.c
	$(CC) -c $< -o $@

# Link object files into a single executable
main: $(OBJS)
	$(CC) -o $@ $^

# Clean up object files and executable
clean:
	rm -rf $(OBJDIR) main
