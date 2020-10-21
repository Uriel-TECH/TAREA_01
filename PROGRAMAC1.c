#include <stdio.h>
int main(){

float a;
printf("Introduce el valor de la variable a:");
scanf("%f",&a);

float b;
printf("Introduce el valor de la variable b:");
scanf("%f",&b);

if(a<b){
printf("La variable mayor es b\n");
}
if(a>b){
printf("La variable mayor es a\n");
}
printf("Fin del programa");
}

