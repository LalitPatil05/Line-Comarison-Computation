#include<iostream>
#include<math.h>
using namespace std;

class LineComparison{

    public:
    
        int X1;
        int Y1;
        int X2;
        int Y2;
        
            LineComparison(int X1, int Y1, int X2, int Y2)
        {
            this->X1 = X1;
            this->Y1 = Y1;
            this->X2 = X2;
            this->Y2 = Y2;
        }

            double Length()
            {
                return sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));
            }
    
            void CheckEquality(LineComparison linecomparison2) 
        {
            if(Length() == linecomparison2.Length()){
                cout<<"Both Lines Are Equals..!!"<<endl;
            }

            else if(Length() < linecomparison2.Length()){
                cout<<"Line 1 is Less than Line 2..!!"<<endl;
            }

            else if(Length() > linecomparison2.Length()){
                cout<<"Line 1 is Greater than Line 2..!!"<<endl;
            }
        }

            void CheckEndPoints()
            {
            
            if(Y1==Y2){
                cout<<"Both Lines Are Same From End Points..!!"<<endl;
            }
            
            else if(Y1<Y2){
                cout<<"Line 1 is Less than Line 2 From End Points..!!"<<endl;
            }
            else if(Y1>Y2){
                cout<<"Line 1 is Greater than Line 2 From End Points..!!"<<endl;
            }
        }

   
};
int main(){

                LineComparison linecomparison1(10,20,30,15);
                linecomparison1.Length();

                LineComparison linecomparison2(10,20,30,40);
                linecomparison2.Length();

                linecomparison1.CheckEquality(linecomparison2);

                linecomparison1.CheckEndPoints();//CheckForLine1...
                linecomparison2.CheckEndPoints();//CheckForLine2...

                return 0;
}