#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define MAX 100;
map<string, double> hash_table = { {"ţ��",1.2},{"����",2.5},{"����",3.6},{"����",3.8},{"���",5.6} };

int main()
{
	cout << "��������������" << endl;
	string names;
	double num;
	cin >> names >> num;
	cout << hash_table[names] * num << endl;
}