#include <iostream>
#include <vector>

using namespace std;

typedef int Integer;

Integer main ()
{
	Integer count;
	cin >> count;

    Integer result = 1; 
    vector<int> vect(count, 1);

    for (Integer i = 0; i < count; i++) {
        Integer value;
        cin >> value;

        vect[i] = value;
    }
    
    for(Integer i = 0; i < count; i++){
        Integer aux = 1;

        if (result > count - i)
            break;

        for (Integer j = i + 1; j < count; j++) {

            if (vect[j] >= vect[j-1]) {
                aux++;
                if (aux > result)
                    result = aux;
            } else {
                break;
            }
        }
    }

    cout << result << endl;
}