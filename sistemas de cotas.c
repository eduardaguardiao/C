
#include <stdio.h>

int main(){
    
int i, pessoa, ensino;
float renda,acum=0, med;

    printf("Digite a quantidade de pessoas da residência:\n");
    scanf("%d",&pessoa);
    
    printf("Digite qual foi seu tipo de ensino:\n");
    printf("1- todo em rede pública 2-todo em rede privada\n");
    scanf("%d",&ensino);

    for(i=0; i<pessoa; i++){
        printf("Digite a renda bruta mensal do familiar %d R$:\n",i+1);
        scanf("%f",&renda);
        acum+=renda;
    }
med=acum/pessoa;
    printf("Renda familiar por pessoa: R$%.2f\n",med);
    
    
    switch(ensino){
        
        case 1:
        printf("Concorre no sistema de cotas\n");
        break;
        
        case 2:
        printf("Concorre com cotas para ampla concorrência.\nSistemas de cotas válidos somente para quem estudou 100%% em rede pública!!\n");
        break;
    }
    
    return 0;
}

