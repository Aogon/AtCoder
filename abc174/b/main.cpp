#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum=0;
    long long int D;
    cin >> N >> D;
    long long int X[N], Y[N];
    for(int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
        if (X[i] * X[i] + Y[i] * Y[i] <= D * D)
        {
            sum++;
        }
        
    }
    for (int i = 0; i <N ; i++)
    {
        /* code */
    }
    
    cout << sum << endl;
    
    
    return 0;
}
