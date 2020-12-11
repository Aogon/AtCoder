#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    int sum = 0, a = 0, b = 0, c = 0, ans=0;
    cin >> N;
    for (int i = 0; i < (int)N.size(); i++)
    {
        sum += N[i] - '0';
        sum = sum % 3;
        if ((N[i] - '0') % 3 == 0)
        {
            a++;
        }else if ((N[i] - '0') % 3 == 1)
        {
            b++;
        }else
        {
            c++;
        }
        
        
        
    }
    
    switch (sum)
    {
    case 0:
        ans = 0;
        
        break;
    
    case 1:
        if (b >= 1)
        {
            if (a + b + c >= 2)
            {
                ans = 1;
            }else
            {
                ans = -1;
            }     
            
        }else
        {
            if (c >= 2)
            {
                if (a + b + c >= 3)
                {
                    ans = 2;
                }else
                {
                    ans = -1;
                }
                
                
            }else
            {
                ans = -1;
            }
            
            
            
        }
        break;
    
    case 2:
        if (c >= 1)
            {
                if (a + b + c >= 2)
                {
                    ans = 1;
                }else
                {
                    ans = -1;
                }     
                
            }else
            {
                if (b >= 2)
                {
                    if (a + b + c >= 3)
                    {
                        ans = 2;
                    }else
                    {
                        ans = -1;
                    }
                    
                    
                }else
                {
                    ans = -1;
                }
                
                
                
            }
            break;

        
        
    
    default:
        break;
    }

    cout << ans << endl;
    
    
    return 0;
}
