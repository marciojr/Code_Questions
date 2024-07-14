#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int Integer;

Integer main ()
{
	Integer count;
	cin >> count;

    vector<int> vect(count, 1);

    for (Integer i = 0; i < count; i++) {
        Integer value;
        cin >> value;

        vect[i] = value;
    }

    sort(vect.begin(), vect.end());

    cout << vect[0] << endl;

    for (Integer i = 1; i < count; i++)
    {
        
        cout << " " << vect[i] <<  endl;
    
    }
    
}