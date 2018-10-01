#include <stdio.h>
#include <stdlib.h>
int main(){

int n,i,j=0;

scanf(" %d", &n);

for(i=0;i<n;i++){
		j++;
		if(j%2==0) printf("%d^2 = %d\n",j,j*j);	
	}
}
