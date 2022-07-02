int Solution::singleNumber(const vector<int> &A) {
    int ones = 0;
    int twos = 0;
    for(auto x:A){
        ones = (ones^x) & (~twos);
        twos = (twos^x) & (~ones);
    }
    return ones;
}
