#include <iostream>
#include <string>
using namespace std;

int main()
{
    //delcare char data type
    char grade = 'A';

    //declare int data type
    int percentile = 90;

    // delcare string data type
    string myGoal = "I will do all assigned coursework to the best of my ability, read all assigned and recommended texts and understand them to the best of my ability.";

    //write console output
    cout <<"If I wanted to get a/an "<<grade<<" for the Cplusplus course"<<endl;
    cout <<"The total marks need to be within "<<percentile<<" percentile\n";
    cout <<"So I would need to get "<<percentile<<"%, or better on each module and the midterm and final exam.\n";
    cout <<"To do this I need to set a goal for myself and carry it through.\n";
    cout <<myGoal +"\n";
    cout <<"\n";

    return 0;
}