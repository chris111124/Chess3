#include <iostream>
#include <vector>
#include <array>
#include <limits>

void startingPosition(char board[8][8])
{
    for (int i{ 2 }; i < 6; i++)
    {
        for (int j{ 0 }; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                board[i][j] = '#';
            }
            else board[i][j] = '-';
        }
    }
    for (int i{ 0 }; i < 8; i++)
    {
        for (int j{ 0 }; j < 8; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void keepConsoleOpen()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

int main()
{
    char board[8][8]{ {'r','n','b','q','k','b','n','r'},
                    {'p','p','p','p','p','p','p','p'},{},{},{},{},
                    {'P','P','P','P','P','P','P','P'},
                    {'R','N','B','Q','K','B','N','R'} };
    startingPosition(board);
    std::array<char, 4> name;
    bool gameOver{ false }; 
    while (gameOver == false)

    return 0;
}




