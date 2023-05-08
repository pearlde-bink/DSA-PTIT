#include <iostream>
using namespace std;

int currentSize = -1;
const int maxSize = 100;
int stack[maxSize];

bool isEmpty(){ //ktra stack rong
	return (currentSize == -1);
}

bool isFull(){ //ktra stack day hay chua
	return (currentSize == maxSize);
}

void push(int data){ //them du lieu vao stack
	if(!isFull()){
		currentSize++;
		stack[currentSize] = data;
	}
	else cout << "Stack full!" << endl;
}

int top(){ //lay phan tu top nhung khong xoa
	if(!isEmpty()){
		int data = stack[currentSize];
		return data;
	} 
	else cout << "Stack empty!" << endl;
}

int pop(){ //lay phan tu top va xoa khoi stack
	if(!isEmpty()){
		int data = stack[currentSize];
		currentSize--;
		return data;
	}
	else cout << "Stack empty!" << endl;
}

int main(){
	push(100);
	push(-255);
	push(25);
	cout << "Top : " << peek() << endl;
	pop();
	cout << "Top: " << top() << endl;
	while(!isEmpty()){
		int data = pop();
		cout << data << " <-- ";
	}
	cout << endl;
}
