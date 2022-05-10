#include<stdio.h>
int main(){  
      int dep, taxa, rend, total;
      printf("digite o valor do deposito\n");
      scanf("%d%*c",&dep);
      printf("digite o valor da taxa\n");
      scanf("%d%*c",&taxa);
      rend = (dep*taxa/100);
      total = (dep + rend);
      printf("o rendimento foi de : %d \n",rend);
      printf("o total é de : %d\n",total);
}
