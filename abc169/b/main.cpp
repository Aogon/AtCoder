#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long int a[N], p=1;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            p = 0;
            break;
        }
        
    }
    if (p!=0)
    {
        for (int i = 0; i < N; i++)
        {
        
            if (a[i]>((long long int)1e18)/p)
            {
                p = -1;
                break;
            }
        
            p = p * a[i];
        }
    }
    
    
    
    cout << p << endl;
    
    return 0;
}
