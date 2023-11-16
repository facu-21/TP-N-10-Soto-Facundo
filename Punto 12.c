#include <stdio.h>

void askmat(int m[4][7],float v[4]){
	int i,j;
	printf("Ventas de las ultimas 4 semanas de Maria Shop\n\n");
	for(i=0;i<=3;i++){
		printf("Semana numero %d\n",i+1);
		for(j=0;j<=6;j++){
			printf("Ingrese la cantidad de ventas del dia numero %d: ",j+1);
			scanf("%d",&m[i][j]);
			while(m[i][j]<0){
				printf("Ingreso invalido\n");
				printf("Ingrese nuevamente la cantidad de ventas del dia numero %d: ",j+1);
				scanf("%d",&m[i][j]);
			}
			v[i]+=m[i][j];
		}
		printf("\n");
	}
}
void swps(float ps[4],int pvm){
	int i;
	for(i=0;i<=3;i++){
		printf("El promedio de ventas de la semana numero %d es %.2f\n",i+1,ps[i]);
	}
	printf("\nLa semana con mas ventas fue la numero %d\n",pvm);
}
int main() {
	int m[4][7]={0},i,vm=0,pvm;
	float ps[4]={0},v[4]={0};
	askmat(m,v);
	for(i=0;i<=3;i++){
		printf("La cantidad de ventas totales de la semana numero %d es %.0f\n",i+1,v[i]);
		ps[i]=v[i]/7;
		if(v[i]>vm){
			vm=v[i];
			pvm=i+1;
		}
	}
	printf("\n");
	swps(ps,pvm);
	return 0;
}
