#include <stdio.h>

int main(){

	unsigned long long int n,x,i,j=0,vet[70],total=0;
	
	scanf(" %llu", &n);

	do{
	total=0;
                scanf(" %llu", &x);	        
	        vet[0]=1;
	        for(i=1;i<=x;i++)
	               vet[i]=vet[i-1]*2;
	        for(i=0;i<x;i++)
	                total+=vet[i];
	        
	        printf("%llu kg\n",total/12000);
        	j++;
	}while(j<n);

}
