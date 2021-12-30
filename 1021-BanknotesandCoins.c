// resultados dão o output porém mesmo assism dá "wrong answer"//
#include <stdio.h>
int main(){
    
    float valor;
    int troco,moeda,A,B;
    int cem,cinq,vint,dez,cinco,dois;
    int um,cinqcent,vintcincocent,dezcent,cincocent,umcent;
    scanf("%f",&valor);
    
    troco=valor;
    cem=troco/100;
    troco=troco%100;
    cinq=troco/50;
    troco=troco%50;
    vint=troco/20;
    troco=troco%20;
    dez=troco/10;
    troco=troco%10;
    cinco=troco/5;
    troco=troco%5;
    dois=troco/2;
    troco=troco%2;
    um=troco%2;
    
    
    A=valor*100;
    B=A;
    moeda=A%100;
    cinqcent = moeda /50;
    vintcincocent = (moeda %50)/25;
    dezcent = (((moeda %50)%25)/10);
    cincocent = ((((moeda %50)%25)%10)/5);
    umcent = ((((moeda %50)%25)%10)%5)/1;
    
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",cem);
    printf ("%d nota(s) de R$ 50.00\n",cinq);
    printf ("%d nota(s) de R$ 20.00\n",vint);
    printf ("%d nota(s) de R$ 10.00\n",dez);
    printf ("%d nota(s) de R$ 5.00\n",cinco);
    printf ("%d nota(s) de R$ 2.00\n",dois);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",um);
    printf ("%d moeda(s) de R$ 0.50\n",cinqcent);
    printf ("%d moeda(s) de R$ 0.25\n",vintcincocent);
    printf ("%d moeda(s) de R$ 0.10\n",dezcent);
    printf ("%d moeda(s) de R$ 0.05\n",cincocent);
    printf ("%d moeda(s) de R$ 0.01\n",umcent);
    
    return 0;
}
