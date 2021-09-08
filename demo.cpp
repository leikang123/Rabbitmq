 
#include <iostream>
using namespace std;
 
// main() 是程序开始执行的地方
 
int main()
{
double *p;
p =new double[3];
for(int i=0;i<3;i++)
  cin >> *(p+i);
for(int i=0;i<3;i++)
  cout << *(p+i) << "";
delete p;
}