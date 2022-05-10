#include <stdio.h>
int main()
{int salario, novosal;
	printf("Digite o salario\n");
    scanf("%d%*c"	,&salario);
    novosal= (salario+(salario*25/100));
    printf(" o novo salario é %d\n",novosal);
}
	