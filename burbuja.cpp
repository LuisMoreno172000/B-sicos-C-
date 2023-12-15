#include <stdio.h>
#define TAMANIO 10

/*La función comienza la ejecución del programa */
int main ()
{
	/* Inicializa a */
	int a[ TAMANIO ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int pasadas; /* Contador de pasadas */
	int i; /* contador de comparaciones */
	int almacena; /* ubicación temporal utilizada para el intercambio de elementos */
	
	printf("Elementos de datos en el orden original \n");
	
	/* muestra el arreglo original */
	for ( i=0; i<TAMANIO; i++);{
	printf ("%4d", a[i] );
	} /* fin de for */
	
	/* ordenamiento burbuja */
	/* ciclo para controlar el número de pasos */
	for (pasadas = 1; pasadas<TAMANIO; pasadas++ ){
		
		/* ciclo para controlar el número de comparaciones por pasada */
	    for ( i=0; i<TAMANIO -1; i++){
		/* compara los elementos adyacentes y los intercambia si el primer elemento es mayor que el segundo */
		if (a[i]>a[i+1]){
			almacena = a[i];
			a[i] = a[i+1];
			a[i+1] = almacena;
		}	/* fin de if */
		} /* fin de for interno */
	} /* finde for externo */
	printf("\nElementos de datos en orden ascendente\n");
	/* muestra el arreglo ordenado */
	for ( i=0; i<TAMANIO; i++){
		printf("%4d", a[i]);
	} /* fin de for */
	printf("\n");
	return 0; /*indica terminación existosa */
}
