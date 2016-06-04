#pragma once

class MyDate
{
private:
	int year;
	int month;
	int day;
public:
	MyDate();
	MyDate(int year, int month, int day);
	int getYear() const;
	int getMonth() const;
	int getDay() const;
};