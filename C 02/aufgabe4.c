#include <stdio.h>
#include <stdlib.h>

// Schreiben Sie ein Programm welches eine Ganzzahl x einliest
// und die Anzahl der Einsen in der Bitdarstellung der positiven Ganzzahl |x|
// ausdruckt (inkl. dem "neue Zeile Symbol").
// Schreiben Sie dabei aussagekräftigen Code und kommentieren Sie Ihre Abgabe.

// Beispiele:
//  4 -> 1
//  7 -> 3
// 43 -> 4

/* Hier kommt euer Programmcode hin */
int countOne(int x){ // Definitionsbereich: [−32,767, +32,767] (int)
  x = abs(x); // 
  int one = 1; 
  int counter = 0;
  for(int i = 0; i <= 16; i++){
    if (x & (one << i)){
      counter++;
    } 
  }
  return counter;
}

int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30];
  int x = atoi(fgets(buf, 0x30, stdin));
  printf("Die Zahl %d -> %d", x, countOne(x));
}
