#include <bits/stdc++.h>
using namespace std;

int main() {

  int N[17], M[17];
  for(int i=0; i<17; i++){
    N[i]=0;
    M[i]=0;
  }

  std::string str;
  cin >> str;
  const char* cstr = str.c_str();
  for(int i=0; i<str.length(); i++){
    N[i]=(int)(cstr[i] - '0');
    M[i]=N[i]%3;
    cout << N[i]<< endl;
  }
  return 0;
}

