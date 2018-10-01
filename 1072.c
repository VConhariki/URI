#include <stdio.h>
#include <stdlib.h>

int main(){

int *p,n,contin=0,contout=0;

scanf(" %d", &n);
p=malloc(n*sizeof(int));

for(int i=0; i<n ; i++){

	scanf(" %d", (p+i));
		if(*(p+i)<=20 && *(p+i)>=10) contin++;
			else contout++;
	}
printf("%d in\n%d out\n",contin,contout);

free(p);
p=NULL;
return 0;

}
