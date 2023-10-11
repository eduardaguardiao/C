#include <stdio.h>

int main(){
    
int iddia, ano, mes, dia;

    printf("digite a idade em dias:\n");
    scanf("%d",&iddia);
    
ano = iddia / 365;
mes = (iddia % 365) / 30;
dia = (iddia % 365) % 30;

    printf("a idade é:\n %d ano(s)\n %d mes(es)\n %d dia(s)\n ",ano,mes,dia);

return 0;
}
