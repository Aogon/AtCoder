#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, p=0, q=0, r=0;
    cin >> N;
    long long int x[N];
    for (long long int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    for (long long int i = 0; i < N; i++)
    {

        p = p + fabs(x[i]);
        q = q + x[i] * x[i]; 
        if(fabs(x[i])>r){
            r = fabs(x[i]);
        }
    }
    cout << p << endl << fixed << setprecision(20)<< sqrt(q)  << endl << r << endl;
    
    return 0;
}