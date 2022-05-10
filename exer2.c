#include <stdio.h>
int  main(){
	int nota1, nota2, nota3 , media;
	printf("digite o valor 1\n");
	scanf("%d%*c",&nota1);
	printf("digite o valor 2\n");
	scanf("%d%*c",&nota2);
	printf("digite o valor 3\n");
	scanf("%d%*c",&nota3);
	media = (nota1+nota2+nota3)/3;
	printf("a media é %d\n",media);
}
