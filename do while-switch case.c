#include <stdio.h>

int main(){
    
int op; 

do{
    
    printf("selecione uma opção (1- Email 2- SMS 3-Telegram)\n");
    scanf("%d",&op);
switch(op){
    case 1:
    printf("Email\n");
    break;
    
    case 2:
    printf("SMS\n");
    break;
    
    case 3:
    printf("Telegram\n");
    break;
    default:
    
    printf("opção inválida, tente novamente\n");
    break;
}

}
while(op != 1 && op!= 2 && op!=3);

return 0;
}

