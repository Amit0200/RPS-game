#include <iostream>
#include <ctime>

char getUserOption(){
  char player;
  std::cout << "<Rock Paper Scissors Game>" << std::endl;

  do{
    std::cout << "Choose on of the following" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << " r -> rock" << std::endl;
    std::cout << " p -> paper" << std::endl;
    std::cout << " s -> scissors" << std::endl;
    std::cin >> player;
  }while(player != 'r' && player != 'p' && player != 's');
  
  std::cout << player;

  return player;
}

char getComputerOption(){
  srand(time(0));
  int num = rand() % 3 + 1;
  
  switch(num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
  }

  return 0;
}

void showOption(char option){
  switch(option){
    case 'r': std::cout << "Rock" << std::endl
              break;
    case 'p': std::cout << "Paper" << std::endl
              break;
    case 's': std::cout << "Scissors" << std::endl
              break;

  }
}

void getWinner(char player, char computer){
  switch(player){
    case 'r': if (computer == 'r'){
                  std::cout << "It's a tie!" << std::endl;
              }
              else if (computer == 'p'){
                  std::cout << "You lose!" << std::endl;
              }
              else{
                  std::cout << "You win!" << std::endl;
              }
              break;
    case 'p': if (computer == 'r'){
                  std::cout << "You lose!" << std::endl;
              }
              else if (computer == 'p'){
                  std::cout << "It's a tie!" << std::endl;
              }
              else{
                  std::cout << "You win!" << std::endl;
              }
              break;
    case 's': if (computer == 'r'){
                  std::cout << "You win!" << std::endl;
              }
              else if (computer == 'p'){
                  std::cout << "You lose!" << std::endl;
              }
              else{
                  std::cout << "You lose!" << std::endl;
              }
              break;
  }
}

int main(){

  char player;
  char computer;

  player = getUserOption();
  std::cout << "You choose: ";
  showOption(player);

  computer = getComputerOption();
  std::cout << "Computer choose: ";
  showOption(computer);

  getWinner (player, computer);

  return 0;
}
