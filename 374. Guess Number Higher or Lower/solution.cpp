int guess(int);

int guessNumber(int n){
		int l = 1;
		int r = n;
    while(l <= r){
        int middle = l+(r-l)/2;
        int isGoal = guess(middle);
        if(isGoal == 0){return middle;}
        else if(isGoal > 0) {l = middle +1;}
        else r = middle - 1;
    }
    return -1;
}
