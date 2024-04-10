/*
    STL
*/
// #include <iostream>
// #include <queue>
// using namespace std;
// int main (){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     cout << q.size() <<endl;
//     cout << q.empty() <<endl;
//     cout << q.front() <<endl;
//     cout << q.back() <<endl;
// }

/*
    implementation using array


#include <iostream>
using namespace std;
int n;
class queue
{
public:
    int *arr;
    int front;
    int back;
    int size;
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        back = -1;
    }
    void push(int data)
    {
        if (front == -1)
        {
            front++;
        }
        if (back == size - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = data;
    }
    void pop()
    {
        if (front > back || front == -1)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front > back || front == -1)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
    int length()
    {
        return back + 1;
    }
};
int main()
{
    queue q(10);
    q.push(2);
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    cout << q.isEmpty() << endl;
    cout << q.length() << endl;
}


*/

/*

queue implementation using LinkedList

*/

#include <iostream>
using namespace std;

class ListNode
{
public:
    ListNode *next;
    ListNode *pre;
    int data;
    ListNode(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class queue
{
public:
    ListNode *front;
    ListNode *back;
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void push(int data)
    {
        ListNode *list = new ListNode(data);
        if (front == NULL)
        {
            front = list;
            back = list;
            return;
        }
        back->next = list;
        back = list;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        ListNode *dnode = front;
        front = front->next;
        delete dnode;
    }
    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        return front->data;
    }
    int size()
    {
        ListNode *x = front;
        int ans = 0;
        while (x != NULL) 
        {
            ans++;
            x = x->next;
        }
        return ans;
    }
};

int main()
{
    //   all function take O(1) time except size function
    queue q;
    cout << q.size() << endl;
    q.push(3);
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(5);
    cout << q.size() << endl;
    cout << q.isEmpty() << endl;
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.isEmpty() << endl;
    cout << q.size() << endl;
}