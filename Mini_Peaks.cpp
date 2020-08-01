using namespace std;
vector<int> miniPeaks(vector<int> arr) {
	std::vector<int> newArr {};
	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] > arr[i+1] && arr[i] > arr[i-1] && i != 0) {
			newArr.push_back(arr[i]);
		}
	}
	return newArr;
}
