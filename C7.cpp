#include<iostream>
using namespace std;

void in(int m , int n){
    for(int i =1; i<=m;i++){
        cout << ' ';
    }
    for(int i =1;i<=n;i++){
        cout << "*";
    }
    cout << endl;
}

int main(){
    int m,n, hang;
    cin >> hang;
    int dem = hang;
    while(hang != 0){
        m = hang -1;
        n = 1 +(dem - hang)*2;
        in(m,n);

        hang--;
    }
}
