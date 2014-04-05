//
//  Action.cpp
//  DataMiningAli
//
//  Created by Water on 14-4-4.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#include "Action.h"

Action::Action(int _user_id, int _brand_id, int _action_type, Date _date)
{
    user_id = _user_id;
    brand_id = _brand_id;
    action_type = _action_type;
    date.year = _date.year;
    date.month = _date.month;
    date.day = _date.day;
};

Action::Action()
{
    user_id = 0;
    brand_id = 0;
    action_type = 0;
    date.year = 0;
    date.month = 0;
    date.day = 0;
}