#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	float x;
	double y;

	x = 1.495979E11;
	y = 1.989E30;
	i = x + y;
	string answer;
	answer = "The answer is";
	string incorrect;
	incorrect = "Sorry that's incorrect";

	if (i != 1)
		{
			cout << answer << i;
		}
	
	else
		{
			cout << incorrect << answer << i;
		}
	

	return 0;
}