int reverse(long x) {
    long res = 0;
    bool isNeg = false;
    if(x<0){
        x*=-1;
				isNeg = true;
    }
    while(x%10 == 0 && x>0) x/=10;
    while(x>0){
        res *= 10;
        res+= x%10;
				x /= 10;
    }
    if(res > 2147483648) return 0;
    if(isNeg) res*=-1;
		return res;
}
