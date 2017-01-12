/*************************************************
Copyright:bupt
Author:无名
Date:2010-07-09
Description:选择排序类
**************************************************/

#ifndef SELECTION_H_
#define SELECTION_H_

template <class T1, class T2>
class Selection :public SortBase < T1 >
{
public:
	void Sort(vector<T2> & arr);
};

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