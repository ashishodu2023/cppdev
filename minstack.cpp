#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class MinStack
{

private:
    stack<int> main_stack;
    stack<int> min_stack;

public:
    MinStack()
    {
    }

    void push(int value)
    {

        main_stack.push(value);

        if (min_stack.empty())
        {

            min_stack.push(value);
        }

        else
        {

            min_stack.push(min(value, min_stack.top()));
        }
    }

    void pop()
    {

        if (!main_stack.empty())
        {

            main_stack.pop();
            min_stack.pop();
        }
    }

    int top()
    {
        return main_stack.top();
    }

    int getMin()
    {
        return min_stack.top();
    }
};

int main()
{
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Current Min: " << minStack.getMin() << endl; // -3
    minStack.pop();
    cout << "Current Top: " << minStack.top() << endl;    // 0
    cout << "Current Min: " << minStack.getMin() << endl; // -2
    return 0;
}
