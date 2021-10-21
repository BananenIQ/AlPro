#include "magie.h"

// Die Magie stellt euch folgende Funktionen zur Verfügung:
//
// drucke_text("HIER KOMMT TEXT HIN")
// drucke_ganzzahl(HIER KOMMT EINE GANNZZAHL EXPRESSION HIN)
// drucke_kommazahl(HIER KOMMT EINE KOMMAZAHL EXPRESSION HIN)
// lies_ganzzahl() gibt euch eine Ganzzahl
// lies_kommazahl() gibt euch eine Kommazahl

// Aufgabe:
// Das Programm soll eine Ganzzahl x einlesen.
// Wenn die Zahl 0 oder negativ ist, soll das Programm 0 ausdrucken.
// Sonst soll das Programm die Anzahl aller Primzahlen ausdrucken
// durch die x teilbar ist. Z.B.
//
//               x | 1| 2| 3| 4| 5| 6| 7| 8| 9|10|
// ----------------+--+--+--+--+--+--+--+--+--+--+
//  Anz Primteiler | 0| 1| 1| 1| 1| 2| 1| 1| 1| 2|
//



/* Hier kommt euer Programmcode hin */
int main(){
    int x = lies_ganzzahl(); // x speichert aktuelle Benutzereingabe Wert
    int counter = 0; // der counter zählt die Anzahl der teilenden Primzahlen
    
    /*
    i ist eine Laufvariable die bis i < x läuft
    Wenn x kein Rest hat und es eine Primzahl ist, dann wird der counter um 1 erhöht
    */
    
    for (int i = 2; i <= x; i++){
        if (x % i == 0 && is_prime(i)){
            counter++;
        }
    }
    drucke_ganzzahl(counter);
    return 0;
}

//erklärung in aufgabe03.c
int is_prime(int x){
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
        return 1;

    }else if (!is_prime || x == 1){
        return 0;
    }
    return -1;
}

