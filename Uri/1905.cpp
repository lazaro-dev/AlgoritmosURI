#include<stdio.h>
int baixo(int i,int j);
int direita(int i,int j);
int esquerda(int i,int j);
int cima(int i,int j);
int encurDir(int i,int j);
int encurEsq(int i,int j);
int encurBai(int i,int j);
int preso(int i,int j);
void preenche(int i,int j);
void ul_caso(int i,int j);
int mat[5][5]={ 0, 0, 0, 0, 1,
				1, 1, 0, 0, 1,
				0, 1, 0, 0, 0,
				0, 0, 1, 1, 1,
				1, 1, 0, 0, 0};
int main(){
	int i=0,j=0;
	int teste= 0,sair=0; 
	int aux=0,k=0,h=0,vol=0;					
	while(!sair){	
		if(!preso(i,j)){
			if(baixo(i,j)){
				i++;
				vol=0;
			}else{
				if(direita(i,j)&&vol==0){
					j++;
				}else{
					if(esquerda(i,j)&&!encurDir(i,j)){
						j--;
						vol=1;
					}else{
						vol=0;	
						
					}
				}
			}
		}
		if(encurDir(i,j)&&!((i+j)==8)){
			preenche(i,j);
			j--;
			vol=1;
		}else{
			if(encurEsq(i,j)){
				preenche(i,j);
				j++;
				vol=0;
			}else{
				if(encurBai(i,j)&&!((i+j)==8)){
					preenche(i,j);
					i--;
					vol=0;
				}else{
						ul_caso(i,j);
				}
			}
		}	
		if(preso(i,j))
			sair = 1;
		if((i+j)==8)
			sair=1;
	}//fim while
	for(k=0;k<5;k++){
		for(h=0;h<5;h++){
			printf("%d",mat[k][h]);
		}
		printf("\n");
	}
	printf("\ni: %d j: %d \n",i,j);
	if((i+j)==8)teste=1;
	printf("%d",teste);
	return 0;
}
void ul_caso(int i,int j){
	for(int k=0;k<5;k++){
		
	}
	for(int k=0;k<5;k++){
		if(mat[i][k]==0&&mat[i-1][k]==0&&mat[i+1][k]==1&&i<4&&i>0){
			mat[i][k]=1;	
		}
	}
}
int baixo(int i,int j){
	if(mat[i+1][j]==0&&i<4)
		return 1;
	else
		return 0;
}
int direita(int i,int j){
	if(j<4&&mat[i][j+1]==0)
		return 1;
	else
		return 0;
}
int esquerda(int i,int j){
	if(mat[i][j-1]==0&&j>0)
		return 1;
	else
		return 0;
}
int cima(int i,int j){
	if(mat[i-1][j]==0&&i>0)
		return 1;
	else
		return 0;
}
void preenche(int i,int j){
	mat[i][j]=1;
}
int encurDir(int i,int j){
	if(!direita(i,j)&&!baixo(i,j)&&!cima(i,j)&&esquerda(i,j))
		return 1;
	else
		return 0;
}
int encurEsq(int i,int j){
	if(!esquerda(i,j)&&!baixo(i,j)&&!cima(i,j)&&direita(i,j))
		return 1;
	else
		return 0;
}
int encurBai(int i,int j){
	if(!esquerda(i,j)&&!baixo(i,j)&&!direita(i,j)&&cima(i,j))
		return 1;
	else
		return 0;
}
int preso(int i,int j){
	if(!direita(i,j)&&!esquerda(i,j)&&!baixo(i,j)&&!cima(i,j))
		return 1;
	else
		return 0;
}
