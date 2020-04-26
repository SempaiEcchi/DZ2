
void polinomEntry(struct poly *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("Upisi koeficijent:");
        scanf("%d", &p[i].koeficijent);
        printf("Upisi eksponent:");
        scanf("%d", &p[i].eksponent);
    }


}

void polinomPrint(struct poly *p, int n) {
    printf("Polinom glasi:");
    for (int i = n - 1; i >= 0; i--) {
        if (i != n - 1) {
            if (p[i].eksponent != 0) {
                printf("%+dx^%d", p[i].koeficijent, p[i].eksponent);
            } else {
                printf("%+d", p[i].koeficijent);
            }
        } else {
            if (p[i].eksponent != 0) {

                printf("%dx^%d", p[i].koeficijent, p[i].eksponent);

            } else {
                printf("%d", p[i].koeficijent);
            }


        }

    }
    printf("\n");
}

int polinomSum(struct poly *p1, struct poly *p2, int n1, int n2, struct poly *p) {
    int term = 0;

    //maksimalni stupanj neka bude 100
    int valuesArr[100] = {0};
    for (int i = 0; i < n1; i++) {
        valuesArr[p1[i].eksponent] += p1[i].koeficijent;
    }
    for (int i = 0; i < n2; i++) {
        valuesArr[p2[i].eksponent] += p2[i].koeficijent;
    }
    for (int i = 0; i < 100; i++) {
        if (valuesArr[i] != 0) {
            p[term].koeficijent = valuesArr[i];
            p[term].eksponent = i;
            term++;
        }

    }


    return term;
}

int polinomSubtract(struct poly *p1, struct poly *p2, int n1, int n2, struct poly *p) {
    int term = 0;

    int valuesArr[100] = {0};
    for (int i = 0; i < n1; i++) {
        valuesArr[p1[i].eksponent] += p1[i].koeficijent;
    }
    for (int i = 0; i < n2; i++) {
        valuesArr[p2[i].eksponent] -= p2[i].koeficijent;
    }
    for (int i = 0; i < 100; i++) {
        if (valuesArr[i] != 0) {
            p[term].koeficijent = valuesArr[i];
            p[term].eksponent = i;
            term++;
        }

    }


    return term;
}


int polinomMultiply(struct poly p1[10], struct poly p2[10], int n1, int n2, struct poly p[100]) {
    int term = 0;
    int multCoeff;
    int multExp;
    int valuesArr[100] = {0};
    for (int i = 0; i < n1; i++) {

        for (int j = 0; j < n2; j++) {
            multCoeff = p1[i].koeficijent * p2[j].koeficijent;
            multExp = p1[i].eksponent + p2[j].eksponent;
            valuesArr[multExp] += multCoeff;

        }
    }
    for (int i = 0; i < 100; i++) {
        if (valuesArr[i] != 0) {
            p[term].koeficijent = valuesArr[i];
            p[term].eksponent = i;
            term++;
        }
    }

    return term;
}
