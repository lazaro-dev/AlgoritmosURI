#include<stdio.h>
int main(){
	int a,b;
	int i=0,maior=0,menor=0;
	scanf("%d %d",&a,&b);
	if(a<b){
		menor = a;
		maior = b;	
	}else{
		menor = b;
		maior = a;
	}
	a =0;
	i = menor + 1;
	while(i<maior){
		if((i%2)!=0)
			a+=i;
		i++;
	}
	printf("%d\n",a);
	return 0;
}
