std::string reverse(std::string str) {
	if(str.length()==0)
		return "";	
	return reverse(str.substr(1)) + str[0];
}
