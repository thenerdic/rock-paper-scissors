#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

void determineWinner(int, int);
int getPlayerChoice(int);
int getComputerChoice(int);

int main()
{
  int computerChoice;
  int playerChoice;

  char playAgain = 'y';

  while(playAgain == 'y')
  {
    playerChoice = getPlayerChoice(playerChoice);
    computerChoice = getComputerChoice(computerChoice);
    determineWinner(playerChoice, computerChoice);

    std::cout << "Do you want to play again? y/n\n";
    std::cin >> playAgain;
    std::cout << "\033[H\033[2J\033[3J";
    
    if (playAgain == 'n')
    {
      break;
    }
  }

  return 0;

}

void determineWinner(int playerChoice, int computerChoice)
{
    if (playerChoice == computerChoice)
    {
      std::cout << "Draw!\n";
    }
    else if (playerChoice == 1 && computerChoice ==  3)
    {
      std::cout << "You win!\n";
    }
    else if (playerChoice == 2 && computerChoice == 1)
    {
      std::cout << "You win!\n";
    }
    else if (playerChoice == 3 && computerChoice == 2)
    {
      std::cout << "You win!\n";
    }
    else {
      std::cout << "Computer Wins!\n";
    }
}

int getPlayerChoice(int playerChoice)
{
    std::cout << "\tWelcome to Rock, Paper Scissors!\n\n";
    std::cout << "---Game Menu---\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "Choose Wisely: \n";
    std::cin >> playerChoice;

    std::cout << "You chose:\n";

    switch(playerChoice)
    {
      case 1: // rock
        std::cout << "Rock\n\n";
        break;
      case 2: // paper
        std::cout << "Paper\n\n";
        break;
      case 3: // scissors
        std::cout << "Scissors\n\n";
        break;
      default:
        std::cout << "Invalid Option\n\n";
  }
  return playerChoice;
}

int getComputerChoice(int computerChoice)
{
  // initialize seed generator
  srand (time(NULL));
  computerChoice = rand() % 3 + 1;

  std::cout << "Computer chose:\n";

  switch(computerChoice)
  {
    case 1:
      std::cout << "Rock\n\n";
      break;
    case 2: // paper
      std::cout << "Paper\n\n";
      break;
    case 3: // scissors
      std::cout << "Scissors\n\n";
      break;
    default:
      std::cout << "Invalid Option\n\n";
  }
  return computerChoice;

}