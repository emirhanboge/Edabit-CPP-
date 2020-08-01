bool isPrefix(std::string word, std::string prefix) {
	return std::equal(prefix.begin(), prefix.end() - 1, word.begin());
}

bool isSuffix(std::string word, std::string suffix) {
	return std::equal(suffix.begin() + 1 ,suffix.end() ,word.end() - suffix.size() + 1);
}
