
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums, nums.size());
        return nums;
    }

    void swapp(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void heapify(vector<int>&nums, int n, int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;

        if(left<n && nums[left] > nums[largest] ){
            largest = left;
        }
        if(right<n && nums[right] > nums[largest] ){
            largest = right;
        }

        if( largest !=i ){
            swapp(&nums[i], &nums[largest]);
            heapify( nums, n, largest );
        }
    }

    void heapSort(vector<int>&nums, int n){
        for(int i = n/2 -1; i>=0; i-- ){
            heapify(nums, n, i);
        }

        for(int i=n-1; i>=0; i--){
            swapp(&nums[0], &nums[i]);
            heapify(nums, i, 0);
        }
    }
};
