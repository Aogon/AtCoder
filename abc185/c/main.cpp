#include <bits/stdc++.h>
using namespace std;


int main() {
    int L, a[11], n=0, m=0, l=0;
    long long int x=1;
    cin >> L;
    for (int i = 0; i < 11; i++)
    {
        a[i] = L - (i + 1);
    }

    // for (int i = 0; i < 11; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    
    
    for (int i = 0; i < 11; i++)
    {
        if (a[i] % 11 == 0)
        {
            a[i] = a[i] / 11;
        }      
    }
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    
    
    for (int i = 0; i < 11; i++)
    {
        if (a[i] % 7 == 0)
        {
            a[i] = a[i] / 7;
            break;
        }      
    }
    
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < 11; i++)
        {
            if (a[i] % 5 == 0)
            {
                a[i] = a[i] / 5;
                n++;
            }
            if(n == 2) {
                break;
            }
            
        }
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    bool flag = false;
    for (int j = 0; j < 10; j++)
    {
        
        for (int i = 0; i < 11; i++)
        {
            if (a[i] % 3 == 0)
            {
                a[i] = a[i] / 3;
                m++;
            }
            if(m == 4){
                flag = true;
                break;
            }
            
        }
        if(flag){
            break;
        }
    }
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    bool flag2 = false;
    for (int j = 0; j < 10; j++)
    {
        
        for (int i = 0; i < 11; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
                l++;
            }
            if(l == 8){
                flag2 = true;
                break;
            }
            
        }
        if(flag2){
            break;
        }
    }
    
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    
    
    
    
    for (int i = 0; i < 11; i++)
    {
        x = x * (long long int)a[i];
    }

    cout << x << endl;
    


    
    
    return 0;
}
