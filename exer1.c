#include <stdio.h>
int main()
{
	int num1,
		num2, num3, num4, soma;
	printf("digite o valor 1\n");
	scanf("%d%*c", &num1);
	printf("digite o valor 2\n");
	scanf("%d%*c", &num2);
	printf("digite o valor 3\n");
	scanf("%d%*c", &num3);
	printf("digite o valor 4\n");
	scanf("%d58c", &num4);
	soma = (num1 + num2 + num3 + num4);
	printf("a soma é %d\n", soma);
}
