#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define MAX 100;
map<string, double> hash_table = { {"牛奶",1.2},{"鸡蛋",2.5},{"泡面",3.6},{"炒饭",3.8},{"火锅",5.6} };

int main()
{
	cout << "输入活动和消耗量：" << endl;
	string names;
	double num;
	cin >> names >> num;
	cout << hash_table[names] * num << endl;
}