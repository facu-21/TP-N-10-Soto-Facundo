#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ceros(int m[4][4]){
	int i,j,c=0;
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			if(m[i][j]==0){
				c++;
			}
		}
	}
	return c;
}
void swc(int c){
	printf("\nLa cantidad de veces que se repite el numero 0 es %d\n",c);
}
int main() {
	srand(time(NULL));
	int m[4][4],i,j,c=0;
	printf("Matriz de 4x4 generada aleatoriamente con numeros entre el 0 y el 9:\n\n");
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			m[i][j]=rand()%10;
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	c=ceros(m);
	swc(c);
	return 0;
}
