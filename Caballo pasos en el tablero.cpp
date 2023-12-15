#include <stdio.h>
#define T 8

void marcar(int a[][T], int j, int k,int i);
void Tablero(int a[][T]);

int main()
{
	int horizontal[T]={2,1,-1,-2,-2,-1,1,2};
	int vertical[T]={-1,-2,-2,-1,1,2,2,1};
	
	int acces[T][T]=
	{{2,3,4,4,4,4,3,2},
	 {3,4,6,6,6,6,4,3},
	 {4,6,8,8,8,8,6,4},
	 {4,6,8,8,8,8,6,4},
	 {4,6,8,8,8,8,6,4},
	 {4,6,8,8,8,8,6,4},
	 {3,4,6,6,6,6,4,3},
	 {2,3,4,4,4,4,3,2}
	 };
	
	int i;
	int ca=0;
	int fa=0;
	int cT,fT,cTT,fTT,centinela,movtem;
	int tablero[T][T]={0};
	
	
	for(i=1;i<=64;i++)
	{
		movtem=10;
		centinela=0;
		printf("\n\nIntento numero %d \n\n",i);
		marcar(tablero,ca,fa,i);
		Tablero(tablero);
		printf("\nPresiona cualquier tecla\n");
		getchar();
		for(int l=0;l<T;l++)
			{
				cT=ca;
				fT=fa;
				cT+=horizontal[l];
				fT+=vertical[l];
				if(cT<8 && cT>-1 && fT<8 && fT>-1 && tablero[cT][fT]==0)
				{
					centinela=1;
					if(acces[cT][fT]<movtem)
					{
						movtem=acces[cT][fT];
						cTT=cT;
						fTT=fT;
					}
					else{}
				}
				else{}
			}
		ca=cTT;
		fa=fTT;
			
		if(centinela==0)
			{
				printf("El programa se ha atascado\n");
				break;
			}		
	}
}

void marcar(int a[][T], int ca, int fa,int i)
{
	a[ca][fa]=i;
}

void Tablero(int t[][T])
{
	int i,j;
	printf("------------------------------------------\n");
	for(i=0;i<T;i++)
	{
		for(j=0;j<T;j++)
		{
			if(t[j][i]!=0)
			{
				printf("| %2d ",t[j][i]);
			}
			else
			{
				printf("|    ");
			}
		}
	printf("|\n------------------------------------------\n");
	}
}
