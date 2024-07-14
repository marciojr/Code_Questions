#include <bits/stdc++.h>

using namespace std;

typedef int Integer;

Integer main ()
{
	string word;
	cin >> word;

    for (Integer i = 0; i < word.length(); i++)
    {
        switch(word[i]){
            case 'H':
                cout << "YES" << endl;
                return 0;
            case 'Q':
                cout << "YES" << endl;
                return 0;
            case '9':
                cout << "YES" << endl;
                return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
