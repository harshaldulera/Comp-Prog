bool isPrime(int n){
	bool isPrime = true;
	int cnt = 0;
	if(n <= 1) {
		isPrime = false;
	}
	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}
