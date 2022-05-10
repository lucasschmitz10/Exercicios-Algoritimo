#include <stdio.h>
int main(){
	int nota1, nota2, nota3, peso1, peso2, peso3, media;
	printf("declare a nota1 \n");
	scanf("%d%*c",&nota1);
	printf("declare a nota2 \n");
	scanf("%d%*c",&nota2);
	printf("declare a nota3 \n");
	scanf("%d%*c",&nota3);
	printf("declare o peso1 \n");
	scanf("%d%*c",&peso1);
	printf("declare o peso2 \n");
	scanf("%d%*c",&peso2);
	printf("declare o peso3 \n");
	scanf("%d%*c",&peso3);
	media = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
	printf("a media é %d\n", media);
}
