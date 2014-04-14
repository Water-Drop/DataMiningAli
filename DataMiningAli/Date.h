//
//  Date.h
//  DataMiningAli
//
//  Created by Water on 14-4-4.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#ifndef DataMiningAli_Date_h
#define DataMiningAli_Date_h

class Date
{
public:
    Date(int _year, int _month, int _day);
    Date(const Date &date);
    Date();
    int year;
    int month;
    int day;
};

#endif
