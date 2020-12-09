#include <bits/stdc++.h>
using namespace std;

int main() {
    double Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double x;
    x = Sx + Sy*(Gx-Sx)/(Gy+Sy);
    cout <<std::fixed << std::setprecision(10)<< x;
  return 0;
}
