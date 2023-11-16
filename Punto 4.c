#include <stdio.h>

void reord(int m[2][10]){
	int i;
	m[1][0]=m[0][9];
	for(i=1;i<=9;i++){
		m[1][i]=m[0][i-1];
	}
}
void askm(int m[2][10]){
	int i;
	printf("Ingrese un vector de 10 elementos\n");
	for(i=0;i<=9;i++){
		printf("Ingrese elemento numero %d: ",i+1);
		scanf("%d",&m[0][i]);
	}
}
int main(){
	int m[2][10]={0},i;
	askm(m);
	reord(m);
	printf("\nVector nuevo: ");
	for(i=0;i<=9;i++){
		printf("%d ",m[1][i]);
	}
	return 0;
}
