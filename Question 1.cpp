#include <iostream>
using namespace std;

//Constructing a node
struct node{
	int data;
	node *next;
};

//Defining a stack
class stack{
private:
	node *head;
public:
	//Constructor
	stack() {
		head = NULL;
	}
	//Stack operations
	void push(int value);
	void pop();
	void display();
};

//Defining a queue
class queue{
private:
	node *head, *tail;
public:
	//Constructor
	queue() {
		head = NULL;
		tail = NULL;
	}
	//Queue operations
	void enqueue(int value);
	void dequeue();
	void display();
};

//push() function to insert an element into a stack
void stack::push(int value) {
	//Making a new node and assigning values
	node *temp = new node;
	temp->data = value;
	temp->next = head;
	//Making temp the first element
	head = temp;
}

//enqueue() function to insert an element into a queue
void queue::enqueue(int value) {
	//Creating a new node and assigning values
	node *temp = new node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
	}
	//Adding the new node to the end of the queue
	else {
		tail->next = temp;
	}
	tail = temp;
}

//pop() function to remove an element from a stack
void stack::pop() {
	//If the stack is empty...
	if (head == NULL) {
		cout << "There are no elements in the stack to pop.\n";
	}
	else {
		node *temp = head;
		//We change head to the second node
		head = head->next;
		//Remove the link from the first to the second node
		temp->next = NULL;
		delete temp;
	}
}

//dequeue() function to remove an element from a queue
void queue::dequeue() {
	//If the queue is empty...
	if (head == NULL) {
		cout << "The queue is already empty.\n";
	}
	else {
		node *temp = head;
		//Change head to the second node
		head = head->next;
		//Delete the link between the first and second node
		temp->next = NULL;
		delete temp;
	}
}

//Function to display the elements of a stack
void stack::display() {
	//If the stack is empty...
	if (head == NULL) {
		cout << "The stack is empty and there are no elements to show.";
	}
	else {
		node *temp = head;
		//while loop which prints out the elements one after the other
		while (temp != NULL) {
			//Print the data stored in the current node
			cout << temp->data << " ";
			//Move temp to the next node
			temp = temp->next;
		}
	}
	cout << endl;
}

//Function to display the elements of a queue
void queue::display() {
	//If the queue is empty...
	if (head == NULL) {
		cout << "The queue is empty and there are no elements to show.";
	}
	else {
		node *temp = head;
		//while loop which prints out the elements one after the other
		while (temp != NULL) {
			//Print the data stored in the current node
			cout << temp->data << " ";
			//Move temp to the next node
			temp = temp->next;
		}
	}
	cout << endl;
}

int main() {
	queue firstOne;
	firstOne.enqueue(4);
	firstOne.enqueue(5);
	firstOne.enqueue(6);
	firstOne.display();
	firstOne.dequeue();
	firstOne.display();
	return 0;
}

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
