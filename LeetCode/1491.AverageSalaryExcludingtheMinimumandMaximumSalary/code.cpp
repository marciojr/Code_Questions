#include <iostream>
#include <vector>

using namespace std;

typedef int Integer;

Integer main ()
{

    vector<int> salary{48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000};

    int max = salary[0];
    int min = salary[0];
    double result = salary[0];
    int n = salary.size();

    for (int i = 1; i < n; i++) {

        if (salary[i] > max){
            max = salary[i];
        } else if (salary[i] < min){
            min = salary[i];
        }

        result += salary[i];
    }

    result -= min;
    result -= max;
    result = result / (n-2);

    cout << result << endl;

    return 0;
}