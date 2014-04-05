//
//  DateHelper.cpp
//  DataMiningAli
//
//  Created by Water on 14-4-5.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#include "DateHelper.h"


int DateHelper::delta_date(Date date_a, Date date_b)
{
    int delta = 0;
    delta = (date_a.month - date_b.month) * 30 + date_a.day - date_b.day;
    return delta;
};