#include <stdio.h>
void total(float m[20][8],int i,int j){
	m[i][7]+=m[i][j];
}
void askm(float m[20][8]){
	int i,j;
	for(i=0;i<=19;i++){
		printf("Conductor numero %d\n",i+1);
		for(j=0;j<=6;j++){
			printf("Ingrese la cantidad de kilometros recorridos en el dia numero %d: ",j+1);
			scanf("%f",&m[i][j]);
			while(m[i][j]<0){
				printf("Ingreso invalido\n");
				printf("Ingrese la cantidad de kilometros recorridos en el dia numero %d nuevamente: ",j+1);
				scanf("%f",&m[i][j]);
			}
			total(m,i,j);
		}
		printf("\n");
	}
}
int main() {
	float m[20][8]={0};
	int i,j;
	askm(m);
	printf("\nIngresos finalizados\n\n");
	for(i=0;i<=19;i++){
		printf("Kilometros del conductor numero %d:\n",i+1);
		for(j=0;j<=6;j++){
			printf("Dia %d: %.2f\n",j+1,m[i][j]);
		}
		printf("Total de kilometros recorridos en la semana: %.2f\n\n",m[i][7]);
	}
	return 0;
}
