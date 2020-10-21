#include<stdio.h>
#include<conio.h>
#include<math.h>
   
	
int main(){
	
	float AREA;
    float PERIMETRO;
    float r;
	
	printf("Introduce el valor del radio del circulo:");
scanf("%f",&r);
	
	
AREA = (3.1415*r*r);

PERIMETRO = (2*3.1415*r);

printf("El resultado de AREA es: %.4f\n", AREA);
printf("El resultado de PERIMETRO es: %.4f\n", PERIMETRO);
 
printf("Fin del programa");
}
