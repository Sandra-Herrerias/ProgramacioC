#include <stdio.h>/*Directives de preprocessador*/



/*Programa principal*/

int main()
{

	/*Maxim.c: Programa d'exemple: Calcula el maxim de dos numeros introduits per pantalla
	FUNCIONALITAT
	*/

	int num1, num2, max;
	char maxNumText = "El maxim entre ";
	

	
	printf("Introdueix un numero:\n");
	scanf("%d", &num1);
	printf("Introdueix un altre numero:\n");
	scanf("%d", &num2);
	
	if(num1>max){
		max=num1;
	}else{
		max=num2;
	}
	
	printf("%s", maxNumText);
	printf("%d", num1);
	printf("%s", "i");
	printf("%d", num2);
	printf("%s", "es: ");
	printf("%d", max);
}
