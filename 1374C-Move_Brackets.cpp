#include<bits/stdc++.h>
using namespace std;
bool regular(string& s, int i, int n)
{
    for(int j = i; j < n; j++)
    {
        if(s[j] == ')')
        {
            s[i] = '0';
            s[j] = '0';
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
    int n;cin >> n;
    while(n--)
    {
        int nu,p = 0;cin >> nu;
        string s;cin >> s;
        for(int i = 0; i < nu; i++)
        {
            if(s[i] == '(')
            {
                if(!regular(s,i,nu))
                {
                    s[i] = '1';
                    p++;
                }
            }
        }
        cout << p << endl;
    }
}
