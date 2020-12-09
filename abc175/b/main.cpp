#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum=0;
    cin >> N;
    long long int L[N];
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j!=i)
            {
                for (int k = 0; k < N; k++)
                {
                    if (k!=i&&k!=j)
                    {
                        if (L[i]!=L[j] && L[i]!=L[k] && L[j]!=L[k] && (llabs(L[i]-L[j])<L[k]) && (L[k]<L[i]+L[j]))
                        {
                            sum++;
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    cout << sum/6 << endl;
    
    
    return 0;
}
