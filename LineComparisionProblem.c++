#include<iostream>
#include<math.h>
using namespace std;

class LineComparison{

    int X1;
    int Y1;
    int X2;
    int Y2;
    
    public:
    LineComparison(int X1, int Y1, int X2, int Y2)
    {
        this->X1 = X1;
        this->Y1 = Y1;
        this->X2 = X2;
        this->Y2 = Y2;
    }
    
    double Length(){
            return sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));
    }
    void CheckEquality(LineComparison LineComparison2)
    {
        if(Length() == LineComparison2.Length()){
            cout<<"Both Lines Are Equals..!!"<<endl;
        }
        else if(Length() < LineComparison2.Length()){
            cout<<"Line 1 is Less than Line 2..!!"<<endl;
        }
        else if(Length() > LineComparison2.Length()){
            cout<<"Line 2 is Greater than Line 1..!!"<<endl;
        }
    }
};
int main(){

    LineComparison linecomparison1(10,20,30,40);
    linecomparison1.Length();

    LineComparison linecomparison2(10,20,30,50);
    linecomparison2.Length();

    linecomparison1.CheckEquality(linecomparison2);

    return 0;
}