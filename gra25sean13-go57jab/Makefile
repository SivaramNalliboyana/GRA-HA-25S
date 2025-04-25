# Bitte schauen Sie sich zunächst das Makefile der Aufgabe "Collatz Orbit" an, da dort einige neue Konzepte erklärt werden, die in diesem Makefile schon 
# verwendet werden!

# -----------------------------------------------------------------------------------------------------------------------------------------------------------
# Variables
# -----------------------------------------------------------------------------------------------------------------------------------------------------------

# Auch in Makefiles können Variablen verwendet werden, um z.B. Änderungen von Dateinamen, Compilerwahl oder Compilerflags einfach und weniger 
# fehleranfällig zu gestalten. Dies kann bei großen Makefiles mit vielen Targets sehr hilfreich sein.
# Variablen in einem Makefile sind ähnlich zu Variablen in Programmiersprachen wie C oder Java und können in Target, Prerequisites und Rezept verwendet werden.
#
# Variablen haben einen beliebigen Namen (Folge an Zeichen) mit den folgenden Anforderungen/Regeln:
# 		- keine Nutzung von ':', '#', '='
#       - kein Whitespace 
# 		- case sensitivity (Foo =/= FOO)
#
# Definition einer Variable:
#       <variable> := <value>    oder   <variable> ::= <value>    oder   <variable> = <value>
#
# Die semantischen Unterschiede zwischen den verschiedenen Definitionen können Sie der offiziellen Dokumentation entnehmen.
# 
# Aufruf einer Variable (Ersetzen durch ihren Wert): 
#       $(<variable>)   oder   ${<variable>}
#
#
# Ein weiteres Konzept sind Automatic Variables. Die Werte dieser Variablen werden bei jeder Rule neu ermittelt und hängen von deren Target oder Prerequisites ab.
# Hier sind einige der wichtigen Automatic Variables:
#		$@ - Name des Targets
#		$< - Name des ersten Prerequisites
#		$? - Aufzählung aller Namen der Prerequisites, die neuer als das Target sind, getrennt durch ein Leerzeichen
#		$^ - Aufzählung aller Namen der Prerequisites, getrennt durch ein Leerzeichen, keine Duplikate
#		$+ - Aufzählung aller Namen der Prerequisites, getrennt durch ein Leerzeichen, Duplikate möglich 




# Spezifiziert den Compiler (z.B. "cc" oder "clang")
CC := cc

# Spezifiziert die Compilerflags (z.B. Optimierungsstufe, Compilerwarnungen, Debug-Info, Sanitizers, C-Standart-Version ... )
# TODO: add helpful Compilerflags like -Wall and -Wextra
CFLAGS := -O0 -std=gnu17

# Spezifiziert die C-Dateien, die als Prerequisites gebraucht werden, um das Haupttarget zu erstellen
SOURCES := main.c ean13.c

# Spezifiziert das Hauptziel des Makefiles, also der Name der zu erstellenden Datei
TARGET := ean13





all: $(TARGET)



# Clean-Up
clean:
	rm $(TARGET)



# Hier wurde ein weiteres Target "debug" hinzugefügt, welches zu den bestehenden Compilerflags das Flag "-g" hinzufügt 
# (welches wichtig ist, wenn man z.B. den GNU Debugger nutzen möchte) und danach die Rule des des Hauptziels aufruft
debug: CFLAGS += -g
debug: $(TARGET)



# Main Rule
$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

#    ==
#
# ean13: main.c ean13.c
#	cc -O0 -std=c17 -o ean13 main.c ean13.c



.PHONY: all clean debug