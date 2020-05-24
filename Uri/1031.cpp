#include<stdio.h>

int ultimo(int tam,int pulo);

int main(){
	int n=0,x=0,pulo=1;
	int tam = 0;
	scanf("%d",&tam);
	
	while(tam!=0){
		while(ultimo(tam,pulo)!=13){
			printf("pulo %d=%d\n",pulo,ultimo(tam,pulo));
			pulo++;		
		}
		printf("%d\n",pulo);
		scanf("%d",&tam);
	}
	return 0;
}
int ultimo(int tam,int pulo){	
	if(tam==1){
		return 1;
	}else{
		return (ultimo(tam - 1,pulo)+ pulo - 1 )%tam + 1;
	}
}
