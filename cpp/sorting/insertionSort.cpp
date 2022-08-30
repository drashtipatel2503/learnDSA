#include <iostream>
//#include <>

using namespace std;
int main(){
    int a[] = { 1,4,2,3};

    for(int i=1; i< sizeof(a); i++){
        int j=i;
        int k=a[i];
        while (j>=0 && a[j]>a[i]){
            a[j+1] =a[j];
            j-=1;
        }
        //cout << j << " ffffff  " << i<< a[i]<< a[j];
        a[j+1] =k;
    }
    cout <<" this  ";
    for(int p=0;p<sizeof(a); p++){
        cout << a[p] <<" ";
    }
}