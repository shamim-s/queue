#include<bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
        list <int> l;

        void push(int val)
        {
            l.push_back(val);
        }

        void pop()
        {
            l.pop_front();
        }

        int top()
        {
            return l.front();
        }

        int size()
        {
            return l.size();
        }

        bool empty()
        {
            return l.empty();
        }
};

int main()
{
    myQueue newQ;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        newQ.push(x);
    }
    
    while(!newQ.empty())
    {
        cout<<newQ.top()<<endl;
        newQ.pop();
    }
    
    return 0;
}