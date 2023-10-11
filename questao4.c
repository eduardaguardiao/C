
#include <stdio.h>

int main(){
    
int n, num;

    printf("digite o número para realizar o cálculo:\n");
    scanf("%d",&num);
    
for(n=1;n<=10;n++){
    printf("%dX%d=%d\n",num,n,num*n);
}
return 0;
}
