using namespace std;
vector<int> miniPeaks(vector<int> arr) {
	std::vector<int> new_arr {};
	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] > arr[i+1] && arr[i] > arr[i-1] && i != 0) {
			new_arr.push_back(arr[i]);
		}
	}
	return new_arr;
}
