#include <stdio.h>

void askm(int m[12][19]){
	int i,j;
	printf("Ingrese una matriz de 12x19\n\n");
	for(i=0;i<=11;i++){
		printf("Fila numero %d:\n",i+1);
		for(j=0;j<=18;j++){
			printf("Ingrese elemento para la columna numero %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
}

void ntoc(int m[12][19]){
	int i,j;
	for(i=0;i<=11;i++){
		for(j=0;j<=18;j++){
			if(m[i][j]<0){
				m[i][j]=0;
			}
		}
	}
}

int main() {
	int m[12][19]={0},i,j;
	askm(m);
	ntoc(m);
	printf("\nMatriz final, con ceros en lugar de los numeros negativos ingresados:\n\n");
	for(i=0;i<=11;i++){
		for(j=0;j<=18;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
