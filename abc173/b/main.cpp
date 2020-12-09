#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, C[4] = {0, 0, 0, 0};
    cin >> N;
    string S[N];
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        if (S[i] == "AC")
        {
            C[0]++;
        }else if (S[i] == "WA")
        {
            C[1]++;
        }else if (S[i] == "TLE")
        {
            C[2]++;
        }else if (S[i] == "RE")
        {
            C[3]++;
        }
        
        
        
        
    }
    
    cout << "AC x " << C[0] << endl << "WA x " << C[1] << endl << "TLE x " << C[2] << endl << "RE x " << C[3] << endl;
    return 0;
}
