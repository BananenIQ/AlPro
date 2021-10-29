#include "magie.h"

// Die Magie stellt euch folgende Funktionen zur Verfügung:
//
// drucke_text("HIER KOMMT TEXT HIN")
// drucke_ganzzahl(HIER KOMMT EINE GANNZZAHL EXPRESSION HIN)
// drucke_kommazahl(HIER KOMMT EINE KOMMAZAHL EXPRESSION HIN)
// lies_ganzzahl() gibt euch eine Ganzzahl
// lies_kommazahl() gibt euch eine Kommazahl

// Aufgabe:
// Das Programm soll eine Ganzzahl x einlesen und folgendes ausdrucken:
//   x/3 falls x durch 3 teilbar ist
//    42 falls der Rest von x/3 gleich 1 ist
//     0 sonst


/* Hier kommt euer Programmcode hin */
int main(){
    int x = lies_ganzzahl(); // x speichert aktuelle Benutzereingabe Wert
    
    int rest = (x % 3); // rest beschreit den Rest der x/3 division

    // Prüfe auf die Fälle der Aufgabenstellung und gebe jeweiligen Wert aus
    if (rest == 0){   
        drucke_ganzzahl((x/3));
    }else if (rest == 1){
        drucke_ganzzahl(42);
    }else{
        drucke_ganzzahl(0);
    }
    return 0;
}
