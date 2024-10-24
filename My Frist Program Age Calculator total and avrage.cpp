#include <iostream>
using namespace std;

int main() {
  int age1,age2,age3,age4,age5,age6,age7,age8,age9,age10;
  int total;
  float avg;
  
  
  cout << "Please Enter Age of Student1 = ";
  cin  >> age1;
  cout << "Please Enter Age of Student2 = ";
  cin  >> age2; 
  cout << "Please Enter Age of Student3 = ";
  cin  >> age3;
  cout << "Please Enter Age of Student4 = ";
  cin  >> age4;
  cout << "Please Enter Age of Student5 = ";
  cin  >> age5;
  cout << "Please Enter Age of Student6 = ";
  cin  >> age6;
  cout << "Please Enter Age of Student7 = ";
  cin  >> age7;
  cout << "Please Enter Age of Student8 = ";
  cin  >> age8;
  cout << "Please Enter Age of Student9 = ";
  cin  >> age9;
  cout << "Please Enter Age of Student10 = ";
  cin  >> age10;
  
  total = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
  avg = total/10;
  
  cout << "Total Age: " << total << endl;
  cout << "Average Age: " << avg << endl;
  

  
  return 0;
}

