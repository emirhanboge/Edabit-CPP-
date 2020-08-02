std::vector<std::string> identicalFilter(std::vector<std::string> arr) {
	std::vector<std::string> new_arr {};
	for (auto ele:arr) {
		int cou = count(ele.begin(), ele.end(), ele[0]);
		if (cou == ele.length()) {
			new_arr.push_back(ele);
		}
	}
	return new_arr;
}
