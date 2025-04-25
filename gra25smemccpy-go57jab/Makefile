# Bitte schauen Sie sich zunächst das Makefile der Aufgabe "ListAvg" an, da dort einige neue Konzepte erklärt werden, die in diesem Makefile schon 
# verwendet werden!

# -----------------------------------------------------------------------------------------------------------------------------------------------------------
# Wildcard Function
# -----------------------------------------------------------------------------------------------------------------------------------------------------------
#
# Die Wildcard Function sucht im Verzeichnis nach Dateien, deren Namen zu einem der gegebenen Muster passen. Sie gibt eine Liste dieser Dateinamen, 
# separiert durch ein Leerzeichen zurück. 
# Sie kann sehr hilfreich sein, alle Quelldateien eines Projektes zu finden.
#
# Aufruf: $(wildcard <pattern 1> <pattern 2> ... <pattern n>)



# -----------------------------------------------------------------------------------------------------------------------------------------------------------
# String Substitution Function
# -----------------------------------------------------------------------------------------------------------------------------------------------------------
#
# Für Makefiles gibt einige Funktionen, um bestimmte Substrings oder Patterns in Strings zu ersetzen. Diese sind insbesondere bei der Modifikation von 
# Dateiendungen recht hilfreich.
# Weitere interessante Funktionen: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html
#
# Bsp: $(subst from,to,text)
#      $(patsubst pattern,replacement,text)
#      $(var:pattern=replacement)
#      $(findstring find,text)


CC := cc

CFLAGS := -O0 -std=gnu17

# sucht alle C-Dateien im Verzeichnis
# SOURCES == main.c cstdmemccpy.c
SOURCES := $(wildcard *.c)

# kopiert die Werte von SOURCES zu OBJS, ersetzt dabei aber die Endungen .c mit .o
# OBJS == main.o cstdmemccpy.o
OBJS = $(SOURCES:.c=.o)

TARGET := cstdmemccpy



all: $(TARGET)

# Clean-Up
clean:
	rm *.o $(TARGET)

# Main Rule
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Pattern Rule
%.o: %.c
	cc $(CFLAGS) $< -c -o $@

.PHONY: all clean


