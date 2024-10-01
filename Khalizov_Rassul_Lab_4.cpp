// Rassul Khalizov
//Lab 4
// 10/1/24

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    double LowSugar; 
    double MediumSugar;
    double HighSugar;
    string fruit; 
    double fruitSugar;
    int i; 

    


    i = 1;
    while (i <= 5) {
        cout<<"What is your fruits name?"; 
        cin >> fruit;

        cout<<"How much sugar does your fruit have?";
        cin >> fruitSugar;
        if (fruitSugar < 10)
        {
            cout << fruit <<" is a LOW SUGAR FRUIT";
        }
        else if (fruitSugar <= 14)
        {
            cout<< fruit <<" is a MEDIUM SUGAR FRUIT";
        }
        
        else if (fruitSugar == 10)
        {
            cout<< fruit <<" is a MEDIUM SUGAR FRUIT";
        }
        else if (fruitSugar > 14)
        {
            cout<< fruit <<" is a HIGH Sugar Fruit";
        }
        i++;
    } 
    /*What is your fruits name?grapes
How much sugar does your fruit have?23.37
grapes is a HIGH Sugar FruitWhat is your fruits name?avocado
How much sugar does your fruit have?0.99
avocado is a LOW SUGAR FRUITWhat is your fruits name?strawberries
How much sugar does your fruit have?7
strawberries is a LOW SUGAR FRUITWhat is your fruits name?grapefruit
How much sugar does your fruit have?10.6
grapefruit is a MEDIUM SUGAR FRUITWhat is your fruits name?orange
How much sugar does your fruit have?14
orange is a MEDIUM SUGAR FRUIT%      */

    return 0;    
}