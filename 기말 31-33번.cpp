/*소인수분해하는 프로그램

예를 들어 20을 입력하면

20 =
(2^2)(5^1)

이딴 식으로 나오게 하려는 것
*/


#include <iostream>

using namespace std;

int main(void)
{
	int N;//입력값
	int i;//index
	int prime[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
	//prime 에는 40이하의 소수가 다 들어있음.
	
	cin>>N;//N을 입력받음
	cout << " = " << endl;
	
	for(i = 0; i < 12; i++)
	{
		int count = 0;
		
		if(N % prime[i] == 0)
		{
			
			
			
			
			
			
			
			
			
		}
		
		//count가 0이면 무시됨.
		if(count != 0)
		{
			cout << "(" << prime[i] << "^" << count << ")";
		}
		
	}
	
	cout << endl;
	
	return 0;
}