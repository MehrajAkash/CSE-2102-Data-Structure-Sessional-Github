class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int sz = nums.size();
        int left=0;
        int right=sz-1;
        int mid;
        while(left<=right){
             mid = (left+right)/2;
           /// cout<<mid<<endl;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;
       /** if(nums[mid]==target) return mid;
        else if(target < nums[mid] && mid==0) return 0;
        else if(target > nums[mid]) return mid+1;
        else if(target < nums[mid] && target > nums[mid-1]) return mid;
        else return mid-1; **/
    }
};
/**
Given a sorted array of distinct integers and a target value, return the index if
 the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4


Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
**/
