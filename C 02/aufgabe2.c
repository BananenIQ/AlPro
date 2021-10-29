#include <stdio.h>
#include <stdlib.h>

// Schreiben Sie ein Programm welches eine Gleitkommazahl einliest
// und den Tangens dieser Zahl in einer Zeile (inkl. dem "neue Zeile Symbol")
// ausgibt.
// Schreiben Sie dabei aussagekräftigen Code und kommentieren Sie Ihre Abgabe.

// Für die ganz Cleveren: Sie dürfen die math.h nicht benutzen.

/* Hier kommt euer Programmcode hin */
// infos in aufgabe01.c
const double PI = 3.14159265358979323846;
// infos in aufgabe01.c
long double factorial(int x){
   long double fact = 1;
    for(double i = 1; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
// infos in aufgabe01.c
double power(double x, int exp){
    double base = 1.0;
    for(int i = 1; i <= exp; i++){
        base*=x;
    }
    return base;
}
// infos in aufgabe01.c
double sin(double x) {
    double sinus = 0;
    if(x > 2 * PI){
        int periode = x/(2*PI);
        x = x - PI*2*periode;
    }
    for(int i = 0; i < 12; i++){
        sinus+= power((-1),i) * (power(x, 2 * i + 1) / factorial(2 * i + 1));
    }
    return sinus;
}
// infos in aufgabe01.c
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
// hier wird der Tangens berechnet XD
double tan(double x){
    return (long double) (sin(x)/cos(x));
}
int main() {
  // Lies x ein (ein bisschen Magie)
  char buf[0x30];
  double x = atof(fgets(buf, 0x30, stdin)); //sehe erste Aufgabe
  
  printf("tan(x) = %0.4f\n", tan(x)); //rufe tan Funktion auf und printe den Wert von tan(x)
  return 0;
}