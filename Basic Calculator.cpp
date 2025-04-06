#include<iostream>
using namespace std;
int main()
{
	double num1,num2;
	char operation;
	cout<<"simple calculator"<<endl;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter an operator(+,-,*,/)"<<endl;
	cin>>operation;
	cout<<"enter second number"<<endl;
	cin>>num2;
	switch(operation)
	{
		case '+':
		    cout<<"result: "<<num1+num2<<endl;
			break;
		case '-':
		    cout<<"result: "<<num1-num2<<endl;
		    break;
		case '*':
		    cout<<"result: "<<num1*num2<<endl;
			break;
		case '/':
		    if(num2 !=0)
		{
			cout<<"result: "<<num1/num2<<endl;
				}
				else{
					cout<<"error: division by zero is not allowed!"<<endl;
				}					
				break;
				default:
					cout<<"invalid operator! please use +,-,*, or /"<<endl;
	}
	return 0;
}
