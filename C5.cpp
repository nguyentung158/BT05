
#include<iostream>
#include<cmath>

using namespace std;

int ktrangTo(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else{
        for(int i =2;i<= sqrt(n); i++){
            if(n % i== 0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int n;
    cin >> n;
    cout << ktrangTo(n) << endl ;
    for(int i =1;i<=n;i++){
        if(ktrangTo(i) == 1)
            cout << i << ' ';
        }
    }

