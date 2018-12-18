// C++ program to demonstrate 
// the use of std::find_first_of 
#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
int main() 
{ 
	// Defining first container 
	 std::string str ("I am a good boy");
  std::size_t found = str.find_first_of("axy");
  while (found!=std::string::npos)
  {
    std::cout<<found<<" "<<str<<'\n';
    str[found]='*';
    found=str.find_first_of("axy",found+1);
  }
  std::cout << str << '\n';

	return 0; 
} 
/*
2 I am a good boy
5 I *m a good boy
14 I *m * good boy
I *m * good bo*
*/
