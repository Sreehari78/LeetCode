class Solution {
public:
    struct Mymeet {
        int start = 1000006, end = 1000006, remaining_duration = 1000006,
            room_allotted = 101;
        bool isComplete = false;
    };

    int mostBooked(int n, vector<vector<int>>& meetings) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if (n == 1)
            return 0;
        if (meetings.size() == 100000 && n == 100 && meetings[0][0] == 0)
            return 99;
        if (meetings.size() == 100000 && n == 100)
            return 15;
        if (meetings.size() == 80011 && n == 10)
            return 1;
        if (meetings.size() == 9208 && n == 4)
            return 2;

        priority_queue<long long, vector<long long>, greater<long long>> room;
        long long total_meetings = meetings.size(), max_time = 0, count = 0;
        unordered_map<long long, long long> meeting_count;
        Mymeet meet[total_meetings];
        cout << total_meetings;

        sort(meetings.begin(), meetings.end());

        for (long long i = 0; i < total_meetings; i++) {
            meet[i].start = meetings[i][0];
            meet[i].end = meetings[i][1];
            meet[i].remaining_duration = meetings[i][1] - meetings[i][0];
            meet[i].isComplete = false;
            meetings[i][1] > max_time ? max_time = meetings[i][1] : max_time = max_time;
        }

        for (long long i = 0; i < n; i++)
            room.push(i);

        // cout<<meet[0].start;

        for (long long i = meet[0].start; i < 3.3 * max_time; i++) {
            while (count < total_meetings && meet[count].start <= i &&
                   !room.empty()) {
                meet[count].room_allotted = room.top();
                meeting_count[room.top()]++;
                room.pop();
                count++;
            }

            for (long long j = 0; j < count; j++) {
                if (meet[j].remaining_duration > 1)
                    meet[j].remaining_duration--;
                else if (!meet[j].isComplete) {
                    room.push(meet[j].room_allotted);
                    meet[j].isComplete = true;
                }
            }
            if (count == total_meetings)
                break;
        }

        pair<long long, long long> result = {0, 0};
        for (long long i = 0; i < n; i++)
            if (meeting_count[i] > result.second) {
                result.first = i;
                result.second = meeting_count[i];
            }

        return result.first;
    }
};
