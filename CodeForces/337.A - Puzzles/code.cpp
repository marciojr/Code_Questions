#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int Integer;

Integer main()
{
    Integer n;
    cin >> n;

    Integer m;
    cin >> m;

    vector<int> vect(m, 1);

    for (Integer i = 0; i < m; i++)
    {
        Integer value;
        cin >> value;

        vect[i] = value;
    }

    sort(vect.begin(), vect.end());

    Integer result = 1000;

    for (Integer i = 0; i + n <= m; i++)
    {
        Integer a_b = (vect[ i + (n - 1)] - vect[i]);
        if (a_b < result) 
            result = a_b;
    }
    
    cout <<  result << endl;

    return 0;
}