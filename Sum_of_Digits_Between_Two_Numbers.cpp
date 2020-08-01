int sumDigits(int a, int b) {
	int val1 = a, val2 = b, sum = 0;
	std::vector<int> arr {a, b};
	std::vector<int> last_arr {};
	while (val1+1 != val2) {
		int val = val2 - 1;
		--val2;
		arr.push_back(val);
	}
	for (auto ele:arr) {
		std::string str = std::to_string(ele);
		for (int i = 0; i < str.length(); ++i) {
			int num = (int)str[i] - 48; //in ASCII code, the numbers (digits) start from 48. All you need to do is:
			sum += num;
		}
	}
	return sum;
}
