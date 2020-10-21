#include <stdio.h>
int main(){

int a;

printf("Introduce un valor:");
scanf("%d",&a);

if(a%2==0){
printf("%d es par", a);
}
else
{
printf("%d es impar", a);
}
getchar();
return 0;

printf("Fin del programa");
}

