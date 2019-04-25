#include <stdio.h>
#include "kopf.h"

int main() {

    Rational b;
    Rational c;
    int zahl1;
    int zahl2;
    int auswahl;

    printf("Waehle aus:\n1: Bruch addieren\n2: Bruch subtrahieren\n3: Bruch multiplizieren\n4: Bruch dividieren\n5: Bruch in Fliesskommadarstellung\n6: Bruch kuerzen\n7: kgV\n8: ggT\n");
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
    } else if (auswahl == 7) {
        printf("Zahl 1 : ");
        scanf("%d", &zahl1);
        printf("Zahl 2 : ");
        scanf("%d", &zahl2);
        printf("ggT( %d, %d) = %u\n", zahl1, zahl2, ggT(zahl1, zahl2));
    }else if (auswahl == 8){
        printf("Zahl 1 : ");
        scanf("%d", &zahl1);
        printf("Zahl 2 : ");
        scanf("%d", &zahl2);
        printf("kgV( %d, %d) = %u\n", zahl1, zahl2, kgV(zahl1, zahl2));
    }




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
