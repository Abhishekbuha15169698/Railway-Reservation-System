/*Train Number , Train Name , Source , Destination , Train Time.*/
#include<iostream>
#include<stdio.h>
using namespace std;
class train
{
    int Train_Number;
    char Train_Name[100];
    char source[100];
    char Destination[100];
    char Train_Time[100];
public:
    void setdata()
    {
        cout<<"Train_Number:"; cin >>Train_Number;
        fflush(stdin);
        cout<<"Train_Name:"; cin >>Train_Name;
        fflush(stdin);
        cout<<"source:"; cin >>source;
        fflush(stdin);
        cout<<"Destination:"; cin >>Destination;
        fflush(stdin);
        cout<<"Train_Time:"; cin >>Train_Time;
        fflush(stdin);
    }

    void mg()
    {
        cout<<"Train_Number:"; cin>> Train_Number;
       cout << "Train_Name:" << Train_Name << endl
        << "source:" << source << endl
        << "Destination:" << Destination << endl
        << "Train_Time:" << Train_Time << endl;
    }
};
int main()
{
    cout<<"             Welcome to Train Reservation System                " << endl;
    train T[900];
    int i,n;
    cout<<"How many tickets you want to get:"; cin>>n;
    for(i=0; i<n; i++)
    {
        T[i].setdata();
    }


    cout<<"             Find your ticket as per ticket number                " << endl;

    for(i=0; i<n; i++)
    {
        T[i].mg();
    }
    return 0;
}
