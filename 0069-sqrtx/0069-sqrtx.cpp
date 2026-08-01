class Solution{
    public:
int mySqrt(int n) {
    int odd = 1;
    int count = 0;

    while (n >= odd) {
        n -= odd;
        odd += 2;
        count++;
    }

    return count;
}
};

