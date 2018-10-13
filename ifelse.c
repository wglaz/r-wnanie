#include <stdio.h>
#define _USE_MATH_DEFINES

void wczytanie_danych(double *a, double *b, double *c);

void podaje_x1_i_x2(double a, double b, double x1, double x2, double delta);

#include <math.h>

int main() {
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double delta;

    wczytanie_danych(&a, &b, &c);

    //D = b 2 - 4 * a* c

    delta = (b*b) - 4*a*c;
    printf("Delta = %lf\n", delta);

    if(delta < 0){
        printf("Delta nie ma rozwiązań");
    }

    if(delta == 0) {
        x1 = -b/(2*a);
        printf("Rozwiązanie %lf", x1);
    }
    if(delta > 0){
        podaje_x1_i_x2(a, b, x1, x2, delta);
    }
    return 0;
}

void podaje_x1_i_x2(double a, double b, double x1, double x2, double delta) {//a = sqrt (c);
    x1 = (-b-sqrt(delta))/2*a;
    x2 = (-b+sqrt(delta))/2*a;
    printf("Rozwiązanie x1=%lf, x2=%lf\n", x1, x2);
}

void wczytanie_danych(double *a, double *b, double *c) {
    printf("Podaj a: ");
    scanf("%lf", a);
    printf("Podaj b: ");
    scanf("%lf", b);
    printf("Podaj c: ");
    scanf("%lf", c);
}