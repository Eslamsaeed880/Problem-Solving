#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
    stack<char>st;
    string s;cin >> s;
    st.push(s[0]);
    int p = 0;
    for(int i = 1; i < s.length(); i++)
    {
        if(!st.empty() && st.top() == '(' && s[i] == ')')
        {
            st.pop();
            p++;
        }
        else st.push(s[i]);
    }
    cout << p * 2;
}
