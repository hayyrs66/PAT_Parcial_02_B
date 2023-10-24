#pragma once

#include <vector>

using namespace std;

class MinStack
{
private:

	vector<int> stack;
	vector<int> minStack;

public:
	MinStack();

	void push(int value);

	void pop();

	int top();

	int getMin();
};

