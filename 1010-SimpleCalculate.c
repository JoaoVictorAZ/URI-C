#include <stdio.h>
 
int main() {
    int codigo1,num1,codigo2,num2;
    float preco1,preco2;
    scanf("%d %d %f %d %d %f",&codigo1,&num1,&preco1,&codigo2,&num2,&preco2);
    printf("VALOR A PAGAR: R$ %.2f\n",(num1*preco1)+(num2*preco2));
 
    return 0;
}
