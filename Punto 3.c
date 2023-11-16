#include <stdio.h>

void mat(int m[5][5]){
	int i,j;
	for(i=0;i<=4;i++){
		printf("Vendedor numero %d\n",i+1);
		for(j=0;j<=4;j++){
			printf("Ingrese sus ventas del dia numero %d: ",j+1);
			scanf("%d",&m[i][j]);
			while(m[i][j]<0){
				printf("Ingreso invalido\n");
				printf("Ingrese sus ventas del dia numero %d nuevamente: ",j+1);
				scanf("%d",&m[i][j]);
			}
		}
		printf("\n");
	}
}
	
int mstvent(int m[5][5],int vm[2]){
	int i,j,n=0;
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if(m[i][j]>n){
				vm[0]=i;
				vm[1]=j;
				n=m[i][j];
			}
		}
	}
	return n;
}

int main(){
	int m[5][5]={0},vm[2]={0};
	mat(m);
	mstvent(m,vm);
	printf("La mayor cantidad de ventas fue del vendedor numero %d en el dia numero %d\n",vm[0]+1,vm[1]+1);
	return 0;
}
