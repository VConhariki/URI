#include <stdio.h>
#include <math.h>
long long int primo(long long int x);
int main(){

       long long int n,x,j=0;
       int flag=0;
		
        scanf(" %lld",&n);

	do{
	
	        scanf(" %lld",&x);
	        flag=primo(x);
	        if(flag==1) printf("Prime\n");
	        else printf("Not Prime\n");
	        j++;
	        
	}while(j!=n);


}

long long int primo(long long int x){

        long long int i=2;
        
        for(i;i<sqrt(x);i++)
                if(x%i==0) return 0;
                
                return 1;
}
