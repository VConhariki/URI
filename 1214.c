#include <stdio.h>

int main(){

	int n,i,j,nota[10001];
	double cont=0,m,media=0;
	
	scanf(" %d", &n);


	do{
	        cont=0; 
	        media=0;
	        
	        scanf(" %lf", &m);

	        
	        for(i=0;i<m;i++){
	        
	                scanf(" %d",&nota[i]);
	                media+=nota[i];
	        }   
	        media=media/m;
	        for(i=0;i<m;i++)
	                if(nota[i]>media) cont++;
     
	        printf("%.3lf%%\n",(cont/m)*100);

		for(i=0;i<m;i++)
	                nota[i]=0;

	        j++;
	
	
	}while(j!=n);
}
