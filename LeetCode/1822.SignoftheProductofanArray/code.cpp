#include <iostream>
#include <vector>

using namespace std;

typedef int Integer;

Integer main ()
{

    vector<int> nums{-1,-2,-3,-4,3,2,1};
   
    int result = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
                result = result*(-1);
        }

        return result;
}
