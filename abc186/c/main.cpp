#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans;
    cin >> n;
    ans = n;
    string ns = to_string(n);
    string xs;
    
    bool seveninten = false, sevenineight = false;
    for (int i = 0; i < n; i++)
    {
        xs = to_string(i+1);
        for (int j = 0; j < (int)xs.size(); j++)
        {
            if (xs[j] == '7')
            {
                seveninten = true;
                break;
            }
            
        }
        if (seveninten)
        {
            ans--;
            seveninten = false;
        }else
        {
            int p=i+1, q=0;
            for (int j = 0; j < 30; j++)
            {
                q = p % 8;
                p = (p - q) / 8;
                if (p == 7)
                {
                    sevenineight = true;
                    break;
                } else if (p <= 6)
                {
                    if (q == 7)
                    {
                        sevenineight = true;
                        break;
                    }
                    break;
                }else{
                    if (q == 7)
                    {
                        sevenineight = true;
                        break;
                    }
                    
                }
                
            }
            if (sevenineight)
            {
                ans--;
                sevenineight = false;
            }
            
        }
        
        
        
    }
    cout << ans << endl;
    
    return 0;/* code */
}
