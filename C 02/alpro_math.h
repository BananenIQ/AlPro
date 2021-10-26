#pragma once
#ifndef alpro_math
#define alpro_math

const double PI = 3.14159265358979323846;

long double factorial(int x){
   long double fact = 1;
    for(double i = 1; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}

double power(double x, int exp){
    double base = 1.0;
    for(int i = 1; i <= exp; i++){
        base*=x;
    }
    return base;
}

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

double tan(double x){
    return (long double) (sin(x)/cos(x));
}

int ggT(int x, int y){
    int rest;
    if (x == 0) return y;
    if (y == 0) return x;

    do {
        rest = x % y;
        x = y;
        y = rest;
    } while (y != 0);

    return x;
}

int kgV(int x, int y){

    return 0;
}

#endif