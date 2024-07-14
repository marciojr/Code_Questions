#include <iostream>

using namespace std;

typedef int Integer;

Integer main ()
{
	string word;
	cin >> word;

    Integer count = 1;
    char oldElem = word[0];

    for(Integer i = 1; i < word.length(); i++){
       
       if (word[i] == oldElem) {
            count++;
            if (count == 7) {
               break;
            } 
       } else {
           count = 1;
           oldElem = word[i];
       }
    }

    if (count != 7){
        cout << "NO" << endl;
    } else {
        cout <<  "YES" << endl;
    }
}
