#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (int i = 0; i < strs.size(); ++i) {
            string key(strs[i]);
            sort(key.begin(), key.end());
            if (map.find(key) != map.end()) {
                vector<string>& vec = map.at(key);
                vec.emplace_back(strs[i]);
            } else {
                map.insert(pair<string, vector<string>>(key, {strs[i]}));
            }
        }

        vector<vector<string>> res;
        for (auto vec : map) {
            res.emplace_back(vec.second);
        }

        return res;
    }
};