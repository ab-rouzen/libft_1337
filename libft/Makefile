.PHONY: re clean

CC = gcc
FLAGS = -Wall -Wextra -Werror
MAIN = prog

SRCS = ${wildcard *.c}
BINS = $(SRCS:%.c=%.o)

re : ${MAIN}
	@echo "Umm, you're all set..."

${MAIN} : ${BINS}
	@echo "checking files.."
#	$(CC) $(FLAGS) -o $(MAIN) $(BINS) -g
	ar rcs libft.a ${BINS}

%.c%.o:
	$(CC) -c $? -o $@
	@echo "Creating object files..."

clean:
	@echo "Cleaning up..."
	rm -rvf *.o *.a ${BINS}
