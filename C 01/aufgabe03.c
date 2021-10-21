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
// "Ja" falls x eine Primzahl ist. Sonst soll das Programm "Nein" ausdrucken.


/* Hier kommt euer Programmcode hin */
int main(){
    int x = lies_ganzzahl();
    int is_prime = 0;
    
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            is_prime = 0;
            break;
        }else{
            is_prime = 1;
        }
    }
    if (is_prime || x == 2){
        drucke_text("Ja");
    }else if (!is_prime || x == 1){
        drucke_text("Nein");
    }
    return 0;
}