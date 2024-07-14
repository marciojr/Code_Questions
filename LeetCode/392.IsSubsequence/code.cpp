#include <iostream>
#include <unordered_map>

using namespace std;

typedef int Integer;

bool isSubsequence(string s, string t) {

    int lastPos = 0;
    for(int i = 0; i < s.size(); i++) {
        int index = t.find(s.at(i), lastPos);
        if(index == -1)
            return false;
        else
            lastPos = index+1;
    }

    return true;
}

Integer main ()
{
	string s;
	cin >> s;

    string t;
	cin >> t;

    bool _isSubsequence = isSubsequence(s, t);
    char result = _isSubsequence ? 'T' : 'F';
    cout << result << endl;

    return 0;
}