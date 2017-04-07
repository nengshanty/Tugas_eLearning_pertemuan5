#include <iostream> 
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
int bilangan, faktorial=1;
cout <<"masukkan bilangan yang akan difaktorialkan=";
cin >> bilangan;
cout << bilangan <<"!=";
cout << bilangan;
for(int n=bilangan;n>=2;n--)
{
faktorial=n*faktorial;
cout << "x" << n-1;

}

cout <<"=  "<<faktorial;
return 0;
}