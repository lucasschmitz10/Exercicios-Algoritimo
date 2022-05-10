#include<stdio.h>
int main(){
    int sal, salreceber;
    printf("digete o valor do salario");
    scanf("%d%*c",&sal);
    salreceber = (sal+50-(sal*10/100));
printf ("o salario a receber é %d \n",salreceber); 
}
