class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> hash;
        for(int i = 0; i < nums.size(); i++){
            int sub = target - nums.at(i);
            for(int j = i + 1; j < nums.size(); j++){
                if(nums.at(j) == sub){
                    hash.push_back(i);
                    hash.push_back(j);
                    break;
                }
            }
        }
        return hash;
    }
};
