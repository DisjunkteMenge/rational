#include <stdio.h>
#include "kopf.h"

int main() {

    Rational b;
    Rational c;


    int auswahl;

    printf("Waehle aus:\n1: Bruch addieren\n2: Bruch subtrahieren\n3: Bruch multiplizieren\n4: Bruch dividieren\n5: Bruch in Fliesskommadarstellung\n6: Bruch kuerzen\n");
    printf("Ihre Auswahl: ");
    scanf("%d", &auswahl);

    if (auswahl == 1) {
        addiere(b, c);
    } else if (auswahl == 2) {
        subtrahiere(b, c);
    } else if (auswahl == 3) {
        multipliziere(b, c);
    } else if (auswahl == 4) {
        dividiere(b, c);
    } else if (auswahl == 5) {
        toFloat(b);
    } else if (auswahl == 6) {
        kuerzeOnly(b);
    }


    //printf("ggT( %d, %d) = %u\n", b.zaehler, b.nenner, ggT(b.zaehler, b.nenner));
    //printf("kgV( %d, %d) = %u\n", b.zaehler, b.nenner, kgV(b.zaehler, b.nenner));



    //addiere(b,c);
    //tmp = addiere(b,c);
    //printf("%d %d", tmp.zaehler, tmp.nenner);
    //subtrahiere(b,c);
    //multipliziere(b,c);
    //dividiere(b,c);
    //toFloat(b);

    //kuerzeOnly(b);

    return 0;
}
