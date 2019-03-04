#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<string>
#include <iomanip>
#include<cmath>

using namespace std;

int main()
{
	int n;//	1. input n 
	cout << "enter a number for n:";//let user enter a number as n
	cin >> n;
	while (n != 1)// 3. if n = 1 then STOP
	{
		if (n % 2 != 0)n = 3 * n + 1; //4. if n is odd then n ¡ö 3n + 1
		else n = n / 2;//5. else n ¡ö n / 2
		cout << n << endl;//2. print n 
	}
	
	system("pause");
	return 0;

}//end