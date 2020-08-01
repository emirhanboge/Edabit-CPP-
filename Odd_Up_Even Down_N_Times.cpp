std::vector<int> evenOddTransform(std::vector<int> arr, int n) {
	for (int i{0}; i < arr.size(); ++i) {
		if (arr[i] % 2 == 1) {
			arr[i] += 2 * n;
		} else if (arr[i] % 2 == 0) {
			arr[i] += -2 * n;
		}
	}
	return arr;
}
