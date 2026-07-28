#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> hashmap;
        for (auto &el: nums) {
            if (hashmap.contains(el)) {
                return true;
            }

            hashmap.insert({el, true});
        }
        return false;
    }
};