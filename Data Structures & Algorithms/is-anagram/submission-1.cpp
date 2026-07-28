#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        for (char ch: s)
            if (umap.find(ch) == umap.end())
                umap[ch] = 1;
            else
                umap[ch]++;
        
        for (char ch: t)
            if (umap.find(ch) == umap.end())
                return false;
            else
                umap[ch] -= 1;
        
        for (auto item: umap)
            if (item.second != 0)
                return false;

        return true;
    }
};
