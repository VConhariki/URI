#include <stdio.h>

int fib(int i);

int main(){

int i,n=0;

scanf(" %d",&i);

n=fib(i);

printf("%d\n",n);

}

int fib(int i){

if(i==1) return 1;

if(i==0) return 0;	

return fib(i-1) + fib(i-2);

}
