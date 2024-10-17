#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q){
    const long long MOD = 1e9 + 7;
	long long sum = 0;
	long long product = 1;
	if(q == 1) {
		for(int i = 1; i <= n; i++){
			sum += i;
		}
		return sum;
	} else {
		for (int i = 1; i <= n; i++){
			product = (product * i) % MOD;
		}
		return product;
	}
}

// 1 testcase failing