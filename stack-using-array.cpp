#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int size; // can have limited size of stack
    int top;
    int *arr;
    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        arr = new int[size];
    }
    void push(int val)
    {
        if (top >= size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top <= -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if (top <= -1)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        if (top >= 5)
        {
            cout << "Stack overflow" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if (top <= -1)
            return true;
        return false;
    }
    void print(){
        for(int i=0;i<size;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Stack s(5);
    s.push(2);
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(4);
    s.print();

    // sort
    
    
    return 0;
}