#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
    string pi = "314159265358979323846264338327";
    int nu; cin >> nu;
    while(nu--)
    {
        string s;cin >> s;
        int p = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == pi[i])
                p++;
            else
                break;
        }
        cout << p << endl;
    }
}
