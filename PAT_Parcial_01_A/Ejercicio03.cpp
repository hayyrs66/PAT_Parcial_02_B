#include "Ejercicio03.h"

MinStack::MinStack()
{
}

void MinStack::push(int value)
{
	stack.push_back(value);
	if (minStack.empty() || value <= minStack.back()) {
		minStack.push_back(value); 
	}
}

void MinStack::pop()
{
	if (stack.back() == minStack.back()) {
		minStack.pop_back();
	}
	stack.pop_back();
}

int MinStack::top()
{
	return stack.back();
}

int MinStack::getMin()
{
	return minStack.back();
}
