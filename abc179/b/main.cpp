#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, count=0;
    cin >> N;
    int D[N][2];
    bool flag = false;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> D[i][j];
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        if(D[i][0] == D[i][1]&&count<2){
            count++;
        }else if(D[i][0] == D[i][1]&&count==2){
            flag = true;
            break;
        }else
        {
            count = 0;
        }
        
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
    return 0;
}