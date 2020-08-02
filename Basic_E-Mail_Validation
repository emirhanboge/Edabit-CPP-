bool validateEmail(std::string str) {
	int val_at = std::count(str.begin(), str.end(), '@');
	int val_dot = std::count(str.begin(), str.end(), '.');
	if (val_at < 1 || val_dot < 1 ||val_at > 1) {
		return false;
	}
	std::size_t at = str.find('@');
	std::size_t dot = str.find('.');
	if (dot < at && val_dot == 1) {
		return false;
	}
	return ((dot > at && val_dot > 1) || at == 0)? false:true;
}
