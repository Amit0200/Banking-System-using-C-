#inlcude <iostream>
#include <iomanip>

void showBalance(balance){

  std::cout << "Your account balance is: $" << std::setprecision(2) << std::fixed << balance << std:endl;
}

double depositMoney(){
  double money {0};
  std::cout << " Enter the amount you would like to deposit: " << std::endl;
  std::cin >> money;

  if (money > 0){
    return money;
  }
  else{
    std::cout << " That's not a valid amount!! " << std::endl;
  }
  
}

double withdrawMoney(){
  double money {0};

  std::cout << "Enter the amount you would like to withdraw: ";
  std::cin >> money;

  if (money > balance){
    std::cout << "Insufficient Funds." << std::endl;
    return 0;
  }
  else if (money < 0) {
    std::cout << "That's not a valid amount." << std::endl;
    return 0;
  }
  else{
    return money;
  }
  
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
  } while (option != 4);
  

  return 0;
}
