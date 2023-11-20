// Name - Rushikesh Chobhe //
// Roll No - 34 //


#include <bits/stdc++.h>
using namespace std;


vector<vector<int> > findPowerSet(vector<int>& nums)
{
	
	int bits = nums.size();

	unsigned int pow_set_size = pow(2, bits);


	sort(nums.begin(), nums.end());
	vector<vector<int> > ans;

]
	vector<string> list;

	
	for (int counter = 0; counter < pow_set_size;
		counter++) {
		vector<int> subset;
		string temp = "";

		
		for (int j = 0; j < bits; j++) {
			if (counter & (1 << j)) {
				subset.push_back(nums[j]);

				
				temp += to_string(nums[j]) + '$';
			}
		}

		if (find(list.begin(), list.end(), temp)
			== list.end()) {
			ans.push_back(subset);
			list.push_back(temp);
		}
	}

	return ans;
}


int main()
{
	vector<int> arr{ 10, 12, 12 };

	vector<vector<int> > power_set = findPowerSet(arr);

	for (int i = 0; i < power_set.size(); i++) {
		for (int j = 0; j < power_set[i].size(); j++)
			cout << power_set[i][j] << " ";
		cout << endl;
	}

	return 0;
}
// this code is contributed by prophet1999
