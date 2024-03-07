#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int X1;
    int Y1;
    int X2;
    int Y2;
    double LengthofLine;

    cout<<"Welcome to Line Comparison Computation Program..!!"<<endl;

    cout<<"Enter the Line 1 Starting Point Value : (X1) : ";
    cin>>X1;
    cout<<"Enter the Line 1 Ending Point Value : (Y1) :";
    cin>>Y1;
    cout<<"Enter the Line 2 Starting Point Value : (X2) : ";
    cin>>X2;
    cout<<"Enter the Line 2 Ending Point Value : (Y2) : ";
    cin>>Y2;

    LengthofLine = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));

    cout<<"Length of Line is : "<<LengthofLine<<endl;

    return 0;
}