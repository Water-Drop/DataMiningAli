//
//  PurchaseCycle.cpp
//  DataMiningAli
//
//  Created by Water on 14-4-5.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#include "PurchaseCycle.h"

PurchaseCycle::PurchaseCycle()
{
    min_cycle_convinced = 1;
    max_cycle_interval = 120;
    begin_date.year = 0;
    begin_date.month = 1;
    begin_date.day = 1;
};

PurchaseCycle::PurchaseCycle(int _min_cycle_convinced, int _max_cycle_interval, Date &date)
{
    min_cycle_convinced = _min_cycle_convinced;
    max_cycle_interval = _max_cycle_interval;
    begin_date.year = _date.year;
    begin_date.month = date.month;
    begin_date.day = date.day;
};

int PurchaseCycle::init_data(ifstream &ifs)
{
    string tmp_str;
    while (getline(ifs, tmp_str))
    {
        stringstream ss(tmp_str);
        Action tmp_ac;
        ss >> tmp_ac.user_id >> tmp_ac.brand_id >> tmp_ac.action_type >> tmp_ac.date.month >> tmp_ac.date.day;
        ss.clear();
        user_actions.push_back(tmp_ac);
    }
    
    DateHelper dh;
    for(unsigned int i = 0; i < user_actions.size(); i++)
    {
        for(unsigned int j = 0; j < user_purchase_times.size(); j++)
        {
            if(user_purchase_times.user_id == user_actions[i].user_id)
            {
                for(unsigned int k = 0; k < user_purchase_times[j].purchase_times.size(); k++)
                {
                    if (user_purchase_times[j].purchase_times[k].brand_id == user_action[i].brand_id)
                    {
                        user_purchase_times[j].purchase_times[k].degree ++;
                        user_purchase_times[j].purchase_times[k].purchase_date.push_back(dh.delta_date(user_action[i].date, begin_date);
                    }
                }
            }
        }
    }
    remove_noise_data();
    
};

int PurchaseCycle::remove_noise_data()
{
}