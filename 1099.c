#include <stdio.h>

int main(){

int x,y,n,i,j,soma=0,aux;


scanf("%d", &n);

for(i=0;i<n;i++){

scanf(" %d %d",&x,&y);
soma=0;
if(y<x){
		aux=x;
		x=y;
		y=aux;
	}

for(j=x+1;j<y;j++){

if(j%2 != 0 ) soma+=j;

}

printf("%d\n",soma);

}

}
