#include<iostream>
#include<cstdlib>
#include<time.h>
#include<string>

using namespace std;
int sinhso(int m){
    return rand()% m;
}
int sinhsoo(int n){
    return rand()%n;
    }



int main(){
    srand(time(0));
    int m,n,K;
    cin >> m >> n >> K;
    char c[10][10] ;
     for(int i =0; i< m;i++){
        for(int j =0;j< n;j++){
            c[i][j] = '*';
        }}
    char cc[10][10];
    for(int i =1;i<=K;i++){
            int a = sinhso(m);
            int b = sinhsoo(n);

        if(cc[a][b] == '.'){
            i--;
        } else {
        cc[a][b] = '.';
        }

    }
    for(int i =0; i< m;i++){
        for(int j =0;j< n;j++){
            if(cc[i][j] != '.'){
                int count =0;
            if(cc[i-1][j] == '.') {count++;}
            if(cc[i+1][j]== '.'){count++;}
            if(cc[i][j-1]== '.'){count++;}
            if(cc[i][j+1]== '.'){count++;}
            if(cc[i-1][j-1]== '.'){count++;}
            if(cc[i-1][j+1]== '.'){count++;}
            if(cc[i+1][j-1]== '.'){count++;}
            if(cc[i+1][j+1]== '.')  {count++;}
                cc[i][j] = char (count +48);
            }
        }
    }

   int k =m*m;
    while(k > K){
            int x,y;
        cin >> x >> y;
    if(cc[x][y] == '.'){
        cout << "YOU LOSE" << endl;
        for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<< cc[i][j] << ' ';
        }
        cout << endl;
    }
    break;
    } else if(cc[x][y] != '.' && k != K+1){
    c[x][y] = cc[x][y];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<< c[i][j] << ' ';
        }
        cout << endl;
    }
    } else  if(cc[x][y] != '.' && k == K+1){
    c[x][y] = cc[x][y];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<< cc[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "YOU WIN" ;
    return 0;
    }

   k--;


   }

}
