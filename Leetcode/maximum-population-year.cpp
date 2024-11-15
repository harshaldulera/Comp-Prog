class Solution {
private:
    int findYearCount(vector<vector<int>>& logs, int year) {
        int size = logs.size();
        int count = 0;
        for(int i = 0; i < size; i++) {
            if(logs[i][0] <= year && logs[i][1] > year) {
                count++;
            }
        }
        return count;
    }

public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n = logs.size();
        int max = 0;
        int idx = 0;
        for(int i = 1950; i < 2050; i++) {
            if(findYearCount(logs, i) > max) {
                max = findYearCount(logs, i);
                idx = i;
            }
        }
        return idx;
    }
};  