#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char, int> hm;
      for (char &ch: s) {
        if (hm.contains(ch)) {
            hm[ch] = hm[ch] + 1;
        } else {
            hm[ch] = 1;
        }
      }  

      for (char&ch: t) {
        if (hm.contains(ch)) {
            hm[ch] = hm[ch] - 1;
            if (hm[ch] < 0) return false;
        } else {
            return false;
        }
      }

      return s.size() == t.size();
    }
};
