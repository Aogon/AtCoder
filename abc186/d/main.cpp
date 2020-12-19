#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> a(n);
    long long int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    if (n % 2 == 0)
    {
        for (int j = 0; j < n/2; j++)
        {
            ans += (a.at(n-1-j) - a.at(j)) * (2 * (n/2-j) - 1);
        }
        
    }else
    {
        for (int j = 0; j < (int)n/2; j++)
        {
            ans += (a.at(n-1-j) - a.at(j)) * (2 * (n/2-j));
        }
        
    }
    cout << ans << endl;
    
    
    

    
    return 0;
}
