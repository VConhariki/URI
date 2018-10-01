#include <bits/stdc++.h>
using namespace std;

int n,x,y,j=0;
int maior(int x, int y);

int main(){

	cin >> n;
        
        while(j<n){

		cin >> x >> y;

                if(x>y) cout << maior(y,x) << endl;
                else
		        cout << maior(x,y) << endl;
	j++;
        }

}
int maior(int x, int y){

      if(x%y==0) return y; 
    
      maior(y,x%y);   
}
