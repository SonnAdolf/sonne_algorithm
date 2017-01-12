/*************************************************
Copyright:bupt
Author:无名
Date:2010-07-09
Description:插入排序类
**************************************************/

#ifndef INSERTION_H_
#define INSERTION_H_

template <class T1, class T2>
class Insertion :public SortBase < T1 >
{
public:
	void Sort(vector<T2> & arr);
};

template <class T1, class T2>
void Insertion<T1, T2>::Sort(vector<T2> & arr)
{
	int arr_length = arr.size();
	for (int i = 1; i < arr_length; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				Exch(arr, j, j - 1);
			}
		}
	}
}

#endif 