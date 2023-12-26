#inlcude <iostream>
#include <iomanip>

void showBalance(balance){

  std::cout << "Your account balance is: " << std:endl;
}

void depositMoney(){
  double money;
  std::cout << " Enter the amount you would like to deposit: " << std::endl;
  std::cin >> money;

  std::cout << " Your account balance is: " << money << std::cout;
}

void withdrawMoney(){
  double money;
  
}

int main(){

  double balane {0};
  int option {0};

  do{
    std::cout << " ^ Welcome to ABC banking system ^ " << std::endl << "Choose your option: " << std::endl;
    std::cout << " 1. Show Balance " << std::endl;
    std::cout << " 2. Deposit Money " << std::endl;
    std::cout << " 3. Withdraw Money " << std::endl;
    std::cout << " 4. Exit " << std::endl;

    std::cin >> option;

    std::cin.clear();
    fflush(stdin);

    switch(option);
      case 1 : showBalance(balance);
               break;
      case 2 : balance += depositMoney();
               showBalance(balance);
               break;
      case 3 : balance -= withdrawMoney();
               showBalance(balance);
               break;
      case 4 : std::cout << " Thanks for visiting our bank!!" << std::endl;
               break;
      default : std::cout << " Invalid Option !!! " << std::endl;
               break;
  } while {
    option != 4;
  }

  return 0;
}
