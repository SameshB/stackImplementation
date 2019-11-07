#define MAX_STACK_SIZE 3
class Stack{
	public:
		Stack();
		~Stack();
		
		bool push(int element);
		int pop();
		int top();
		bool isEmpty();
		bool isFull();
		
	private:
		int elements[MAX_STACK_SIZE];
		int topPos;
};
