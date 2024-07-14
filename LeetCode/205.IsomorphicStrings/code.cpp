#include <iostream>
#include <unordered_map>

using namespace std;

typedef int Integer;

bool isIsomorphic(string s, string t) {

    unordered_map<char, char> map(s.size());
    unordered_map<char, char> map2(s.size());

    for(int i = 0; i < s.size(); i++) {

        char _s = s.at(i);
        char _t = t.at(i);
        bool exist = map.find(_t) !=  map.end();

        if (exist && map.at(_t) != _s) {
            return false;
        }

        exist = map2.find(_s) !=  map2.end();

        if (!exist) {
            map[_t] = _s;
            map2[_s] = _t;
        } else {
            if (map2.at(_s) != _t){
                return false;
            }
        }
    }

    return true;
}

Integer main ()
{
	string s;
	cin >> s;

    string t;
	cin >> t;

    bool _isIsomorphic = isIsomorphic(s, t);
    char result = _isIsomorphic ? 'T' : 'F';
    cout << result << endl;

    return 0;
}