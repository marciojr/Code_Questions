#include <iostream>
#include <vector>

using namespace std;

typedef int Integer;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* DAC(vector<int> vec, int s, int e){

    if (s == e)
        return NULL;
    
    int mid = s + ((e-s)/2);
    
    TreeNode* tree = new TreeNode(vec[mid]);
    tree->left = DAC(vec, s, mid);
    tree->right = DAC(vec, mid + 1, e);

    return tree;
}

TreeNode* sortedListToBST(ListNode* head) {

        vector<int> vec;
    
        while(head != NULL) {
            vec.push_back(head->val);
            head = head->next;
        }

        return DAC(vec, 0, vec.size());
    }

Integer main ()
{
	ListNode* head = new ListNode(-10, new ListNode(-3, new ListNode(0, new ListNode(5, new ListNode(9, NULL)))));

    TreeNode* tree = sortedListToBST(head);

    return 0;
}