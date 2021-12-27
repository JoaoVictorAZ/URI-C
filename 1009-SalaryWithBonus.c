#include <stdio.h>
 
int main() {
 
    char nome;
    double salario,vendido,salariof;
    scanf("%s %lf %lf", &nome, &salario, &vendido);
    salariof= salario+(vendido*0.15);
    printf("TOTAL = R$ %.2lf\n",salariof);
 
    return 0;
}
