#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, m=100, sum=0;
    cin >> h >> w;
    int a[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
            m = min(m, a[i][j]);
        }
        
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            sum+=a[i][j]-m;
        }
        
    }
    cout << sum << endl;
    
    return 0;
}
