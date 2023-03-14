#include <iostream>
using namespace std;
#include <cmath>
int main() {

  double error_T;
  double a = 1;
  double b = 4;
  double n;
  double k = 2;
   cout<< "This code computes the error of the trapezoid rule given any value of n"<< endl;
  
   cout << "Enter number of intervals:" << " ";
   cin >> n;

   if (n < 0){
    cout << "Number of intervals must be positive"<< endl;
    cout << "Enter number of intervals:" << " ";
    cin >> n;
   }
  
   error_T = abs((k * pow((b-a),3))/(12 * pow(n,2)));
  
   cout<< "Margin of error:" << error_T << endl;
  
  
}