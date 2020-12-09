#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, count=0;
    long long int K;
    int x = 0;
    int y = 0;
    cin >> N >> K;
    vector<vector<long long int>> T(N, vector<long long int>(N));
    
    vector<int> B(N-1);
    long long int t;
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) {
            cin >> T.at(i).at(j);
        }
    }
    for (int i = 1; i <= N - 1; i++)
    {
        B.at(i-1) = i;
    }
    

    do{
        t = T.at(0).at(B.at(0));
        for (int i = 0; i < N-2; i++)
        {
            t += T.at(B.at(i)).at(B.at(i+1));
        }
        t += T.at(B.at(N-2)).at(0);
        if (t == K)
        {
            count++;
            t = 0;
        }else
        {
            t = 0;
        }
        
        
    }while (next_permutation(B.begin(), B.end()));

    
    cout << count << endl;
  
    return 0;
}