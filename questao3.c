#include <stdio.h>

int main(){

float SA, NS, aument, percet;    

    printf("Digite seu salário atual:\n");
    scanf("%f",&SA);
 
 
 aument=SA*aument;
 NS=SA+(SA*aument);
 
if(SA>=0 && SA<=400){
    printf("seu novo salário é:R$%.2f\n",SA+(SA*0.15));
    printf("você recebeu auemento de:R$%.2f\n",SA*0.15);
    printf("seu reajuste foi de 15%%\n");
}  
else if(SA>=400.01 && SA<=800){
    printf("seu novo salário é:R$%.2f\n",SA+(SA*0.12));
    printf("você recebeu auemento de:R$%.2f\n",SA*0.12);
    printf("seu reajuste foi de 12%%\n");
}

else if(SA>=800.01 && SA<=1200){
    printf("seu novo salário é:R$%.2f\n",SA+(SA*0.10));
    printf("você recebeu auemento de:R$%.2f\n",SA*0.10);
    printf("seu reajuste foi de 10%%\n");
}
else if(SA>=1200.01 && SA<=2000){
    printf("seu novo salário é:R$%.2f\n",SA+(SA*0.07));
    printf("você recebeu auemento de:R$%.2f\n",SA*0.07);
    printf("seu reajuste foi de 7%%\n");
}
else if(SA>2000){
    printf("seu novo salário é:R$%.2f\n",SA+(SA*0.04));
    printf("você recebeu auemento de:R$%.2f\n",SA*0.04);
    printf("seu reajuste foi de 4%%\n");
}

return 0;
}


