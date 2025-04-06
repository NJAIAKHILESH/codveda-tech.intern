#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int randomnumber=rand()%100+1;
	int userguess;
	int attempts=0;
	cout<<"welcome to the number guessing game!"<<endl;
	cout<<"i have selected a number between 1 to 100 try to guess it!"<<endl;
	while(true)
	{
		cout<<"enter your guess"<<endl;
		cin>>userguess;
		attempts++;
		if(userguess>randomnumber)
		{
			cout<<"too high! try again."<<endl;
		}
		else if(userguess<randomnumber)
		{
			cout<<"too low! try again."<<endl;
		}
		else
		{
			cout<<"congratulations! you guessed the number in"<<attempts<<"attempts."<<endl;
			break;
		}
			
	}
	return 0;
}
