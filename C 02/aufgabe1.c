#include <stdio.h>
#include <stdlib.h>
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
const double PI = 3.14159265358979323846; //PI Konstante

// Wendet auf x die Fakultätsfunktion an (Selbsterklärend)
long double factorial(int x){ // Fakultätsfunktion
   long double fact = 1;
    for(double i = 1; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}

//Wendet auf x den angegebenen Exponenten an.
double power(double x, int exp){
    double base = 1.0;
    for(int i = 1; i <= exp; i++){
        base*=x;
    }
    return base;
}

// Diese Funktions aproxemiert eine Sinusfunktion auf der Basis der Taylorreihe
// https://de.wikipedia.org/wiki/Sinus_und_Kosinus#Motivation_durch_Taylorreihen
// Da die Funktion sehr umständlich ist, wird der Sinus dieser Funktion nur bis 2PI erreichnet, dannach wird lädeglich
// der x Wert auf die größer überprüft. Falls x 2PI übersteigt wird er durch geschicktes umrechnen auf die Funktion gemappt.

double sin(double x) {
    double sinus = 0;
    if(x > 2 * PI){ // Mapping von x
        int periode = x/(2*PI); // berechnung der Periode von x
        x = x - PI*2*periode; // zurücksetzung auf die "Standartperiode" -> 0 bis 2PI
    }
    for(int i = 0; i < 12; i++){ // "Summenfunktion" Die 12 wurde aus genauichkeitsgründen ermittelt
        sinus+= power((-1),i) * (power(x, 2 * i + 1) / factorial(2 * i + 1)); // Taylorreihe (Funktion)
    }
    return sinus;
}

//Same wie bei Sinus nur um (PI/2) verschoben
double cos(double x) {
    double cosinus = 0;
    if(x > 2 * PI){
        int periode = x/(2*PI);
        x = x - PI*2*periode;
    }
    for(int i = 0; i < 12; i++){
        cosinus+= power((-1),i) * (power(x, 2 * i) / factorial(2 * i));
    }
    return cosinus;
}
int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30]; // Erstelle Chararray
  double x = atof(fgets(buf, 0x30, stdin)); //lese x in ein Buffer ein
  printf("sin(x) = %0.4f, cos(x) = %0.4f\n", sin(x), cos(x)); //Rufe Funktionen sin und cos aus alpro_math.h auf und printe sin(x) und cos(x).
    /*
  Der Formatstring dient dazu Expression in einen String einzubetten.
  Er besteht sogesehen aus drei Teilen:
  Der erste Teil ist das Literal bzw. der Text. Der Zweite Teil ist der "Special-Character" der duch das "%"-Zeichen
  und die anschließenden Parameter angekündigt wird. Er ist ein Platzhalter für die eigentlichen Expression.
  Beispiel: %0.4f Die '0.4' bestimmen die Nachkommerstellen. Das 'f' bestimmt den Datentypen, in diesen Fall ist es ein Float. Also eine Zahl mit Nachkommerstellen.
  Der dritte Teil sind die Expression, die in die Platzhalter eingesetzt werden. Hierbei muss man auf die Reihenfolge btw. den Index achten, denn die Expression werden
  in der exakt gleichen Reihenfolge in den String mit dem Platzhalter eingesetzt.
    */
  return 0;
}
