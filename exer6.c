#include <stdio.h>
int main()
{ int sal, salreceber;
printf ("digite o valor do Salario\n");
scanf("%d%*c",&sal);
salreceber = (sal+(sal*5/100-sal*7/100));
printf("o salario a receber é %d \n", salreceber);
}