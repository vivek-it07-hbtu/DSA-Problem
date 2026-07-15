class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=n*(2*1+(n-1)*2)/2;  // sum of nth term in AP here a=1 bcz of odd d=2
        int sumeven=n*(2*2+(n-1)*2)/2;  //a=2 bcz of even d=2
        return gcd(sumodd,sumeven);
    }
};