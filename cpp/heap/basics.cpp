// declaration, make_heap,is_heap, is_heap_until, sort_heap, push_heap, pop_heap;

#include <iostream>
#include <bits/stdc++.h>// to use vector//
using namespace std;

 int main(){
    vector<int> a =  {1,5,2,3,4};

    make_heap(a.begin(), a.end());

    for(int &x : a)
        cout << x<< " ";

    cout << endl;

    a.push_back(5);//to add element to vector;

    push_heap(a.begin(), a.end()); // arrange element in heap;

    cout << a.front(); // get largest element as it is max heap;

    pop_heap(a.begin(), a.end());//to delete maxelement;

    a.pop_back();
    
    cout << a.front();

    sort_heap(a.begin(), a.end()); // to sort heap

    cout << "The heap elements after sorting are : ";
    for (int &x : a) 
       cout << x << " ";
      
    return 0;






 }