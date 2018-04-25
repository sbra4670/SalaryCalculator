//
//  Salary.cpp
//  SalaryCalculator
//
//  Created by Bravo, Sebastian on 4/25/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "Salary.hpp"

void Salary :: Calculator()
{
    int Hours;
    cout << "Answer The Following Questions: " << endl;
    cout << "How Many Hours A Week Do You Work?" << endl;
    cin >> Hours;
    cout << endl;
    
    double HourlyWage;
    cout << "How Much Money Do You Make An Hour?" << endl;
    cout << "$" << flush;
    cin >> HourlyWage;
    cout << endl;
    
    double Total = (HourlyWage * Hours) * 2;
    double SSNTax = Total * .062;
    double GrandTotal = Total - SSNTax;
    
    cout << "In Two Weeks You Will Earn: $" << GrandTotal << endl;
    cout << "In One Months You Will Earn: $" << (GrandTotal * 2) << endl;
    cout << "In Two Months You Will Earn: $" << (GrandTotal * 4) << endl;
    cout << "In 5 Months You Will Earn: $" << (GrandTotal * 10) << endl;
    cout << "In A Year You Will Earn: $ " << (GrandTotal * 24) << endl;
    cout << "In Two Years You Will Earn: $" << (GrandTotal * 48) << endl;
    cout << "In Five Years You Will Earn: $" << (GrandTotal * 120) << endl;
    cout << "In Ten Years You Will Earn: $" << (GrandTotal * 600) << endl;
    cout << endl;
}
