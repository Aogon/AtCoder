#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  long A[N], B[N];
  int i;
  long sum = 0;
  for(i=0; i<N; i++){
    cin >> A[i] >> B[i];
    sum = sum + (A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
  }
  
  cout << sum << endl;
}

