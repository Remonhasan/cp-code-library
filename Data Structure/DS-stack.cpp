/*
  Author: Remon Hasan
  University : University of Asia Pacific
  Data Structure Algorithm : Stack
*/
#include <iostream>
using namespace std;
#define size 3
int brain[size];
int top = -1;

void push(int x){
	if(top<size-1){
		top++;
		brain[top] = x;
		cout<<"Added Item:"<<x<<endl;
	}else{
		cout<<"no space for adding new item"<<endl;
	}

}

int peek(){
	if(top>=0){
		return brain[top];
	}
	cout<<"Empty stack"<<endl;
	return -1;
}

int pop ()
{
	if(top>=0){
		int value = brain[top];
		top--;
		return value;
	}
	return -1;
}

int main() {
	peek();
	push(10);
	push(20);
	push(30);
	cout<<"Poped item is: "<<pop()<<endl;
	push(40);
	cout<<"The top item is: "<<peek()<<endl;
	return 0;
}