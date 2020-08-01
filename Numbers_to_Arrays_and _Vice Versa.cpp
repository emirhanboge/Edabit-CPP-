std::vector<int> toArray(int num) {
	std::vector<int> arr;
	int i = 0;
	while (num >= 0) {
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	return arr;
}

#include <cmath>
int toNumber(std::vector<int> arr) {
	int sum = 0;
	for (int i = 0; i < arr.size(); i++)
		sum += arr[i] * pow(10, arr.size() - i);
	return sum;
}
