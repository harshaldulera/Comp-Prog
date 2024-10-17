class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap;
        for (int num : arr) {
            umap[num]++;
        }
        set<int> freq;
        for(const auto& entry : umap) {
            if(freq.count(entry.second)) {
                return false;
            }
            freq.insert(entry.second);
        }
        return true;
    }
};