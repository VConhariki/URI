#include <stdio.h>

int main(){

int x,i=0;

do{
	scanf("%d", &x);
	
		if(x!=2002) printf("Senha Invalida\n");
		else{

			printf("Acesso Permitido\n");
			i=1;
	}

}while(i==0);


}
