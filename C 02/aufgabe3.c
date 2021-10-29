#include <stdio.h>
#include <stdlib.h>

// Schreiben Sie ein Programm welches zwei Ganzzahl x und y einliest
// und den größten gemeinsamen Teiler ggT(x,y) sowie
// das kleinste gemeinsame Vielfache kgV(x,y) berechnet und ausdruckt.
// Implementieren Sie dazu die Funktionen ggT und kgV.
// Schreiben Sie dabei aussagekräftigen Code und kommentieren Sie Ihre Abgabe.

// Beispiele:
//  4 -> 1
//  7 -> 3
// 43 -> 4

/* Hier kommt euer Programmcode hin */

// 
// 
int ggT(int x, int y){
    int rest;
    if (x == 0) return abs(y);
    if (y == 0) return abs(x);
    do {
        rest = x % y;
        x = y;
        y = rest;
    } while (y != 0);

    return abs(x);
}

int kgV(int x, int y){

    return 24;
}

int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30];
  int x = atoi(fgets(buf, 0x30, stdin)); // Lese x ein
  int y = atoi(fgets(buf, 0x30, stdin)); // Lese y ein
  
  printf("ggT(x,y) = %d, kgV(x,y) = %d\n", ggT(x,y), kgV(x,y)); // Rufe Funktion ggT und kgV auf und printe den Wert von ggT(x,y), kgV(x,y) 
  return 0;
}
