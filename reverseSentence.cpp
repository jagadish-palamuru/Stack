#include<iostream>
#include<stack>
using namespace std;

void reverse(string s)
{
    stack<string> st;
    string t="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] == ' ')
        {
             st.push(t);
             t="";
            
        }
        else 
            t+=s[i];
    }
    st.push(t);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}
int main()
{
    reverse("this is a sentence");
    return 0;
}