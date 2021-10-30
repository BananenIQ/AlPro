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

int ggT(int x, int y) {    /*Diese Funktion sucht den ggT der beiden eingegeben Ganzzahlen X und Y*/
    x = abs(x);
    y = abs(y);

    if (x < y) {             /* If-Abfrage ob x kleiner als y ist*/
        int cache = x;       /*Falls ja werden die werte in X und Y getauscht*/
        x = y;              
        y = cache;
    }

    for (int i = 1; i <= y; i++) {            /*For-Schleife die in 1er Schritten von 1 bis Y durchiteriert*/
        if (y % i == 0 && x % (y / i) == 0) { /*Die erste Bedingung ermittelt den nächsten absteigenden Teiler der kleineren Zahl, die Zweite überprüft ob dieser Teiler auch die größere Zahl teilt*/
            return y / i;                     /*Falls beide Bedingungen erfüllt sind wird der aktuelle Teiler zurückgegeben*/
        }
    }
    return -1;
}

int kgV(int x, int y) {  /*Diese Funktion sucht den kgV der beiden eingegeben Ganzzahlen X und Y*/
    x = abs(x);
    y = abs(y);
    
    if (x < y) {             /* If-Abfrage ob x kleiner als y ist*/
        int cache = x;       /*Falls ja werden die werte in X und Y getauscht*/
        x = y;              
        y = cache;
    }

    for (int i = 1; i <= y; i++) {     /*For-Schleife die in 1er Schritten von 1 bis Y durchiteriert*/
        if ((i * x) % y == 0) {        /*Falls ein Vielfaches von x durch y teilbar ist wird dieses kgVielfaches ausgegeben*/
            return i * x;
        }
    }
    return -1;
}

int main() {
    // Lies x ein (ein bisschen Magie)
    char buf[0x30];
    int x = atoi(fgets(buf, 0x30, stdin)); // Lese x ein
    int y = atoi(fgets(buf, 0x30, stdin)); // Lese y ein

    printf("ggT(x,y) = %d, kgV(x,y) = %d\n", ggT(x, y), kgV(x, y)); // Rufe Funktion ggT und kgV auf und printe den Wert von ggT(x,y), kgV(x,y) 
    return 0;
}
