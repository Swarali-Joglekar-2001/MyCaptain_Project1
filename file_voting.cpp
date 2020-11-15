#include<iostream>

int main()
{

int age;
char m,n;
std::cout<<"Enter your age : ";
std::cin>>age;
if(age>=18)
{

std::cout<<"Do you have residence proof? Type Y if you have it; else type N :\n";
std::cin>>m;
std::cout<<"\nDo you have identity proof? Type Y if you have it; else type N :\n";
std::cin>>n;
	if(m=='Y'&&n=='Y')
	{
	
		std::cout<<"\nYou are eligible for voting.";
	}

	else
	{
		
		std::cout<<"\nYou are not eligible for voting";
	}

}
else if(age<18)
{
	std::cout<<"\nYou are not eligible for voting";

}
return 0;
}


