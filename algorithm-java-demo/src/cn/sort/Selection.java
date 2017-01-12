package cn.sort;

/** 
* @ClassName: Selection 
* @Description: 选择排序类 
* @author 无名
* @date 2016-6-9 下午7:23:59 
* @version 1.0
 */

public class Selection extends Base
{
	@Override
	public void sort(Comparable[] arr)
	{	
		int arrLength = arr.length;
		for (int i = 0; i < arrLength; i++)
		{
			int min = i;
			for(int j = i + 1; j < arrLength; j++)
			{
				if(less(arr[j], arr[min])) 
				{
					min = j;
				}
			}
			exch(arr, i, min);
		}
	}
}
