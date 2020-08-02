std::vector<std::string> filterUnique(std::vector<std::string> arr) {
	std::vector<std::string> new_arr {};
	for(auto ele:arr) {
		std::string str =ele;
		std::sort(ele.begin(), ele.end());
		auto a = std::unique(ele.begin(), ele.end());
		if (a == ele.end()) {
			new_arr.push_back(str);
    }
	}
	return new_arr;
}
