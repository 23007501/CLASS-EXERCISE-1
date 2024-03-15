#include <iostream>

using namespace std;


int main()
{
    double Total_Cost_Merchandise , Employees_Salary , Yearly_Rent ,Estimeted_Electricity_Cost;

    cout<<"Enter The Total cost of merchandise : ";
    cin>> Total_Cost_Merchandise;
    cout<<"Enter Employees Salary including yours :";
    cin>>Employees_Salary;
    cout<<"Enter your yearly rent : ";
    cin>>Yearly_Rent;
    cout<<"Enter the estimeted electricity cost :";
    cin>>Estimeted_Electricity_Cost;


    double Net_Profit , Total_Expenses , New_Net_Profit , Mark_Up;
    Total_Expenses = Total_Cost_Merchandise + Employees_Salary + Yearly_Rent + Estimeted_Electricity_Cost ;
    Net_Profit = Total_Cost_Merchandise*0.10;
    New_Net_Profit = Net_Profit/0.85;
    Mark_Up =(New_Net_Profit + Total_Expenses)/Total_Cost_Merchandise;

    cout<<"The merchandise should be marked up " << Mark_Up << " To get the desired profit"<<endl;



    return 0;
}
