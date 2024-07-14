#include <bits/stdc++.h>
 
using namespace std;
 
typedef int Integer;
 
Integer main ()
{
	long long n, k;
	cin >> n;
    cin >> k;

    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}