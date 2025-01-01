#include<bits/stdc++.h>
using namespace std;
//rotate array by one places
vector<int> rotatearray(vector<int> &arr,int n){
	int temp =arr[0];
	for(int i=1;i<n;i++){
	arr[i-1] = arr[i];
	}
	arr[n-1]=temp;
	return arr;
}
//rotate an array by D places to the right
vector <int> leetcode189(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        if(k==0) return nums;
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
	return nums;
    }
//rotate an array by d places to the left
vector <int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        if(k==0) return nums;
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
	return nums;
    }
int main(){	
	int n,k;
	cin >> n;
	vector <int> nums(n);
	cin >>k;
	for(int i=0;i<n;i++) cin >> nums[i];
//	nums = rotatearray(nums,k);
	nums = leetcode189(nums,k);
//	nums= rotate(nums,k);
	for(int i=0;i<n;i++) cout << nums[i];
	cout << endl;
	return 0;
	}
