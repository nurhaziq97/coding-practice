#include <iostream>
#include <vector>

void miniMaxSum(std::vector<int> arr) {
	long total = 0, min, max=arr[0];
	for(int i = 0; i < arr.size(); i++) {
		std::cout << "total:" <<total << " + arr[" << i << "]: " <<arr[i] << "="  << total+arr[i] << std::endl;
		total = total +  arr[i];
	}
	std::cout << "TOTAL: " <<total<<std::endl; 
	for(int i=0; i < arr.size(); i++) {
		if(min > total - arr[i]) {
			min = total - arr[i];
		}
		if(max < total - arr[i]) {
			max = total - arr[i];
		}
	}
	std::cout << min << " " << max;
}

int main() {
	const int MAX_NUM = 5;
	int temp;
	std::vector<int> arr;
	for(int i=0;i<MAX_NUM;i++) {
		std::cin >> temp;
		arr.push_back(temp);
	}

	miniMaxSum(arr);
	return 0;
}
