#include <iostream>

using namespace std;

class calculator{
    public:
    int num1,num2,solution;
    char symbol;
    calculator(int n1,int n2){
        num1=n1;
        num2=n2;
    }
    void addition(){
        solution=num1+num2;
        cout<<"the solution is"<<solution;
    }void subtraction(){
        solution=num1-num2;
        cout<<"the solution is"<<solution;
    }void multiplictaion(){
        solution=num1*num2;
        cout<<"the solution is"<<solution;
    }void division(){
        solution=num1/num2;
        cout<<"the solution is"<<solution;
    }
};
int main(){
    calculator.c;
     cout<<"enter the num1";
     cin>>num1;
      cout<<"enter the num2";
      cin>>num2;
      cout<<"enter which operation should perform(+,-,*,/)";
      cin>>symbol;
      if(symbol=="+"){
        c.addition;
      }else if (symbol=="-"){
        c.subtraction;
      }else if (symbol=="*"){
        c.multiplictaion;
      }else if (symbol=="/"){
        c.division;
      }else{
        cout<<"enter valid operation";
      }
        return 0;

}

