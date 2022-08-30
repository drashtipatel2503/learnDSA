#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> q;

    q.push(2);
    q.push(4);
    q.push(3);


    cout<< q.size();
    // cout << q.top();

    while (!q.empty()){
        cout << q.top() << "  ";
        q.pop();
    }
}