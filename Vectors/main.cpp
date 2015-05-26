#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> Array;
	Array.push_back(3);
	Array.push_back(22);
	Array.push_back(1);
	Array.push_back(33);
	Array.push_back(13);
	Array.push_back(2);
	Array.push_back(5);
	Array.push_back(2);
	Array.push_back(0);
	Array.push_back(30);
	Array.push_back(2);
	Array.push_back(3);
	Array.push_back(4);
	Array.push_back(5);
	Array.push_back(6);
	Array.push_back(7);
	Array.push_back(8);
	Array.push_back(9);
	Array.push_back(10);
	Array.push_back(100);

	sort(Array.begin(), Array.end());

	for (vector<int>::size_type i = 0; i != Array.size();i++)
	{
		cout << Array[i] << " " ;
			
	}

}