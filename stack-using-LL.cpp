#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class Stack
{
public:
// can have unlimited size of stack
    ListNode *head = NULL;
    void push(int val)
    {
        ListNode *node = new ListNode(val);
        if (head == NULL)
        {
            head = node;
            return;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        if (head->next == NULL)
        {
            head = NULL;
            return;
        }
        ListNode *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    bool isEmpty()
    {
        if (head != NULL)
            return false;
        return true;
    }
    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp->val;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.isEmpty();
    // cout<<s.peek();
}