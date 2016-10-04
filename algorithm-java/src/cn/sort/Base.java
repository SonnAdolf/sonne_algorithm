package cn.sort;

/**
* @ClassName: Base 
* @Description: ���������
* @author sonn
* @date 2016-6-9 ����1:06:52 
* @version 1.0
 */

public abstract class Base 
{
	public abstract void sort(Comparable[] arr);
	
	public boolean less(Comparable v, Comparable w)
	{
		return v.compareTo(w) < 0;
	}
	
	public void exch(Comparable[] arr, int i, int j)
	{
		Comparable t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	public void printArr(Comparable[] arr)
	{
		for(int i = 0; i < arr.length - 1; i++)
		{
			System.out.print(arr[i] + " ");
		}
		System.out.print(arr[arr.length - 1]);
	}
}
