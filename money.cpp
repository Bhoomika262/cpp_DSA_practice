#include<iostream>
using namespace std;

int main()
{
    int money, thou=0, hun=0, fif=0, ten=0, coin=0;
    cout<<"Enter the amount of money: ";
    cin>>money;

    if(money >= 1000){
        thou = money / 1000;
        money = money % 1000;
    }
    if(money >= 100){
        hun = money / 100;
        money = money % 100;
    }
    if(money >= 50){
        fif = money / 50;
        money = money % 50;
    }
    if(money >= 10){
        ten = money / 10;
        money = money % 10;
    }
    if(money >= 1){
        coin = money; // remaining coins
    }

    cout<<"You need:\n";
    cout<<"1000 rupee notes -> "<<thou<<endl;
    cout<<"100 rupee notes -> "<<hun<<endl;
    cout<<"50 rupee notes  -> "<<fif<<endl;
    cout<<"10 rupee notes  -> "<<ten<<endl;
    cout<<"1 rupee coins   -> "<<coin<<endl;

    return 0;
}
