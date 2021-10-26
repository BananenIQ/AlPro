#include <stdio.h>
#include <stdlib.h>
#include "alpro_math.h"

// Schreiben Sie ein Programm welches eine Gleitkommazahl einliest
// und den Tangens dieser Zahl in einer Zeile (inkl. dem "neue Zeile Symbol")
// ausgibt.
// Schreiben Sie dabei aussagekräftigen Code und kommentieren Sie Ihre Abgabe.

// Für die ganz Cleveren: Sie dürfen die math.h nicht benutzen.

/* Hier kommt euer Programmcode hin */

int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30];
  double x = atof(fgets(buf, 0x30, stdin)); //sehe erste Aufgabe

  printf("tan(x) = %0.4f\n", tan(x)); //rufe tan Funktion auf und printe den Wert von tan(x)
  return 0;
}