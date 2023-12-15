#include<stdio.h>

void hanoi(int n, int ti, int ta, int tf);
int mov;
int main()
{
	int n;
	printf("Introduce el numero de discos a jugar en las Torres de Hanoi. \n");
	scanf("%d",&n);
	hanoi(n,1,2,3);
	printf("El total de movimientos fue %d \n",mov);
	return 0;
}

void hanoi(int n, int ti, int ta, int tf)
{
	if (n==1)
	{
		printf("%d -> %d \n", ti,tf);
		mov++;
	}
	else
	{
		hanoi(n-1,ti,tf,ta);
		printf("%d -> %d \n", ti,tf);
		mov++;
		hanoi(n-1,ta,ti,tf);
	}
}
