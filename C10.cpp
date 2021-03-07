#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

void checkchiahet(int p[], int N){
for(int i =0;i<N-2;i++){
        for(int j =i+1;j<N-1;j++){
            for(int k = j+1; k<N;k++){

                if((p[i] + p[j] + p[k]) % 25 == 0) {
                    cout << p[i] <<' ' << p[j] <<' '<< p[k] << endl;
                }
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int N;
    cin >> N;
    int* p = new int[N];
    for(int i =0;i< N;i++){
         p[i] = rand()%50;
}
    checkchiahet(p, N);
    delete[] p;
}
