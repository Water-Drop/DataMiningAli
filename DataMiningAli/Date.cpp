//
//  Date.cpp
//  DataMiningAli
//
//  Created by Water on 14-4-4.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#include "Date.h"

Date::Date(int _year, int _month, int _day)
{
    year = _year;
    month = _month;
    day = _day;
};

Date::Date(const Date &date)
{
    year = date.year;
    month = date.month;
    day = date.day;
};

Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
};