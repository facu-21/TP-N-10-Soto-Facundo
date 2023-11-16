#include <stdio.h>

float askp(float ph[7][20][6],float pp,int i){
	int j,k;
	for(j=0;j<=19;j++){
		printf("Piso numero %d\n\n",j+1);
		for(k=0;k<=5;k++){
			printf("Ingrese la cantidad de habitantes del departamento numero %d: ",k+1);
			scanf("%f",&ph[i][j][k]);
			pp+=ph[i][j][k];
		}
		printf("\n");
	}
	return pp;
}

void swd(float htt,float pt){
	printf("\nLa cantidad total de habitantes del complejo es %.2f\n",htt);
	pt=htt/7;
	printf("El promedio de habitantes por torre es %.2f\n",pt);
}

int main() {
	float ph[7][20][6]={0},pp=0,ht=0,pt=0,htt=0;
	int i,j,k;
	for(i=0;i<=6;i++){
		printf("Torre numero %d\n",i+1);
		pp=askp(ph,pp,i);
		ht=pp;
		pp=pp/20;
		printf("\nLa cantidad total de habitantes de la torre numero %d es %.2f\n",i+1,ht);
		printf("El promedio de habitantes por piso de la torre numero %d es %.2f\n\n",i+1,pp);
		pp=0;
		htt+=ht;
		ht=0;
	}
	swd(htt,pt);
	return 0;
}
