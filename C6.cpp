
#include<iostream>

using namespace std;

int ucln(int a, int b){
    int k;
    if(a <= b){
    for(int i =1; i<= a;i++)
        {
          if(a%i == 0 && b % i == 0) k =i;
        }} else{
    for(int i =1; i<= b;i++)
        {
          if(a%i == 0 && b % i == 0) k =i;
        }

    }
return k;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << ucln(a,b)<< endl;
    if(ucln(a,b) == 1) cout << "yes";
    else cout << "no";
}
