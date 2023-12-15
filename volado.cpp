#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int frecuencia1=0;
	int frecuencia2=0;
	int tiro;
	int cara;
	for (tiro=1;tiro<=1000;tiro++)
	{
		cara=1+rand()%2;
		switch(cara)
		{
			case 1: 
			++frecuencia1;
			break;
			case 2: 
			++frecuencia2;
			break;
			
		}
				
	} 
	
	printf("%s%13s\n", 		"Cara", 		"Frecuencia");
	printf("	1%13d\n", frecuencia1);
	printf("	2%13d\n", frecuencia2);
return 0;
}
