#include<iostream>
#include<cmath>
using namespace std;

int lamtronthapphan(double n){
    int m =n;

    if(n >=0 && n - m >= 0.5) return ceil(n);
    else if(n >= 0 && n-m < 0.5) return m;
    else if(n < 0 && m -n >= 0.5) return floor(n);
    else return m;
}

int main(){
    double n;
    cin >> n;
    cout << lamtronthapphan(n);


}
