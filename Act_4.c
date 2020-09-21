#include <stdio.h>
void capturar_enteros() {
	int enteros[5];
	float promedio;
	int i, suma = 0;
	for(i=0; i<5; i++) {
		scanf("%i",&enteros[i]);
	}
	for(i=0; i<5; i++) {
		printf("%i\n", enteros[i]);
	}
	for(i=0; i<5; i++) {
		suma = suma + enteros[i];
	}
	printf("Suma: %i\n", suma);
	printf("Promedio: %f\n", suma/5.0);
}
void mostrar(int n, char cadena[])
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("%s", cadena);
	}
}
int main() {
	char opc;
	char cadena[20];
	int n;
	do {
		printf("1) Capturar enteros\n");
		printf("2) Mostrar cadena n veces\n");
		printf("0) Salir\n");
		scanf("%c",&opc);
		switch(opc) {
			case '1':
				capturar_enteros();
				break;
			case '2':
				printf("Escribe una cadena de hasta 20 caracteres: ");
				fflush(stdin);
				fgets(cadena, sizeof(cadena), stdin);
				printf("n: ");
				scanf("%i", &n);
				mostrar(n, cadena);
				break;
			case '3':
				break;
			case '4':
			case '0':
				default:
				break;
		}
	}
		while(opc!='0');
		return 0;
	}
