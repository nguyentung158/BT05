#include<iostream>
#include<list>
#include<cmath>
using namespace std;

string thphansangnhiphan(int n){
     string l;
    while(n!=0){
        int k =n%2;
        char t ;
        t= char(k + 48);
        l.push_back(t);
        n = n/2;

    }

    for(int i =0; i<= l.size()/2;i++){
        swap(l[i], l[l.size() - i -1]);
    }
     return l;
}

int nhiphansagthapph(string l){
    int tong =0;
    int i =0;

    while(l.size() > 0){

int rieng = int( l[l.size()-1] - 48);
    tong =tong + rieng*pow(2,i);
    l.pop_back();
    i++;
    }
    return tong;
}

int main(){
    int n;
    cin >> n;
    string l = thphansangnhiphan(n);
    cout << thphansangnhiphan(n) << endl;
    cout << nhiphansagthapph(l) << endl;
}
