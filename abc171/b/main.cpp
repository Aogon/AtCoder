#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, sum=0;
    cin >> N >> K;
    vector<int> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p.at(i);
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < K; i++)
    {
        sum = sum + p.at(i);
    }
    cout << sum << endl;
    
    return 0;
}
