#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int N;
    long long int X;
    std::string S;
    cin >> N >> X >> S;
    for (long long int i = 0; i < N; i++)
    {
        if(S.at(i) == 'o'){
            X++;
        }else if(S.at(i) == 'x'){
            //if(X > 0){X--;}
            if(X == 0){continue;}
            X--;
            
        }
    }
    cout << X << endl;
  return 0;

}