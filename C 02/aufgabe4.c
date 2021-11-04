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
  x = abs(x); // Falls x negativ war ist er spätestens jetzt positiv
  int counter = 0;
    /* 
    x=   0d1011001001010101
       & 0d0000000000000001  <<  [0,1,2,3,...,16] "1" wird bei jeden Durchlauf um ein nach Links geshiftet
       ____________________                       Dabei wird mit bitwies & verknüpft und geprüft ob es 1 ist,
         0d0000000000000001                       Wenn ja, dann wird der counter um eins größer gestellt.
    */
  for(int i = 0; i <= 16; i++); // 16 wegen int:  10^0, 10^1, 10^2 ...
    x & (1 << i) ? counter++;
  return counter;
}

int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30];
  int x = atoi(fgets(buf, 0x30, stdin));
  printf("%d\n", countOne(x));
  return 0;
}
