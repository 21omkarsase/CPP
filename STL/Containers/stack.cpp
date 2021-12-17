#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    if (!st.empty())
    {
        st.pop();
    }
    cout << st.empty() << endl;
    cout << st.top() << endl;
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        cout << "popped elemnet is: " << temp << endl;
    }
    return 0;
}