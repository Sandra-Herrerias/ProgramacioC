#include <stdio.h>/*Directives de preprocessador*/

/*Maxim.c: Programa d'exemple: Calcula el maxim de dos numeros introduits per pantalla
FUNCIONALITAT
*/

/*Programa principal*/

int main()
{	
	/*Fer un programa que demani un int a l'usuari i el mostri per pantalla*/
	int numInt = 0;
	char textOut[] = "El numero introduit es el: "; 
	printf("Introdueix un numero enter:\n");
	scanf("%d", &numInt);
	printf("%s", textOut);
	printf("%d\n", numInt);
	printf("\n-----------------------------------\n");
	/*Fer un programa que demani un float a l'usuari i el mostri per pantalla*/
	float numFloat =0;
	printf("\nIntrodueix un numero decimal:\n");
	scanf("%f", &numFloat);
	printf("%s", textOut);
	printf("%f\n", numFloat);
	printf("\n-----------------------------------\n");
	/*Fer un programa que demani un char a l'usuari i el mostri per pantalla*/
	char textChar[1];
	char textOutChar[] = "El caracter introduit es: ";
	printf("\nIntrodueix un caracter:\n");
	scanf("%s", &textChar);	
	printf("%s", textOutChar);
	printf("%s\n", textChar);
	printf("\n-----------------------------------\n");
	/*Fer un programa que demani un string a l'usuari i el mostri per pantalla*/
	char textString[100];
	char textOutString[] = "El string introduit es: ";
	printf("\nIntrodueix una frase:\n");
	scanf("%s", &textString);	
	printf("%s", textOutString);
	printf("%s\n", textString);
	printf("\n-----------------------------------\n");
}


