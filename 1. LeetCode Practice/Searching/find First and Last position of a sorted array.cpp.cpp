#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = firstOccurance(nums, target);
        int l = lastOccurance(nums, target);

        return {f,l};

    }
     int firstOccurance(vector<int> arr, int x){
                int l=0;
                int r=arr.size()-1;
                int ans=-1;

                while(l<=r){
                    int mid=(l+r)/2;

                    if(arr[mid]==x){
                        //possible ans
                        ans=mid;
                        r=mid-1;

                    }
                    else if(arr[mid]>x){
                        r=mid-1;
                    }
                    else{
                        l=mid+1;
                    }
                }
            return ans;
     }


     int lastOccurance(vector<int> arr, int x){
        int l=0;
        int r=arr.size()-1;
        int ans=-1;

        while(l<=r){
            int mid=(l+r)/2;

            if(arr[mid]==x){
                //possible ans
                ans=mid;
                l=mid+1;

            }
            else if(arr[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
       return ans;
     }

};

int main(){
    Solution s;
    vector<int>nums = {5,7,7,8,8,10};
    int target=8;

   vector<int> range = s.searchRange(nums, target);

   for(auto x : range)
    cout<< x<<" ";
   cout<<endl;


return 0;
}
