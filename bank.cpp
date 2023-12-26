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
    
    
  }

  

  return 0;
}
