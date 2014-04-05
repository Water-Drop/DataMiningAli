//
//  PurchaseTime.h
//  DataMiningAli
//
//  Created by Water on 14-4-5.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#ifndef DataMiningAli_PurchaseTime_h
#define DataMiningAli_PurchaseTime_h

#include <vector>

using namespace std;
class PurchaseTime
{
public:
    int brand_id;
    int degree;
    vector<int> purchase_date;
};

class UserPurchaseTime
{
public:
    int user_id;
    vector<PurchaseTime> purchase_times;
};
#endif
