#include <iostream>

int main()
{
  std::string questions[] = {
      "question 1: ",
      "question 2: ",
      "question 3: ",
  };
  std::string options[][4] = {
      {"A:Answer a", "B:Answer b", "C:Answer c", "D:Answer d"},
      {"A:Answer a", "B:Answer b", "C:Answer c", "D:Answer d"},
      {"A:Answer a", "B:Answer b", "C:Answer c", "D:Answer d"},
  };
  char answerKey[] = {'A', 'B', 'C', 'D'};

  char guess;
  int score;
  int size = sizeof(questions) / sizeof(questions[0]);
  for (int i = 0; i < size; i++)
  {
    std::cout << "********" << "\n";
    std::cout << questions[i] << "\n";
    std::cout << "********" << "\n";
    for (int j = 0; j < sizeof(options[0]) / sizeof(options[i][0]); j++)
    {
      std::cout << options[i][j] << "\n";
    }
    std::cin >> guess;
    guess = toupper(guess);
    if (guess == answerKey[i])
    {
      std::cout << "Correct" << "\n";
      score++;
    }
    else
    {
      std::cout << "Wrond" << "\n";
      std::cout << "Answer: " << answerKey << "\n";
    }
  }
  std::cout << "**********" << "\n";
  std::cout << "* result *" << "\n";
  std::cout << "**********" << "\n";
  std::cout << "# of question: " << size << "\n";
  std::cout << "correct guesses: " << score << "\n";
  std::cout << "score: " << (score / (double)size) * 100 << "%";
  return 0;
}