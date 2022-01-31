#include<iostream>
using namespace std;

#define n 10
class stack
{
    int top;
    int* ar;

    public:
        stack()
        {
            top=-1;
            ar=new int[n];
        }

        void push(int x)
        {
            if(top==n-1)
                cout<<"overflow";
            ar[++top]=x;
        }
        void pop()
        {
            if(top==-1)
                cout<<"Underflow";
            top--;
        }
        int Top()
        {
            if(top==-1)
                cout<<"Underflow";
            return ar[top];
        }
        bool empty()
        {
            return top==-1;
        }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(6);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    cout<<s.empty()<<endl;    
    return 0;
}