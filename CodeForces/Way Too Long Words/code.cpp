#include <iostream>

using namespace std;

typedef int Integer;

Integer main ()
{
	Integer count;
	cin >> count;
	
    for(Integer i = 0; i < count; i++){

        string input;
        cin >> input;

        Integer inputLength = input.length();

        if (inputLength <= 10){
            cout << input << endl;
        } else {
            char first = input.front();
            char back = input.back();
    
            cout << first << (inputLength - 2) << back << endl;
        }
    }
}