 



#
# Compilation tools configuration.
#

# compiler
export CC = gcc
export CCFLAGS =
export LDFLAGS =
export CCOPTIM   = -O0
export CCDEBUG   = -g 
export CCDEFINE  = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_XOPEN_SOURCE=700 -D_XOPEN_SOURCE_EXTENDED -D_GNU_SOURCE
export CCCOMPIL  = -std=c99 -Wall -Wextra -Woverride-init
export CCFLAGS  += $(CCOPTIM) $(CCDEBUG) $(CCCOMPIL) $(CCDEFINE) $(CCCONFIG)
export CCINCLUDE = 

# Files.
export RM = rm -f
export MV = mv
export CP = cp
export CD = cd

# Documentation.
export DOXYGEN = doxygen
export DOXYFILE = Doxyfile
export DOXYGENFLAGS =



#
# Binary to generate.
#
EXEC = echecs


#
# Program entry point.
#
MAIN = main.c

#
# Makefile rules.
#

#SRC = $(filter-out $(wildcard main.c), $(wildcard *.c))
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Compilation.
all: $(OBJ)
	$(CC) $(CCFLAGS) $(CCINCLUDE) $(OBJ) -o $(EXEC) $(LDFLAGS)

.c.o:
	$(CC) -c $(CCFLAGS) $(CCINCLUDE) $< -o $@

run:
	./$(EXEC)

# Clean.
clean:
	$(RM) $(OBJ)
	$(RM) $(EXEC)

# Documentation.
documentation:
	$(DOXYGEN) $(DOXYGENFLAGS) $(DOXYGENCONF)

