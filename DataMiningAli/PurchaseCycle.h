//
//  PurchaseCycle.h
//  DataMiningAli
//
//  Created by Water on 14-4-4.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#ifndef DataMiningAli_PurchaseCycle_h
#define DataMiningAli_PurchaseCycle_h

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Action.h"
#include "DateHelper.h"
#include "PurchaseTime.h"

using namespace std;

class PurchaseCycle
{
public:
    int init_data(ifstream &ifs);
    int calculate_avg_cycle();
    PurchaseCycle();
    PurchaseCycle(int _min_cycle_convinced, int _max_cycle_interval, Date &_date);
private:
    int min_cycle_convinced;//regard no cycle when purchase time <=  this number
    int max_cycle_interval; //regard no cycle when interval between two purchase - avg interval for this user >= this number
    vector<Action> user_actions;
    vector<UserPurchaseTime> user_purchase_times;
    Date begin_date;
    int remove_noise_data();//remove the data which purchase times <= min_cycle_convinced
    
};


#endif
