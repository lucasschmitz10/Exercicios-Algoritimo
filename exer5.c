#include <stdio.h>
int main()
{
   int sal, perc, aumento, novosal; 
   printf("digite o valor de salario /n");
   scanf("%d%*c",&sal);
   printf("digite o percentual de aumento\n");
   scanf("%d%*c" ,&perc);
   novosal = (sal+(sal*perc/100));
   printf("o novo salario é %d\n",novosal);
}
