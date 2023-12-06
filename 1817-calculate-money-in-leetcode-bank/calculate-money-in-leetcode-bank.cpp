class Solution {
public:
    int sum(int n, int a) {
        return (n * (2 * a + (n - 1)))/2;
    }

    int totalMoney(int n) {
        int m = 1;
        int ans = 0;
        while (n) {
            if (n >= 7) {
                ans += sum(7, m); 
                n -= 7;
            } else {
                ans += sum(n, m);
                n = 0;
            }
            m += 1;
        }
        return ans;
    }
};
