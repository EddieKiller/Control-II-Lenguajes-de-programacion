# Makefile simple para varios archivos .c

# Lista de los archivos fuente
SRC = for.c break.c continue.c while.c if_else_anidado.c if_else.c switch.c do_while.c

# Nombre del archivo ejecutable para cada archivo fuente
TARGETS = $(SRC:.c=)

# Regla predeterminada para compilar todos los archivos
all: $(TARGETS)

# Regla para compilar cada archivo .c a su respectivo ejecutable
%: %.c
	gcc -o $@ $<

# Limpiar los ejecutables generados
clean:
	rm -f $(TARGETS)

.PHONY: all clean
