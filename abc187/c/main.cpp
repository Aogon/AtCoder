#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    string s[n], v="";
    vector<string> u;
    bool flag = false;
    
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i][0] != '!'){
            u.push_back(s[i]);
        }else
        {
            s[i].erase(s[i].begin());
            v+= s[i] + " ";
        }
        
    }
    
    for (string x : u)
    {

        
        if (v.find(x+" ")!=(string::npos))
            {
                flag = true;
                cout << x << endl;
                break;
            }
        
        
        
    }
    
    
    

    if (!flag)
    {
        cout << "satisfiable" << endl;
    }
    
    
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i][0] != '!')
    //     {
    //         for (int j = i+1; j < n; j++)
    //         {
                
    //             t = "!" + s[i];
    //             if (t == s[j])
    //             {
    //                 cout << s[i] << endl;
    //                 flag = true;
    //                 break;
    //             }
                
    //         }
    //         if (flag)
    //         {
    //             break;
    //         }
            
            
    //     }else{
    //         for (int j = i+1; j < n; j++)
    //         {
    //             t = s[i];
    //             t.erase(t.begin());
    //             if (t == s[j])
    //             {
    //                 cout << t << endl;
    //                 flag = true;
    //                 break;
    //             }
                
    //         }
    //         if (flag)
    //         {
    //             break;
    //         }
    //     }
        
    // }
    // if(!flag){
    //     cout << "satisfiable" << endl;
    // }
    

    
    return 0;
}
