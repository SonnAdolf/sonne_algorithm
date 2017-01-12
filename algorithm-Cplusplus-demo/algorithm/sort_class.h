/*************************************************
Copyright:bupt
Author:无名
Date:2010-06-10
Description:与排序相关的类
**************************************************/

#ifndef SORT_H_
#define SORT_H_

#include<iostream> 
#include<string>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

template <class T>
class SortBase
{
public:
	virtual void Sort(vector<T> & arr) = 0;
	void Exch(vector<T> & arr, int i, int j);
	void PrintArr(vector<T> & arr);
};

template <class T>
void SortBase<T>::Exch(vector<T> & arr, int i, int j)
{
	T t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

template <class T>
void SortBase<T>::PrintArr(vector<T> & arr)
{
	int length = arr.size();
	for (int i = 0; i < length - 1; i++)
	{
		cout << arr[i].ToString() << " ";
	}
	cout << arr[length - 1].ToString() << endl;
}
#endif 