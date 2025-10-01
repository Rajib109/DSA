#include <bits/stdc++.h>
using namespace std;

void printstack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int top = st.top();
    st.pop();

    reverse(st);
    stack<int> temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(top);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{

    stack<int> st;

    int n;

    cout << "Enter size of stack" << endl;
    cin >> n;

    cout << "Enter stack elements" << endl;
    while (st.size() < n)
    {
        int num;
        cin >> num;
        st.push(num);
    }

    cout << "Initial stack " << endl;
    printstack(st);

    reverse(st);

    cout << "Reversed stack" << endl;
    printstack(st);

    return 0;
}