/* declaration,push,pop,top functions */

#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(1);
	stack.push(2);
	
	stack.pop();
	
	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
