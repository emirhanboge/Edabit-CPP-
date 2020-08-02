int findOdd(std::vector<int> arr) {
	for (int i = 0; i < arr.size(); ++i) {
		if (std::count(arr.begin(), arr.end(), arr[i]) % 2 == 1) {
			return arr[i];
		}
	}
}
