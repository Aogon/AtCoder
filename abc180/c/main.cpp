#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    vector<long long int> a;
    cin >> n;
    
    if ((long long int)sqrt(n) * (long long int)sqrt(n) == n)
    {
        for (int i = 1; i < (long long int)sqrt(n); i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
                a.push_back(n/i);
            }
            
        }
        a.push_back((long long int)sqrt(n));
    }else
    {
        for (int i = 1; i <= (long long int)sqrt(n); i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
                a.push_back(n/i);
            }
            
        }
    }
    
    
    sort(a.begin(), a.end());
    for (int i = 0; i < (long long int) a.size(); i++)
    {
        cout << a[i] << endl;
    }
    
    
    return 0;
}
