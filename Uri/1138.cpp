#include<stdio.h>
int main(){
	int i=0,n=0,m=0,aux=0;
	int vet[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%d %d",&n,&m);
	while(n!=0||m!=0){
		i = n;
		while(i<=m){
			aux = i;
			while(aux>0){
				vet[aux%10]+=1;
				aux/=10;	
			}
			i++;
		}
		for(i=0;i<10;i++){
			printf("%d ",vet[i]);
			vet[i]=0;
		}
		printf("\n"); 
		scanf("%d %d",&n,&m);
	}
	return 0;
}

