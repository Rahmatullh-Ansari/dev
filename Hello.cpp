#include<iostream>
using namespace std;
class FirstClass{
    public:
    int Sum=0;
    virtual void SumOfDigit(int num){
        return;
    }
};
class SecondClass:public FirstClass{
    public:
    void SumOfDigit(int num){
        int temp=num;
        while (num > 0)
        {
            int temp = num%10;
            Sum+=temp;
            num/=10;
        }
        cout<<"Sum of digit of "<<temp<<"="<<Sum<<endl;
    }
};
int main(){
    FirstClass *fo;
    SecondClass so;
    fo=&so;
    fo->SumOfDigit(1234);
    return 0;
}