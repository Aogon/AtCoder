#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N], y[N];
    bool ans = false;
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < N; i++)
    {
        if(ans == true){
            break;
        }
        for (int j = 0; j < N; j++)
        {
            if(i == j || ans == true){
                break;
            }
            for (int k = 0; k < N; k++)
            {
                if(k == i || k == j){
                    break;
                }
                if((y[k] - y[i]) * (x[j] - x[i]) == (y[j] - y[i]) * (x[k] - x[i])){
                    ans = true;
                    break;
                }
            }
            
        }
        
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
