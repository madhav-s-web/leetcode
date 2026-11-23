
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> temp;

        for (int i = 0; i < dist.size(); i++) {
            temp.push_back((float)dist[i] / speed[i]);
        }

        sort(temp.begin(), temp.end());

        int count = 0;

        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] <= i) {
                return count;
            }
            count++;
        }

        return count;
    }
};
