#include <stdio.h>
 
int main() {
 
    int numero,hora;
    float porhora,salario;
    scanf("%d %d %f", &numero, &hora, &porhora);
    salario= hora*porhora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero, salario);
 
    return 0;
}
