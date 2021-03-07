#include<stdlib.h>
#include<iostream>
#include<time.h>

using namespace  std;

int trave(int n){
    return rand()%n;
}

int main(){
    srand(time(0));
    int n;
    cin >> n;
   cout <<  trave(n);

}
