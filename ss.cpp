#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"guess my number game:"<<endl;
	int  num=rand()%10000+1;
	int guess;
	cout<<"guess the number :";
	cin>>guess;
	int tries=1;
	while(num!=guess){
		cout<<"tries :"<<tries<<endl;
		if(num>guess)
		cout<<"number is high"<<endl;
		else
		cout<<"number is low"<<endl;
		tries++;
		cout<<"guess the number";
		cin>>guess;
		
	}
	cout<<"you guess correct number";
	return 0;
}

