#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//TODO Create seperate functions for cleaner code

int main()
{
  // initialize seed generator
  srand (time(NULL));

	int playerChoice;
  int computerChoice = rand() % 3 + 1;

  char playAgain = 'y';

  while(playAgain == 'y')
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

    std::cout << "Computer chose:\n\n";
    
    switch(computerChoice)
    {
      case 1:
        std::cout << "Rock\n";
        break;
      case 2: // paper
        std::cout << "Paper\n";
        break;
      case 3: // scissors
        std::cout << "Scissors\n";
        break;
      default:
        std::cout << "Invalid Option\n";
  }

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

    std::cout << "Do you want to play again? y/n\n";
    std::cin >> playAgain;

    if (playAgain == 'n')
    {
      break;
    }
  }

  return 0;

}
