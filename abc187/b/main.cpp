#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n], ans=0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                break;
            }else
            {
                if (x[i]-x[j] == 0)
                {
                    break;
                }else if(-1. <= (double)(y[i]-y[j])/(double)(x[i]-x[j])&&(double)(y[i]-y[j])/(double)(x[i]-x[j]) <= 1.)
                {
                    ans++;
                }
                
                
            }
            
            
        }
        
    }
    cout << ans << endl;
    
    
    return 0;
}
