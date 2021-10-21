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
    int x = lies_ganzzahl(); // x speichert aktuelle Benutzereingabe Wert
    int is_prime = 0; // Deklariere is_prime als boolean
    
    /* 
    Die Schleife läuft so lange bis die Zahl der Eingabe x erreicht ist.
    Dabei wird x auf einen Restbetrag i überprüft, wobei i die Laufvariable der 
    Schleife ist. Wenn also x ein Rest von 0 hat, dann ist er nach der Definition
    keine Primzahl. Anschließend wird is_prime auf 0 gesetzt und die Schleife beendet.
    Wenn aber x ein Rest hat und die schleife fertig durchgelaufen ist, dann ist 
    is_prime = 1 und somit eine Primzahl
    */
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            is_prime = 0;
            break;
        }else{
            is_prime = 1;
        }
    }
    /*
    Hier wird auf den Wahrheitswert von is_prime gepüft. Außerdem wird aber
    auch immer x == 2 als Wahr gewärted somit wird x == 2 immer als Primzahl erkannt.
    Die Ausgabe ist dann "Ja".
    Wenn aber is_prime nicht Wahr ist, dann ist die Ausgabe "Nein". 
    Ebenso gilt es für x == 1
    */
    if (is_prime || x == 2){
        drucke_text("Ja");
    }else if (!is_prime || x == 1){
        drucke_text("Nein");
    }
    return 0;
}