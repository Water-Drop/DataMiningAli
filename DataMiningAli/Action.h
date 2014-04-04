//
//  Action.h
//  DataMiningAli
//
//  Created by Water on 14-4-4.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#ifndef DataMiningAli_Action_h
#define DataMiningAli_Action_h

#include "Date.h"

class Action
{
public:
    Action(int _user_id, int _brand_id, int _action_type, Date _date);
    int user_id;
    int brand_id;
    int action_type;
    Date date;
};

#endif
