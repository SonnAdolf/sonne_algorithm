/*************************************************
Copyright:bupt
Author:Œﬁ√˚
Date:2010-06-10
Description:≤‚ ‘
**************************************************/


#include "sort_class.h"
#include "entity_class.h"

vector<Date> getTestData()
{
	Date d1 = Date(11, 7, 1992);
	Date d2 = Date(3, 2, 2001);
	Date d3 = Date(10, 10, 1888);
	Date d4 = Date(23, 7, 1992);
	vector<Date> vec;
	vec.push_back(d1);
	vec.push_back(d2);
	vec.push_back(d3);
	vec.push_back(d4);
	return vec;
}

void main()
{
	vector<Date> vec = getTestData();
	Selection<Date,Date> selection;
	selection.Sort(vec);
	selection.PrintArr(vec);
	cin.get();
}

