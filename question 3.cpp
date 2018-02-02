#include <iostream>
using namespace std;

//Stack using array
class stack{
private:
	int array[1000];
	int top;
public:
	//Constructor
	stack() {
		top = -1;
	}
	//Operations on the stack
	void push(int value);
	void pop();
	void display();
};

//push() function to add an element into the stack
void stack::push(int value) {
	//If the stack is full...
	if (top == 999) {
		cout << "The stack is full and no more elements can be added.\n";
	}
	else {
		top++;
		//Add value to the array
		array[top] = value;
	}
}

//pop() function to remove an element from the stack
void stack::pop() {
	//If the stack is empty...
	if (top == -1) {
		cout << "The stack is empty and there are no elements to delete.\n";
	}
	else {
		array[top] = array[top + 1];
		top--;
	}
}

//display() function to display the elements of the stack
void stack::display() {
	//If the stack is empty...
	if (top == -1) {
		cout << "The stack is empty.";
	}
	else {
		for (int i = top; i >= 0; i--) {
			cout << array[i] << " ";
		}
	}
	cout << endl;
}

int main() {
	stack newStack;
	newStack.push(5);
	newStack.push(3);
	newStack.push(6);
	newStack.display();
	newStack.pop();
	newStack.pop();
	newStack.display();
	
	return 0;
}
