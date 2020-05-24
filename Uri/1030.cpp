#include<stdio.h>

int ultimo(int tam,int pulo);

int main(){
	int nc=0,i=0,x=0,tam=0,pulo=0;
	scanf("%d",&nc);
	while(x<nc){
		scanf("%d %d",&tam,&pulo);
		printf("Case %d: %d\n",1+x,ultimo(tam,pulo));
	x++;
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

