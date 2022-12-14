class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i = 0; i < nums.size(); i++){
            int sub = target - nums.at(i);
            for(int j = i + 1; j < nums.size(); j++){
                if(nums.at(j) == sub){
                    indices.push_back(i);
                    indices.push_back(j);
                    break;
                }
            }
        }
        return indices;
    }
};
