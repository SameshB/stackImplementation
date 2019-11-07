#include <iostream>
#include "stack.h"

Stack::Stack(){ 
	topPos=-1; 
}

Stack::~Stack(){
}

bool Stack::isFull(){
	return topPos>=MAX_STACK_SIZE-1;
}

bool Stack::isEmpty(){
	return topPos<0;
}

bool Stack::push(int element){
	if(!isFull()){
		topPos++;
		elements[topPos]=element;
		return true;
	}
	else{
		std::cout<<"Cannot push "<<element<<",stack overflow!";
		return false;
	}
}

int Stack::pop(){
	if(!isEmpty()){
		int val = elements[topPos];
		topPos--;
		return val;
	}
	else{
		return -1;
	}
}

int Stack::top(){
	if(!isEmpty()){
		return elements[topPos];
	}
	else{
		return -1;
	}
}

int main(){
	Stack s1;
	s1.push(5);
	s1.push(2);
	s1.push(12);
	s1.push(4);
	
	std::cout << s1.pop();
}
