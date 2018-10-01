#include <stdio.h>
long long int fat(long long int x);
int main(){

        long long int x,y,s;
        while (scanf(" %lld %lld", &x,&y) != EOF){
        s=(fat(x)+fat(y));
        printf("%lld\n", s);
        }

}

long long int fat(long long int x){

        long long int i;
        
        if(x==0 || x==1) return 1;
        for(i=(x-1);i >= 2;i--)
                x=x*i;
        return x;
}
