#include<stdio.h>

long factorial(long numero);

int main (){
int i;
for (i=0;i<=10;i++){
printf("%2d!=%d\n",i,factorial(i));	
}

return 0;

}

long factorial(long numero){
	
	if (numero<=1){
		return 1;
	}
	else 
{
	return (numero*factorial(numero-1));
}

}
