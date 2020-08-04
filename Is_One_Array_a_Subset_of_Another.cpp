using namespace std;
bool isSubset(std::vector<int> arr1, std::vector<int> arr2) {
	int count {0};
	vector<int> arr {};
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	for (int i {0}; i < arr2.size(); ++i) {
		if (arr2[i] >= arr1[0]) {
			arr.push_back(arr2[i]);
		}
	}
	for (int i {0}; i < arr1.size(); ++i) {
		if (arr1[i] == arr[i]) {
			++count;
		}
	}
	return (count == arr1.size())? true:false;
}
