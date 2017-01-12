package cn.test;

import org.junit.Test;

import cn.data.Date;
import cn.sort.Selection;

/**
* @ClassName: Test 
* @Description: 测试类
* @author 无名
* @date 2016-6-9 下午7:26:08 
* @version 1.0
 */

public class AlgorithmTest 
{
	private Date[] getTestData()
	{
		Date[] dateArr = {new Date(11,3,2001),new Date(11,7,1992),
				new Date(10,12,1884),new Date(12,3,2001)};
		return dateArr;
	}
	
	@Test
	public void testSelection()
	{
		Selection selection = new Selection(); 
		Date[] arr = getTestData();
		selection.sort(arr);
		selection.printArr(arr);
	}
}
