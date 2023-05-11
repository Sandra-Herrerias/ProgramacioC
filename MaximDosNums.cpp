#include <stdio.h>/*Directives de preprocessador*/

/*Maxim.c: Programa d'exemple: Calcula el maxim de dos numeros introduits per pantalla
FUNCIONALITAT
*/

int maxim(int x, int y)
{
	int max;
	
	if(x>y) max = x;
	else max=y;
	return max;
}

/*Programa principal*/

int main()
{	
int n, m, max;

	printf("Introdueix dos nombres:\n");
	scanf("%d", &n);
	scanf("%d", &m);
	max=maxim(n,m);
	
	printf("El mes gran dels dos nombres es: %d", max);
	return 0;
}


