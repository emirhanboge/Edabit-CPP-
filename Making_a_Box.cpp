std::vector<std::string> makeBox(int n) {
	std::vector<std::string> arr{}; 
	for (int i {0}; i < n; ++i) {
		if (i == 0 || i == n-1) {
			int count = 0;
			while (count != n) {
				++count;
				arr[i].push_back('#');
			}
		} else {
			int count = 1;
			arr[i].push_back('#');
			while (count != n-1) {
				++count;
				arr[i].push_back('#');
			}
			arr[i].push_back('#');
		}
	}
	return arr;
}
