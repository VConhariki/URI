#include <stdio.h>

long long int x,y;

int main(){

        while(scanf(" %lld%lld",&x,&y) != EOF){ 
        if(x>y) printf("%lld\n",x-y);
        else printf("%lld\n",y-x);
        }
}
