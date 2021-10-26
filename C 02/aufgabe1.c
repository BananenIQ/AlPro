#include <stdio.h>
#include <stdlib.h>
#include "alpro_math.h"
// Die Standardbibliothek stdio.h stellt grundlegende Funktionen zur
// Ein- und Ausgabe von Text zur Verfügung

// Aufgabe:
// Schreiben Sie die Funktionen zur Sinus- und Kosinusberechnung.
// Schreiben Sie dabei aussagekräftigen Code und kommentieren Sie Ihre Abgabe.

// In der Main soll eine Gleitkommazahl x eingelesen werden.
// Im Anschluss soll die zwei Gleitkommazahlen sin(x) und cos(x) in einer Zeile ausgegeben werden.
// Erklären Sie im Detail wie der Formatstring aufgebaut ist.
// Sie können dazu die "Manpage" nutzen oder in ihrer Lieblingssuchmaschine nach Formatstrings suchen.

/* Hier kommt euer Programmcode hin */
int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30];
  double x = atof(fgets(buf, 0x30, stdin));
  printf("sin(x) = %0.4f, cos(x) = %0.4f\n", sin(x), cos(x));
  return 0;
}
