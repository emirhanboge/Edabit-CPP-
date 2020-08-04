using namespace std;
long long sortDescending(long long num) {
	string str = to_string(num);
	sort(str.end(), str.begin());
	return stoi(str);
}
