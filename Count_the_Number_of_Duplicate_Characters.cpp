#include <set>
int duplicates(std::string str) 
{
	std::set<char> set(str.begin(), str.end());
	return str.length() - set.size();
}
