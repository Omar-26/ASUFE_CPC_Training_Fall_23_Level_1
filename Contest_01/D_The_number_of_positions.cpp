#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << el;
}