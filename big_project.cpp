#include<stdlib.h>
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    char choice,exit;

    while (true)
    {
    //system("cls");
    if (exit=='y' || exit=='Y')
        break;

    cout<<"Big CPP Project\n\n\n";
    cout<<"               *****MENU*****\n\n";
    cout<<"1) do some sh*t              2) do some sh*t"<<endl;
    cout<<"3) do some sh*t              4) do some sh*t"<<endl;
    cout<<"5) do some sh*t              6) exit"<<endl;
    cout<<"\n\nInput Choice: ";
    cin>>choice;
    system("cls");



    switch(choice) {
      case '1' :
         {cout << "You Chose 1" << endl;
         getchar();
         system("cls");
         break;}
      case '2' :
         cout << "You Chose 2" << endl;
         break;
      case '3' :
         cout << "You Chose 3" << endl;
         break;
      case '4' :
         cout << "You Chose 4" << endl;
         break;
      case '5' :
         cout << "You Chose 5" << endl;
         break;
      case '6' :
         cout << "You Chose Exit" << endl;
         exit='y';
         break;
      default :
         cout << "Invalid Choice Dummy" << endl;

   }
    }
return 0;
}

