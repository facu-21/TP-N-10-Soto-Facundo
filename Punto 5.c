#include <stdio.h>

void askm(int m[15][12]){
	int i,j;
	printf("Ingrese una matriz de 12x15:\n\n");
	for(i=0;i<=14;i++){
		printf("Fila numero %d\n",i+1);
		for(j=0;j<=11;j++){
			printf("Ingrese elemento para la columna numero %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
}
void swd(int min,int sum,int ne){
	printf("El menor numero de la matriz es el %d\n",min);
	printf("La suma total de los elementos de las primeras 5 filas de la matriz es %d\n",sum);
	printf("La cantidad total de numeros negativos entre la columa 5 y la columna 9 es %d\n",ne);
}
int main() {
	int m[15][12]={0},i,j,min=0,sum=0,ne=0;
	askm(m);
	for(i=0;i<=14;i++){
		for(j=0;j<=11;j++){
			if(i==0 && j==0){
				min=m[i][j];
			}
			else{
				if(m[i][j]<min){
					min=m[i][j];
				}
			}
			if(i<=4){
				sum+=m[i][j];
			}
			if(j>=4 && j<=8){
				if(m[i][j]<0){
					ne++;
				}
			}
		}
		printf("\n");
	}
	swd(min,sum,ne);
	return 0;
}
