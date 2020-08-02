int pentagonal(int num) {
	int sum = num + (num - 1)*4;
	return sum + pentagonal(--num);
}
