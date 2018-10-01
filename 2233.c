#include <stdio.h>

int verificaqtd(int a,int b);

int main(){

	long long int total, r,g,b,x,y;
 
	scanf("%llx %llx %llx",&r,&g,&b);

	x=verificaqtd(r,g);
	x*=x;
	y=verificaqtd(g,b);
	y*=y;

	printf("%llx",x*y+x+1);
	puts("");
}

int verificaqtd(int a,int b){

	return a/b;

}

