#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
    int n,m;
    cin >> n >> m;
    deque<int>arr(n);
    vector<int>arr2(m);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == arr2[i])
            {
                cout << j + 1 << " ";
                int temp = arr[j];
                arr.erase(arr.begin()+j);
                arr.push_front(temp);
                break;
            }
        }
    }
}
