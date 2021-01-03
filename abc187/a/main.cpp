#include <bits/stdc++.h>
using namespace std;

int main() {
    string as, bs;
    cin >> as >> bs;
    int sum1=0, sum2=0;
    for (int i = 0; i < 3; i++)
    {
        sum1+=as[i] - '0';
    }
    for (int i = 0; i < 3; i++)
    {
        sum2+=bs[i] - '0';
    }
    cout << max(sum1, sum2) << endl;
    
    return 0;
}
