// class Solution {
// public:
//     static bool compareByTime(const vector<int>& a, const vector<int>& b) {
//         return a[2] < b[2];
//     }

//     vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
//         vector<bool> secret(n, false);
//         vector<int> result;
//         result.push_back(0);

//         secret[0] = true;
//         secret[firstPerson] = true;

//         sort(meetings.begin(), meetings.end(), compareByTime);

//         int i = 0;
//         while (i < meetings.size()) {
//             int x = meetings[i][0], y = meetings[i][1], left = i, right = i + 1;
//             bool flag = false;

//             if (secret[x] || secret[y]) {
//                 secret[x] = true;
//                 secret[y] = true;
//                 flag = true;
//             }

//             while (right < meetings.size() && meetings[left][2] == meetings[right][2]) {
//                 if (meetings[right][0] || meetings[right][1]) {
//                     flag = true;
//                     right++;
//                 }
//             }

//             while (flag && left < right) {
//                 secret[meetings[left][0]] = true;
//                 secret[meetings[left++][1]] = true;
//             }

//             i = right;
//         }

//         for (int i = 1; i < n; i++)
//             if (secret[i])
//                 result.push_back(i);
//         return result;
//     }
// };

#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
#define MAX_N 100000
    int find(const int* groups, int index){
        while(index != groups[index])index = groups[index];
        return index;
    }

    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        static int groups[MAX_N];
        static vector<int> temp;

        for (int i = 0; i < n; ++i) groups[i] = i;
        groups[firstPerson] = 0;

        sort(meetings.begin(), meetings.end(), [](const auto& l, const auto& r) {
            return l[2] < r[2];
        });

        const int SIZE = meetings.size();
        int i = 0;
        while (i < SIZE) {
            int currentTime = meetings[i][2];
            temp.clear();
            while (i < SIZE && meetings[i][2] == currentTime) {
                int g1 = find(groups, meetings[i][0]);
                int g2 = find(groups, meetings[i][1]);
                groups[max(g1, g2)] = min(g1, g2);
                temp.push_back(meetings[i][0]);
                temp.push_back(meetings[i][1]);
                ++i;
            }
            for (int j = 0; j < temp.size(); ++j) {
                if (find(groups, temp[j]) != 0) {
                    groups[temp[j]] = temp[j];
                }
            }
        }

        vector<int> result;
        for (int j = 0; j < n; ++j) {
            if (find(groups, j) == 0)result.push_back(j);
        }

        return result;
    }
};
auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();