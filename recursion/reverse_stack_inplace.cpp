#include <bits/stdc++.h>
using namespace std;

void insertatbootom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int top = st.top();
    st.pop();
    insertatbootom(st, element);
    st.push(top);
}
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
    insertatbootom(st,top);
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