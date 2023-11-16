#include <stdio.h>

void matr(float m[5][9],char n[5][20]){
	int i,j;
	for(i=0;i<=4;i++){
		printf("Chofer numero %d\n\n",i+1);
		printf("Ingrese su nombre: ");
		scanf("%s",&n[i]);
		printf("Ingrese su sueldo por hora: ");
		scanf("%f",&m[i][6]);
		for(j=0;j<=5;j++){
			printf("Ingrese la cantidad de horas trabajadas el dia numero %d: ",j+1);
			scanf("%f",&m[i][j]);
			while(m[i][j]<0 || m[i][j]>24){
				printf("Ingreso invalido\n");
				printf("Ingrese nuevamente la cantidad de horas trabajadas el dia numero %d: ",j+1);
				scanf("%f",&m[i][j]);
			}
		}
		printf("\n");
	}
}
void swm(float m[5][9],char n[5][20],int p,float t){
	int i;
	printf("Numero de legajo \t Cantidad total de horas trabajadas \t Sueldo semanal\n\n");
	for(i=0;i<=4;i++){
		printf("\t %d \t \t \t \t %.2f  \t \t \t  %.2f\n",i+1,m[i][7],m[i][8]);
	}
	printf("\n\nLa empresa pagara un total de $%.2f\n",t);
	printf("El empleado con mas horas registradas el lunes se llama %s\n",n[p]);
}
int main() {
	float m[5][9]={0},t=0;
	int i,j,p=0;
	char n[5][20];
	matr(m,n);
	for(i=0;i<=4;i++){
		for(j=0;j<=5;j++){
			if(j==0){
				if(m[i][j]>m[p][j]){
					p=i;
				}
			}
			m[i][7]+=m[i][j];
		}
		m[i][8]=m[i][6]*m[i][7];
		t+=m[i][8];
	}
	swm(m,n,p,t);
	return 0;
}
