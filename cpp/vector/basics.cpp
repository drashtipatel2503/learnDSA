#include <iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> a={1,2,3,4,5};

    a.push_back(6);


    cout << "Output of begin and end: ";
    for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";
 
 
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = a.rbegin(); ir != a.rend(); ++ir)
        cout << *ir << " ";

}