#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, c, k, sum=0;
    cin >> a >> b >> c >> k;
    if (k <= a)
    {
        sum = k;
    }else
    {
        if (k <= a+b)
        {
            sum = a;
        }else
        {
            sum = a - (k - a - b);
        }
        
        
    }
    cout << sum << endl;
    
    
    return 0;
}
