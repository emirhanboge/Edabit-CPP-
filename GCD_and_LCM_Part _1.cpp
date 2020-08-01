int gcd(int a, int b) {
	int divisor = a;
	while (b % divisor != 0 && a % divisor != 0) {
		--divisor;
		if (b % divisor == 0 && a % divisor == 0) {
			return divisor;
		}
	}
}
