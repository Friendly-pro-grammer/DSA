class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positives,negatives;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                positives.push_back(nums[i]);
            }
            else negatives.push_back(nums[i]);
        }
        int arrIndex=0,posIndex=0,negIndex=0;
        while(posIndex<positives.size()&&negIndex<negatives.size()){
            if(arrIndex%2!=0){
                nums[arrIndex++]=positives[posIndex++];
            }
            else nums[arrIndex++]=negatives[negIndex++];
        }
        while(posIndex<positives.size()){
            nums[arrIndex++]=positives[posIndex++];
        }
        while(negIndex<negatives.size()){
            nums[arrIndex++]=negatives[negIndex++];
        }return nums;
    }
};
//simply created two vector and stores positves and negatives separately
//then overwrited the current array accordingly to their indexes
//space and time complexity both are O(n);

