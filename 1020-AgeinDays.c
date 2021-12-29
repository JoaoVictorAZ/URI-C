#include <stdio.h>
 
int main() {
 
    int n,ano,mes,dia;
    scanf("%d",&n);
    ano=n/365;
    mes=(n%365)/30;
    dia=(n%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    return 0;
}
