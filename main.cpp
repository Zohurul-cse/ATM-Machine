#include<graphics.h>
#include<iostream>
#include<stdio.h>
using namespace std;
void calculation();
int main()
{
    initwindow(500,700,"ATM",500,60);

    readimagefile("ATM 1.jpg",0,0,500,700);
    delay(5000);
    cleardevice();
    readimagefile("menu.jpg",0,0,500,700);
    delay(5000);
    cleardevice();
    calculation();
    getchar();
}
void calculation()
{
    float balance=1000;
    char arr[50];
    settextstyle(1,HORIZ_DIR,3);
    //outtextxy(20,30,"Your balance is" );
    sprintf(arr,"Your balance is %.2f",balance);
    outtextxy(50,10,arr);


    int option;
    float deposit;
    float cash_out;
    while(1)
    {
        cin>>option;
        switch(option)
        {
        case 1:
        {

            break;
        }
        case 2:

        {

            cout<<"\n   * Enter Deposit Amount: ";
            cin>>deposit;
            balance = balance+deposit;
             char arr[50];
    settextstyle(1,HORIZ_DIR,3);
    //outtextxy(20,30,"Your current balance is" );
    sprintf(arr,"Your current balance is %.2f",balance);
    outtextxy(50,10,arr);

            cout<<"\n  * My Current Balance Now: "<<balance<<endl<<endl;
            cout<<"||====================================||"<<endl;
            cout<<"||Enter any key  to main menu..........."<<endl;
            cout<<"||====================================||"<<endl;
            getchar();
            getchar();

            break;

        }
        case 3:

        {
            cout<<"\n  * Cash Out Amount: ";
            cin>>cash_out;
            balance = balance-cash_out;
            cout<<"  * My Current Balance Now: "<<balance<<endl<<endl;
            cout<<"||====================================||"<<endl;
            cout<<"||Enter any key  to main menu..........."<<endl;
            cout<<"||====================================||"<<endl;
            getchar();
            getchar();

            break;
        }
        case 4:

        {
            exit(0);
            cout<<"||====================================||"<<endl;
            cout<<"||Enter any key  to main menu..........."<<endl;
            cout<<"||====================================||"<<endl;
            getchar();
            getchar();
            system("cls");
        }
        default:
        {
            cout<<"  !!! Wrong Input !!!"<<endl;

            exit(0);
        }
        }
    }

}
