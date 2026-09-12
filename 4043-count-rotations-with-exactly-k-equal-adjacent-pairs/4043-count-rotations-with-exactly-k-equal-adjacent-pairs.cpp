static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    int countRotations(string s, int k) {
        int res = 0, n = s.length();

        for (int i = 0; i < n; i++) {
            int score = 0;

            for (int i = 1; i < s.length(); i++)
                if (s[i - 1] == s[i])
                    score++;

            if (score == k)
                res++;
            
            char rotate = s[0];
            s.erase(0,1);
            s.push_back(rotate);
        }

        return res;
    }
};