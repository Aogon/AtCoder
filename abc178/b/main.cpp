#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, c, d;
    long long int x;
    cin >> a >> b >> c >> d;
    x = max(max(a * c, a * d), max(b * c, b * d));
    cout << x << endl;
    return 0;
}