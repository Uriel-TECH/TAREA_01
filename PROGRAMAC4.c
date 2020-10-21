#include<stdio.h>
#include<conio.h>
#include<math.h>
   
   
	
int main(){
	
	float r1, r2;
    float a, b, c;
	float n;
	
	printf("Introduce el valor del coeficiente a:");
scanf("%f",&a);
	
	printf("Introduce el valor del coeficiente b:");
scanf("%f",&b);

printf("Introduce el valor del coeficiente c:");
scanf("%f",&c);

n= (b*b-4*a*c);

if(n<0){
	printf("NINGUNA SOLUCION\n");
}

if(n>0){
	
r1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);

r2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);

printf("El resultado de r1 es: %.4f\n", r1);
printf("El resultado de r2 es: %.4f\n", r2);
 }
printf("Fin del programa");
}
