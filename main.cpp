#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string getPlan(){
    string plan_name;
    cout << "Plan Name: " << endl;
    cin >> plan_name;
    return plan_name;
}


unsigned getMonths(){
    unsigned months;
    cout << "Months: " << endl;
    cin >> months;
    return months;

}


int computeCost(string plan_name, unsigned months){
    
    if (plan_name == "silver")
        {
       if (months == 1)
       {return 90;}
       else
       {return 60;}
        }
    else
    {
        if (months == 1)
        {return 90;}
        else if (months >= 7)
        {return 35;}
        else
        {return 70;}

    }

}


int main() {
    int costs;
    costs = computeCost(getPlan(), getMonths());

    cout << "The cost of your plan is: $" << costs << endl;


    return 0;
}