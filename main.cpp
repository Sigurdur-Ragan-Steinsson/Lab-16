#include <iostream>

using namespace std;

int main() {
  int calcFun, num1, num2;
  do{

  cout << "Please enter your function, type 9 for help" << endl;
  cin >> calcFun;
  
  if (calcFun == 9){
    cout << "0 = exit" << endl << "1 = addition" << endl << "2 = subtraction" << endl << "3 = multiplication" << endl << "4 = division" << endl;

    cout << "Please enter what function you want" << endl;
    cin >> calcFun;
  }
  if (calcFun == 0){
    return 0;
  }

  cout << "Please enter the first number you want";
  cin >> num1;

  cout << "Please enter the second number you want";
  cin >> num2;


  switch (calcFun){
    case 1:
    cout <<num1 + num2;
    break;

    case 2:
    cout << num1 - num2;
    break;
            
    case 3:
    cout << num1 * num2;
    break;

    case 4:
    cout << num1 / num2;

    default:
    cout << num1 + num2;
    } 
  }
  while(calcFun != 0);
  return 0;
}