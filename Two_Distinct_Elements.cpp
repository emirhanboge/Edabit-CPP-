std::vector<int> returnUnique(std::vector<int> arr) {
	std::vector<int> array = arr;
	sort(array.begin(), array.end());
	for (int i = 0; i < arr.size(); ++i) {
		if (array[i] == array[i+1]) {
			array.erase(array.begin() + i);
		}
	}
	return array;
}
