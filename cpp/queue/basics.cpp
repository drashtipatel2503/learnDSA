// push,pop,front,back,size,empty, 

#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    cout <<" back" << q.back() << " ";
    while (!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
}
