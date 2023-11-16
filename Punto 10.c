#include <stdio.h>

void swf(int f[10]){
	int i;
	printf("La suma total de las filas es: \n");
	for(i=0;i<=9;i++){
		printf("Suma de la fila numero %d: %d\n",i+1,f[i]);
	}
}
	
void swc(int c[10]){
	int i;
	printf("\nLa suma total de las columnas es: \n");
	for(i=0;i<=9;i++){
		printf("Suma de la columna numero %d: %d\n",i+1,c[i]);
	}
}

int main() {
	int m[10][10]={0},f[10]={0},c[10]={0},i,j;
	printf("Ingrese una matriz de 10x10\n\n");
	for(i=0;i<=9;i++){
		printf("Fila numero %d\n",i+1);
		for(j=0;j<=9;j++){
			printf("Ingrese elemento de la columna numero %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			f[i]+=m[i][j];
			c[i]+=m[j][i];
		}
	}
	swf(f);
	swc(c);
	return 0;
}
