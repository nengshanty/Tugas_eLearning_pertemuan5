#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void prosesbaca();
int proseshitung();
void prosestampil();


int bilangan,faktorial=1;

int main () {

    prosesbaca();
    proseshitung();
    prosestampil();


}

void prosesbaca () {

     cout << "masukkan nilai : ";
     cin >> bilangan;

}


int proseshitung () {

    for(int n=bilangan;n>=2;n--)  {

             faktorial=n*faktorial;
      }
}

void prosestampil (){
     cout << "hasil faktorisasinya adalah = " ;
     cout << faktorial;

} 