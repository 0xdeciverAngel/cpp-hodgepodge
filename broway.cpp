#include <iostream>
using namespace std;
void f(int n)
{
	switch (n)
	{
	case 1:
	{
		cout << "您選擇變形金剛" << endl;
		break;
	}
	case 2:
	{
		cout << "您選擇蟻人" << endl;
		break;
	}
	case 3:
	{
		cout << "您選擇紅雀" << endl;
		break;
	}
	case 4:
	{
		cout << "您選擇星際大戰" << endl;
		break;
	}
	}
}
int main()
{
	int n;
	cout << "選擇電影票:" << endl;
	cout << "編號【1】:變形金剛(150元)" << endl;
	cout << "編號【2】:蟻人(150元)" << endl;
	cout << "編號【3】:紅雀(150元)" << endl;
	cout << "編號【4】:星際大戰(150元)" << endl;
	cout << "(10張(含)以上每張打8折)" << endl;
	cout << "請輸入電影編號" << endl;
	while (1)
	{
		cin >> n;
		if (n > 0 && n < 5)
		{
			break;
		}
		cout << "編號錯誤 請輸入正確編號" << endl;
	}
	f(n);
	cout << "請輸入張數(最多20張)" << endl;
	int k;
	while (1)
	{
		cin >> k;
		if (k > 0 && k < 21)
		{
			break;
		}
		cout << "編號錯誤 請輸入正確張數" << endl;
	}
	if (k > 9)
	{
		cout << "總共";
		cout << k * 150 * 0.8;
		cout << "元";
	}
	else
	{
		cout << "總共";
		cout << k * 150;
		cout << "元";
	}
}
