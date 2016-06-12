/*************************************************
Copyright:bupt
Author:无名
Date:2010-06-10
Description:实体类
**************************************************/

#ifndef ENTITY_H_
#define ENTITY_H_

#include <string>
using std::string;

class Date
{
private:
	int day_;
	int month_;
	int year_;
public:
	Date(int d, int m, int y);
	string ToString();
	inline bool operator< (const Date &date) const;
	inline bool operator> (const Date &date) const;
	inline bool operator== (const Date &date) const;
};

Date::Date(int d, int m, int y)
{
	this->day_ = d;
	this->month_ = m;
	this->year_ = y;
}

string Date::ToString()
{
	char ch_tmp_arr[10];
	string final_str;

	_itoa_s(this->year_, ch_tmp_arr, 10);
	final_str.append(ch_tmp_arr);
	final_str.append("-");
	_itoa_s(this->month_, ch_tmp_arr, 10);
	final_str.append(ch_tmp_arr);
	final_str.append("-");
	_itoa_s(this->day_, ch_tmp_arr, 10);
	final_str.append(ch_tmp_arr);

	return final_str;
}

inline bool Date::operator>(const Date &date) const
{
	if (this->year_ > date.year_)
	{
		return true;
	}
	if (this->year_ < date.year_)
	{
		return false;
	}
	if (this->month_ > date.month_)
	{
		return true;
	}
	if (this->month_ < date.month_)
	{
		return false;
	}
	if (this->day_ > date.day_)
	{
		return true;
	}
	if (this->day_ < date.day_)
	{
		return false;
	}
	return 0;
}

inline bool Date::operator<(const Date &date) const
{
	if (this->year_ > date.year_)
	{
		return false;
	}
	if (this->year_ < date.year_)
	{
		return true;
	}
	if (this->month_ > date.month_)
	{
		return false;
	}
	if (this->month_ < date.month_)
	{
		return true;
	}
	if (this->day_ > date.day_)
	{
		return false;
	}
	if (this->day_ < date.day_)
	{
		return true;
	}
	return 0;
}

inline bool Date::operator==(const Date &date) const
{
	if (this->year_ == date.year_ && this->month_ == date.month_
		&& this->day_ == date.day_)
		return true;
	return false;
}

#endif