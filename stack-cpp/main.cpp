
#include<iostream>
using namespace std;
#include"STACK.h"
#include "test.h"



int main(int argc, char* argv[]) {

	int arr[5] = { 5, 6, 7 };
	int len = sizeof(arr) / sizeof(*arr);

	try {
		testSTACK ss;
		ss.starTest();
	}
	catch (Exception e) {
		cout << e.msg << endl;
	}


	return EXIT_SUCCESS;
}


/*
STACK<int, 5> stack = 1;
		stack.push(2);
		stack.removeAll();
		stack.push(3);
		stack.push(4);

		print(stack);


//STACK<int, 5> _stack = arr;
		//print(_stack);
		STACK<int, 5> _stack = 1;
		_stack.push(2);
		_stack.push(3);

		int poped = _stack.pop();
		poped = _stack.pop();
		poped = _stack.pop();
		poped = _stack.pop();
		poped = _stack.pop();
		cout << "poped = " << poped << endl;
		_stack.push(2);
		_stack.push(3);
		print(_stack);
*/