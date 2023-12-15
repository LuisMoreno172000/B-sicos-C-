#include<stdio.h>
#define TAMANIO 100
//Busqueda lineal en un arreglo 

// prototipo de la función (antes de int main)
int busquedaLineal(const int arreglo[], int llave, int tamanio);

int main ()
{
	int a [TAMANIO]; //crea el arreglo a 
	int x; // contador para inicializar los elmentos de 0 a 99del arreglo 
	int llaveBusqueda; // valor para localizar el arreglo (a)
	int elemento; //variable para almacenar la ubicación de llaveBusqueda (o-1)
// Se crean los datos 
for(x=0; x<TAMANIO; x++){
	a[x]=2*x; // se multiplica 2*x para que los numeros sean pares 
}
printf("Introduza la llave de busqueda entera:\n");
scanf("%d", &llaveBusqueda);
//// Se intenta loCalizar llaveBusqueda en el arreglo (a)
elemento=busquedaLineal(a, llaveBusqueda, TAMANIO);

//Despliega los resultados
if(elemento!=-1){
	printf("Encontre el valor en el elemento %d\n", elemento);
}
else{
	printf("Valor no encontrado\n");
}
return 0;
}

/* Compara la llave con cada elemento del arreglo hasta que localiza el elemento 
o hasta que alcanza el final del arreglo; devuelve el subíndice del elemento 
si lo encontró ó de lo contrario *1 si no lo encontro */

int busquedaLineal(const int arreglo[], int llave, int tamanio)
{
	int n;
	
//ciclo a través del arreglo 
for(n=0; n<tamanio; ++n){
	if (arreglo[n]==llave){
		return n; 
	} 
}
return -1;
}//fin de la busqueda lineal 





