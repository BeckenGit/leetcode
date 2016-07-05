#include <stdbool.h>

//Solution: 235. Lowest Common Ancestor of a Binary Search Tree
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p,
                                      struct TreeNode* q);
bool isExistedInTree(struct TreeNode* root, struct TreeNode* p);

//Solution: 206. Reverse Linked List
struct ListNode* reverseList(struct ListNode* head);
struct ListNode* reverseList_R(struct ListNode* head);

//Solution: 217. Contains Duplicate
bool containsDuplicate(int* nums, int numsSize);

//Solution: 169. Majority Element
//int majorityElement(int* nums, int numsSize);

//Solution: 242. Valid Anagram
bool isAnagram(char* s, char* t);

//Solution: 100. Same Tree
bool isSameTree(struct TreeNode* p, struct TreeNode* q);

//Solution: 104. Maximum Depth of Binary Tree
int maxDepth(struct TreeNode *root);

//Solution: 283. Move Zeroes
void moveZeroes(int* nums, int numsSize);

//Solution: 226. Invert Binary Tree
struct TreeNode* invertTree(struct TreeNode* root);

//Solution: 349. Intersection of Two Arrays
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);
int isExisted(int num, int* nums, int numsSize);


//Solution: 350. Intersection of Two Arrays II
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);

//Solution: 237. Delete Node in a Linked List
void deleteNode(struct ListNode* node);
