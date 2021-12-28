#include <stdio.h>
 
int main() {
 
    int distancia;
    float gasolina;
    scanf("%d %f", &distancia, &gasolina);
    printf("%.3f km/l\n",distancia/gasolina);
 
    return 0;
}
