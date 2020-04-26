#include <stdio.h>
#include <stdlib.h>
#include "polinom.h"
#include "polinom.c"

/* declare structure for polynomial */



int main() {
    struct poly p1[10], p2[10], p3[20], p4[100], p5[20];
    int n, n1, n2, n3, n4;
    printf("MAKSIMALNI BROJ ČLANOVA == 10");
    printf("Upisi broj članova u prvom polinomu\n n1=");
    scanf("%d", &n1);
    polinomEntry(p1, n1);
    printf("Upisi broj članova u drugom polinomu\n n2=");
    scanf("%d", &n2);
    polinomEntry(p2, n2);
    printf("Zbroj polinoma\n");
    n = polinomSum(p1, p2, n1, n2, p3),
            polinomPrint(p3, n);
    printf("Umnozak polinoma\n");
    n3 = polinomMultiply(p1, p2, n1, n2, p4);
    polinomPrint(p4, n3);
    printf("Razlika polinoma\n");
    n4 = polinomSubtract(p1, p2, n1, n2, p5);
    polinomPrint(p5, n4);

    return 0;
}




