#include <stdio.h>
int main(){

float nota[3],s;
int i=0,n,j=0;

scanf(" %d", &n);

do{

for(i;i<3;i++)
	scanf(" %f", &nota[i]);

s=nota[0]*0.2+nota[1]*0.3+nota[2]*0.5;
printf("%.1f\n", s);
j++;
i=0;
	}while(j!=n);
}
