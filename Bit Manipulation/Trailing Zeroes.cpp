int Solution::solve(int A) {
    int res = 0;
    while(A>0){
        if(A&1==1){
            break;
        }
        else{
            res++;
        }
        A=A>>1;
    }
    return res;
}
