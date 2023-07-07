#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;
    Node * prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;

        int sz = 0;

        void push(int val)
        {
            sz++;
            Node* newNode = new Node(val);

            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }

        void pop()
        {
            sz--;
            Node* delNode = head;
            head = head->next;
            head->prev = NULL;
            
            delete delNode;

            if (head == NULL)
            {
                tail = NULL;
            }
            
        }

        int top()
        {
            return head->val;
        }

        int size()
        {
            return sz;
        }

        bool empty()
        {
            if (sz == 0) return true;
            else return false;
        }
};

int main()
{
    myQueue newQueue;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        newQueue.push(x);
    }
    
    while(!newQueue.empty())
    {
        cout<<newQueue.top()<<endl;
        newQueue.pop();
    }
    return 0;
}