bool isPalindrome(int x) {
    if(x<0 || ((x!=0) && (x%10==0))) return false;
		unsigned int revX = 0;
    unsigned int tmp = x;
		while(tmp != 0){
				revX = (revX*10) + tmp%10;
				tmp /=10;
		}
		return x == revX;
}
