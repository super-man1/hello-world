#include <iostream>
using namespace std;
int main()
{
	//计算1-100的和
	int total = 0;
	for (int i = 0; i <=100; i++)
	{
		total += i; //total =i+total
		cout << i << endl;
		cout << total << endl;
	}
}
