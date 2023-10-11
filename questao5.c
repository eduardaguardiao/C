#include <stdio.h>

int main(){
    
int i;
float valor[6], somapositiv = 0, medpositiv = 0, numpositiv;

    
    for (i = 0; i < 6; i++){
        printf("insira um valor:\n ");
        scanf("%f", &valor[i]);

        if (valor[i] > 0){
            numpositiv++;
            somapositiv += valor[i];
        }
    }

    
    if (numpositiv > 0){
        medpositiv = somapositiv/numpositiv;
    }

    printf("valores positivos: %.f\n", numpositiv);
    if (numpositiv > 0) {
        printf("média dos valores positivos: %.1f\n", medpositiv);
    }

    return 0;
}
