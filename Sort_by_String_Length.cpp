std::vector<std::string> sortByLength(std::vector<std::string> arr) {
	std::vector<int> new_arr {};
	std::vector<std::string> output = {};
	for (int i{0}; i < arr.size(); ++i) {
		int val = arr[i].length();
		new_arr.push_back(val);
	}
	for (int i = 0; i < arr.size(); ++i) {
		int val = *std::find(new_arr.begin(), new_arr.end(),*std::min_element(new_arr.begin(), new_arr.end()));
		output.push_back(arr[val]);
		new_arr.erase(new_arr.begin() + val-1);;										 
	}
	return output;												
}
