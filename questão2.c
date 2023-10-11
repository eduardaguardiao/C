#include <stdio.h>
#include <math.h>


int main(){

float X1, X2, a, b, c, delta;
    printf("CALCULADORA DE EQUAÇÃO DE 2°GRAU\n"); 
    printf("digite o valor de A:\n");
    scanf("%f",&a);
    
    printf("digite o valor de B:\n");
    scanf("%f",&b);
    
    printf("digite o valor de C:\n");
    scanf("%f",&c);
 

delta=((b*b)-(4*(a*c)));
X1=((-b)+sqrt(delta))/(2*a);
X2=((-b)+sqrt(delta))/(2*a);

    if (a==0){
    printf("o valor de A deve ser diferente de 0\n");
}
         else if(delta<0){
            printf("não existe raiz real X1=0 e X2=0\n");
}
            else if(delta==0){
                printf("existe apenas uma raiz real\n%.2f",X1);
}
                else if(delta>0){
                   printf("existem duas raízes X1=\n%.2f\n",X1);
                   printf("existem duas raízes X2=\n%.2f",X2);
}

    return 0;
}



