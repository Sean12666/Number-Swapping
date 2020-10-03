// Number Swapping.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <ctime>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{
	vector<string> seq;
	vector<string> ans;
	int len;
	cout << "Enter length:" << endl;
	cin >> len;
	cout << endl;
	int swapTimes = len;
	Sleep(1000);
	cout << "Enter a sequence:" << endl;
	for (int i = 0; i < len; i++)
	{
		string item;
		cin >> item;
		seq.push_back(item);
	}
	cout << endl;
	Sleep(1000);
	cout << "Original sequence:" << endl;
	for (auto i : seq)
	{
		cout << i << " ";
		Sleep(1000);
	}
	cout << endl << endl;
	Sleep(1000);
    srand(static_cast<unsigned int>(time(NULL)));
	for (int i = 0; i < swapTimes; i++)
	{
		int item1 = 0 + rand() % len;
		int item2 = 0 + rand() % len;
		swap(seq[item1], seq[item2]);
		cout << i + 1 << ". Swap item " << item1 + 1 << " and item " << item2 + 1 << "." << endl << endl;
		Sleep(1000);
	}
	Sleep(1000);
	cout << "What is the current sequence?" << endl;
	for (int i = 0; i < len; i++)
	{
		string item;
		cin >> item;
		ans.push_back(item);
	}
	cout << endl;
	Sleep(1000);
	if (ans == seq)
	{
		cout << "Bingo! You are right!" << endl;
	}
	else
	{
		cout << "Oh, no! You are wrong." << endl;
	}
	cout << endl;
	Sleep(1000);
	cout << "Current sequence:" << endl;
	for (auto i : seq)
	{
		cout << i << " ";
		Sleep(1000);
	}
	cout << endl;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
