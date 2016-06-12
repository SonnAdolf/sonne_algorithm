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

template <class T1, class T2>
class Selection :public SortBase<T1>
{
public:
	void Sort(vector<T2> & arr);
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

template <class T1, class T2>
void Selection<T1, T2>::Sort(vector<T2> & arr)
{
	int arr_length = arr.size();
	for (int i = 0; i < arr_length; i++)
	{
		int min = i;
		for (int j = i + 1; j < arr_length; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		Exch(arr, i, min);
	}
}

#endif 