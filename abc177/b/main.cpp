#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int tl = T.length(), ans=tl, diff=0;
    // for (int i = 0; i < tl; i++)
    // {
    //     if (ans!=tl)
    //     {
    //         break;
    //     }
        

    //     for (int j = 0; j < i+1; j++)
    //     {
    //         string u = "";
    //         for (int k = j; k < tl-i+j; k++)
    //         {
    //             u+=T[k];
    //         }
    //         auto r = search(S.begin() + j, S.end()-i+j, u.begin(), u.end());
    //         // cout << u << " " << i << " " <<j << endl;
    //         if (r != S.end()-i+j)
    //         {
    //             ans = i;
    //             break;
    //         }
            
    //         }
        
    // }



    // cout << ans << endl;
    for (int i = 0; i <= S.length()-T.length(); i++)
    {
        diff = 0;
        for (int j = 0; j < T.length(); j++)
        {
            if (S[i+j]!=T[i])
            {
                diff++;
            }
            
        }
        ans = min(ans, diff);
        
    }
    cout << ans << endl;
    
    return 0;
}