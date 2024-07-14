#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

typedef int Integer;

Integer main ()
{

    vector<int> nums1{1,2,3,3};
    vector<int> nums2{1,1,2,2};

    unordered_set<int> res(nums1.size());
    unordered_set<int> res2(nums1.size());
    
    vector<int> result1;
    vector<int> result2;

    for (int i = 0; i < nums1.size(); i++) {
        res.insert(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++) {
        res2.insert(nums2[i]);
    }

    for (auto x : res) {
        if (res2.find(x) == res2.end())
            result1.push_back(x);
    }

    for (auto x : res2) {
        if (res.find(x) == res.end())
            result2.push_back(x);
    }

    return 0;
}
