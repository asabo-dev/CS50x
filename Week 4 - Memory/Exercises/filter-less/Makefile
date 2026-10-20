# This file specifies what should happen 
# when we run a terminal command like make filter

# Whereas programs you may have written before were confined to just one file, 
# filter seems to use multiple files: filter.c and helpers.c

# compile with $ make filter
# run the program by running:$ ./filter -g images/yard.bmp out.bmp

# which takes the image at images/yard.bmp, 
# and generates a new image called out.bmp

filter:
	clang -ggdb3 -gdwarf-4 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-gnu-folding-constant -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -lm -o filter filter.c helpers.c
