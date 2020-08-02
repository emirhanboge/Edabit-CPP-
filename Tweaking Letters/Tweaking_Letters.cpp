std::string tweakLetters(std::string s, std::vector<int> arr) {
	std::string str;
	for (int i {0}; i < s.length(); ++i) {
		int val = int(s[i]) + arr[i];
		if (s[i] == 'z' && arr[i] == 1) {
			str.push_back('a');
		} else if (s[i] == 'a' && arr[i] == -1) {
			str.push_back('z');
		} else {
			char out = char(val);
			str.push_back(out);
		}
	}
	return str;
}
