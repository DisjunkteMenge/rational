typedef struct Bruch {                                 //Neuer Datentyp Rational, welcher ein Bruch darstellen soll
    int zaehler;
    int nenner;
} Rational;


int ggT(unsigned int a, unsigned int b) {
    unsigned int c;
    do {
        c = a % b;     /* Rest der ganzzahligen Division */
        a = b;
        b = c;           /* Vertauschen der Werte */
    } while (c != 0);


    return a;
}

int kgV(unsigned int a, unsigned int b) {
    return a * b / ggT(a, b);
}


void ausgabe(Rational r) {
    printf("Ergebnis: %d/%d\n", r.zaehler, r.nenner);

}

Rational eingabeBruch1(Rational a) {
    printf("Zaehler Bruch 1 : ");
    scanf("%d", &a.zaehler);
    printf("Nenner Bruch 1 : ");
    scanf("%d", &a.nenner);

    return a;
}

Rational eingabeBruch2(Rational b) {
    printf("Zaehler Bruch 2 : ");
    scanf("%d", &b.zaehler);
    printf("Nenner Bruch 2 : ");
    scanf("%d", &b.nenner);

    return b;
}

void ausgabeFloat(float r) {
    printf("%f", r);
}

Rational kuerze(Rational r) {                           //Ausgerechnete Brüche kürzen

    int teiler = ggT(r.zaehler, r.nenner);
    r.zaehler = r.zaehler / teiler;
    r.nenner = r.nenner / teiler;
    ausgabe(r);
    return r;
}

Rational kuerzeOnly(Rational r) {
    r = eingabeBruch1(r);
                                                                //Einen Bruch kürzen
    int teiler = ggT(r.zaehler, r.nenner);
    r.zaehler = r.zaehler / teiler;
    r.nenner = r.nenner / teiler;
    ausgabe(r);
    return r;
}


Rational addiere(Rational a, Rational b) {
    a = eingabeBruch1(a);
    b = eingabeBruch2(b);

    Rational c;
    c.zaehler = a.zaehler * b.nenner + b.zaehler * a.nenner;
    c.nenner = a.nenner * b.nenner;
    kuerze(c);
    return c;
}

Rational subtrahiere(Rational a, Rational b) {
    a = eingabeBruch1(a);
    b = eingabeBruch2(b);

    Rational c;
    c.zaehler = a.zaehler * b.nenner - b.zaehler * a.nenner;
    c.nenner = a.nenner * b.nenner;
    kuerze(c);
    return c;
}

Rational multipliziere(Rational a, Rational b) {
    a = eingabeBruch1(a);
    b = eingabeBruch2(b);

    Rational c;
    c.zaehler = a.zaehler * b.zaehler;
    c.nenner = a.nenner * b.nenner;
    kuerze(c);
    return c;
}

Rational dividiere(Rational a, Rational b) {
    a = eingabeBruch1(a);
    b = eingabeBruch2(b);


    Rational c;
    c.zaehler = a.zaehler * b.nenner;
    c.nenner = a.nenner * b.zaehler;
    kuerze(c);
    return c;

}

float toFloat(Rational a) {
    a = eingabeBruch1(a);


    float c;
    c = (float) a.zaehler / (float) a.nenner;
    ausgabeFloat(c);
    return c;

}