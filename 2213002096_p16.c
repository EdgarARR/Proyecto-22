#include<stdio.h>
void m(int num1, int num2, int den1, int den2){
int rnumm, rdenm;

printf("\n\n");
printf("La multiplicacion queda con:");
printf("\n\n");
rnumm= num1*num2;
printf("Su numerador es: %d", rnumm);
printf("\n");
rdenm= den1*den2;
printf("Y el denominador es: %d", rdenm);
}

void d(int num1, int num2, int den1, int den2){	
int rnumd, rdend;

printf("\n\n\n");
printf("La division queda con: ");
printf("\n\n");
rnumd= num1*den2;
printf("Su numerador es: %d", rnumd);
printf("\n");
rdend= num2*den1;
printf("Y el denominador es: %d", rdend);
}

int main(){
int num1, den1, num2, den2, rnumm, rdenm, rnumd, rdend;

printf("Multiplicacion y division de dos fracciones");
printf("\n");

printf("Numerador de la fraccion 1: ");
scanf("%d", &num1);
printf("\n");
printf("Ahora el numerador de la fraccion 2: ");
scanf("%d", &num2);
printf("\n");
printf("Denominador de la fraccion 1: ");
scanf("%d", &den1);
printf("\n");
printf("Ahora el denominador de la fraccion 2: ");
scanf("%d", &den2);
	
m(num1, num2, den1, den2);
d(num1, num2, den1, den2);

return 0;
}
