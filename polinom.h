struct poly {
    int koeficijent;
    int eksponent;
};

void polinomEntry(struct poly *p, int n);

void polinomPrint(struct poly *p, int n);

int polinomSum(struct poly *p1, struct poly *p2, int n1, int n2, struct poly *p);

int polinomSubtract(struct poly *p1, struct poly *p2, int n1, int n2, struct poly *p);

int polinomMultiply(struct poly p1[10], struct poly p2[10], int n1, int n2, struct poly p[100]);