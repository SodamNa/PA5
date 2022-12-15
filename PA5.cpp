class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
	vector<int> indices;
	    
	for (int i = 0; i < nums.size(); i++) {
		int sub = target - nums[i];

		if (hash.find(sub) != hash.end()) {
			indices.push_back(hash[sub]);
			indices.push_back(i);			
			return indices;
		}
		hash[nums[i]] = i;
	}
	return indices;
    }
};
