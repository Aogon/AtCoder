#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, T, Nc;
    int M;
    cin >> N >> M >> T;
    Nc = N;
    long long int A[M], B[M];
    bool ans=true;
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < M; i++)
    {
        if (i == 0)
        {
            Nc = Nc - A[i];
        }else
        {
            Nc = Nc - (A[i] - B[i-1]);
        }
        
        if (Nc <= 0)
        {
            ans = false;
            break;
        }

        Nc = min(Nc + B[i] - A[i], N);
    }

    Nc = Nc - (T - B[M-1]);

    if (Nc <= 0)
    {
        ans = false;
    }

    if (ans)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    
    
    
    
    
    return 0;
}
