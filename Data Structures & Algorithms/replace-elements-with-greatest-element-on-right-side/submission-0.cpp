class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        for (int i = 0; i < arr.size() - 1; i++) {
            int m = INT_MIN;

            for (int j = i + 1; j < arr.size(); j++) {
                m = max(m, arr[j]);
            }

            arr[i] = m;
        }

        arr[arr.size() - 1] = -1;

        return arr;
    }
};