#include <stdio.h>
int main(){
    int base, altura, area;
    printf("digito a base\n");
    scanf("%d%*c",&base);
    printf("digite a altura\n");
    scanf("%d%*c",&altura);
    area =(base*altura)/2;
    printf("area é : %d\n",area);
}