#include <stdio.h>

int neg(int m[5][6],int i,int j,int n){
	if(m[i][j]<0){
		n++;
	}
	return n;
}

int cerdia(int m[5][6],int i,int j,int c){
	if(i==j && m[i][i]==0){
		c++;
	}
	return c;
}

int main() {
	int m[5][6]={0},i,j,n=0,c=0;
	printf("Ingrese una matriz de 5x6\n\n");
	for(i=0;i<=4;i++){
		printf("Fila numero %d:\n",i+1);
		for(j=0;j<=5;j++){
			printf("Ingrese elemento para la columna numero %d: ",j+1);
			scanf("%d",&m[i][j]);
			n=neg(m,i,j,n);
			c=cerdia(m,i,j,c);
		}
		printf("\n");
	}
	printf("\nLa cantidad total de elementos negativos de la matriz es %d\n",n);
	printf("La cantidad total de ceros de la diagonal principal de la matriz es %d\n",c);
	return 0;
}
