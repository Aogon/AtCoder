#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long int K;
    int x = 0;
    int y = 0;
    cin >> N >> K;
    vector<vector<long long int>> T(N, vector<long long int>(N));
    
    vector<int> B(3);
    int t;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> T.at(i).at(j);
        }
    }
    if(N == 2){
        t = T.at(0).at(1) + T.at(1).at(0);
        if(t == K){
            x++;
        }
        cout << x << endl;
    }

    if(N == 3){
        t = T.at(0).at(1) + T.at(1).at(2) + T.at(2).at(0);
        if(t == K){
            x++;
        }
        t = T.at(0).at(2) + T.at(2).at(1) + T.at(1).at(0);
        cout << x << endl;
    }3

    if(N == 4){
        vector<int> A = {1, 2, 3};
        vector<int> X = {1, 2, 3};
        vector<int> B(2);
        for(int i = 0; i < 3; i++){
            
        }
        t = T.at(0).at(X.at(0)) + T.at(X.at(0)).at(X.at(1)) + T.at(X.at(1)).at(X.at(2)) + T.at(X.at(2)).at(0);
        if(t == K){
            x++;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
            if(i != j){
                B.at(i) = A.at(j);
                B.at(j) = A.at (i);
                t = T.at(0).at(A.at(0)) + T.at(A.at(0)).at(A.at(1)) + T.at(A.at(0)).at(0);
                y++;
            }
            }
        }
        x = y / 2;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++) {
                    if(i != j && i != k && j !=  k) {
                        B.at(i) = A.at(j);
                        B.at(j) = A.at (i);
                        t = T.at(0).at(A.at(0)) + T.at(A.at(0)).at(A.at(1)) + T.at(A.at(0)).at(0);
                        y++;
                    }
                }
            }
        }
    }

  
    return 0;
}