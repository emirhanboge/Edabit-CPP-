using namespace std;
bool isSubset(std::vector<int> arr1, std::vector<int> arr2) {
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	
	vector<int> arr {};
	
	if (arr1.size() >= arr2.size())
	{
		for(auto ele:arr2)
		{
			for (int i {0}; i < arr1.size(); ++i)
			{
				if (ele == arr1[i])
					arr.push_back(ele);
			}
		}
	}
	else
	{
		for(auto ele:arr1)
		{
			for (int i {0}; i < arr2.size(); ++i)
			{
				if (ele == arr2[i])
					arr.push_back(ele);
			}
		}
	}
}
