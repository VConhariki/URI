#include <stdio.h>

int main(){

        int x,n,j=0,z=0,i,cont=0;
        scanf(" %d", &n);
        
        while(n > z){
                
                scanf(" %d", &x);
                 
                for(i=1;i<=45360;i++){
                        cont=0;
                        for(j=1;j<=i;j++){
                        
                                if(i%j == 0) cont++;
                                //if(cont>x) break;        
                                
                        }
                        
                         if(cont == x) break;
                }
                                
                 printf("%d\n",i);
                 z++;
        
        }

}
