//
//  main.cpp
//  DataMiningAli
//
//  Created by Water on 14-4-3.
//  Copyright (c) 2014年 Water. All rights reserved.
//

#include "PurchaseCycle.h"
//#include <iostream>
//#include "Action.h"
//#include "Date.h"

using namespace std;

int main(int argc, const char * argv[])
{
//    Date da(1985, 1, 1);
//    vector<Date> vac;
//    vac.push_back(da);
    vector<Action> vac;
//    int a = 10;
//    vector<int> ints;
//    ints.push_back(a);
//    a = 11;
//    ints.push_back(a);
//    cout << ints[0] << endl << ints[1] << endl;
    Action bc;
    vac.push_back(bc);
   Date da(1928,1,1);
   bc.brand_id = 111;
  bc.date.year = 1985;
  vac.push_back(bc);
    cout << vac[0].brand_id << endl;
    cout << vac[1].brand_id << endl;
    cout << vac[0].date.year << endl;
    cout << vac[1].date.year << endl;
    cout << "No build error\n";
    return 0;
}

