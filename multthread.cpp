#include <iostream>
#include <thread>
#include <Windows.h>
#include <mutex>
using namespace std;
mutex mu;  
int totalNum = 10;
 
void thread1()
{
	while (totalNum > 0)
	{
		mu.lock(); 
		cout <<"thread1:"<< totalNum << endl;
		totalNum--;
	//	Sleep(100);
		mu.unlock(); 
	}
}
void thread2()
{
	while (totalNum > 0)
	{
		mu.lock();
		cout <<"thread2:"<< totalNum << endl;
		totalNum--;
		//Sleep(100);
		mu.unlock();
	}
}
void thread3(int k)
{
	for (int i = 0; i < k; i++)
	{
			mu.lock();
		cout << "Thread 3 is working ¡I:" <<i<<endl;
			mu.unlock();
	}
}
int main()
{
	thread task1(thread1);
	thread task2(thread2);
	thread task3(thread3,10);
	task1.detach();
	task3.detach();
	task2.detach();
	for (int i = 0; i < 5; i++)
	{
		mu.lock();
		cout << "Main thread is working ¡I" << endl;
		mu.unlock();
	}
	system("pause");
}

