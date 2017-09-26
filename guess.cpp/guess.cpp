#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{
 srand( time(0) );
 int jumping;
 int dancing;
 dancing=rand() % 10 + 1;

 cout<<"Guess a random number between 1 and 10"<<endl;
 cin>>jumping;

 if(jumping==dancing)
 {
 cout<<"You, playing correctly! You win!"<<endl;
 }
 else if(jumping>dancing)
 {
 int humaid;
 humaid = jumping - dancing;
 cout<<"You were off by"<<humaid<<" Sorry you lose"<<endl;
 }
 else if(jumping<dancing)
 {
 int humaid;
 humaid = dancing - jumping;
 cout<<"you were off by"<<humaid<<" sorry you lose"<<endl;
 }

 return 0;
 }
