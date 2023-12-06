class Solution {
public:
    int totalMoney(int n) {
        int k=n/7, m= n%7;
        return 7*((k*(k+1)/2) + 3*k) + (m*(m+1)/2) + m*k;
    }
};