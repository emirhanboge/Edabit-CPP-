std::string owofied(std::string sentence) {
	for (int i = 0; i < sentence.length(); ++i) {
		if (sentence[i] == 'i') {
			sentence[i] += 'w';
		} else if (sentence[i] == 'e') {
			sentence[i] += 'w';
		}
	}
	std::cout << sentence << " owo";
}
