#include<iostream>
#include<cstring>
using namespace std;
int main(){
    
    int n= 100;

    bool prime[n+1];
    memset(prime, true, n);
    for(int i=2; i< n;i++){
        // cout<<i<<"h"<<prime[i]<<endl;
        if(prime[i]== true){
            for(int j=i*2; j<n;j+=j){
                prime[j] = false;
            }
        }
    }
    for(int p=1;p<n;p++){
        if(prime[p]== true){
            cout << p<<" ";
        }
    }
}