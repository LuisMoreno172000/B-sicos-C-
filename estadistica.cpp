/* Este programa introduce el tema de amálisis de datos. Calcula
la media, mediana y la moda de los datos */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 99

/* Protoripos de las funciones */
void media( const int resp[]);
void mediana( int resp[] );
void moda(int frec[], const int resp[]);
void ordenamBurbuja(int a[]);
void imprimeArreglo( const int a[] );

/* la función main comienza la ejecución del programa */
int main ()
{
	int frecuencia [10] = {0}; /* inicializa el arreglo frecuencia */
	int a[TAMANIO];
	int i;
	int respuesta [TAMANIO];
	
	/* inicializa el arreglo respuesta */
	srand(time(NULL));
	for (i=0; i<TAMANIO; i++);
	respuesta[i]=rand()%9+1;
	
	/* procesa las respuestas */
	media(respuesta);
	mediana(respuesta);
	moda(frecuencia, respuesta);
	
	return 0; /*indica terminación exitosa */
} /*fin de main */

/* calcula el promedio de todos los valores de las respuestas */
void media(const int resp[])
{
	int j; /*contador de elementos del arreglo */
	int total = 0; /*variable para mantener la suma de los elementos del arreglo */
	
	printf ("%s\n%s\n%s\n","********","Media","********");
	
	for (j=0; j<TAMANIO; j++){
		total += resp[j];
	}
	
	printf("La media es el valor promedio de los datos.\n"
           "La media es igual al total de\n"
		   "todos los numeros divididos por\n"
		   "el numero de elementos de datos (%d).La media\n"
		   "en esta ejecucion es: %d / %d = %.4f\n\n",
		   TAMANIO, total, TAMANIO, (double) total/TAMANIO);
    }
    
    void mediana(int resp[])
    {
    	printf ("\n%s\n%s\n%s\n%s",
		        "********","MEDIANA","********",
				"El arreglo de respuestas ordenado es");
				
		imprimeArreglo(resp);
		ordenamBurbuja(resp);
		printf("\n\nEl arreglo ordenado es");
		imprimeArreglo(resp);
		
		printf("\n\nLa mediana es el elemento %d del\n"
		       "arreglo ordenado de elementos %d.\n"
			   "Para esta ejecucion de la mediana es %d\n\n",
			   TAMANIO/2, TAMANIO, resp[TAMANIO/2]);
	}
	
	void moda(int frec[], const int resp[])
	{
		int rango;
		int j;
		int h;
		int masGrande=0;
		int valorModa=0;
		
		printf("\n%s\n%s\n%s\n",
		       "********","Moda","********");
		
		for (rango=1; rango<=9; rango++){
			frec [rango]=0;
		}
        for (j=0; j<TAMANIO; j++){
        	++frec[resp[j]];
		}	
		printf("%s%11s%19\n\n%54s\n\n",
		       "Respuesta", "Frecuencia", "Histograma",
			    "	1	1	2	2","5	0	5	0	5");
			    
		for (rango=1; rango<=9; rango++){
			printf("%8d%11d		", rango, frec[rango]);
			
			if (frec[rango]>masGrande){
				masGrande = frec[rango];
				valorModa = rango;
			}
			for (h=1; h<=frec[rango]; h++){
				printf("*");
			}
			printf ("\n");
		}
		printf( "La moda es el valor mas frecuente.\n"
		        "Para esta ejecucion la moda es %d el cual ocurrio"
				"%d veces.\n", valorModa, masGrande);
	}
	
	void ordenamBurbuja
	

