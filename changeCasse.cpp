// Yolo lol yolo
// changeCasse.cpp
// g++ -std=c++11 -Wall -Wextra -o changeCasse.out changeCasse.cpp
#include <cctype>
#include <iostream>
int main(int argc, char ** argv)
{
<<<<<<< HEAD
  std::string texte = *(argv[1]) + "," + *(argv[2]);
=======
    std::string texte = argv[0] + " , " + argv[1];
>>>>>>> es
    // change les minuscules par des majuscules et réciproquement
    for (char & c : texte)
    {
        if (std::islower(c))
            std::cout << char(std::toupper(c));
        else if (std::isupper(c))
            std::cout << char(std::tolower(c));
        else 
            std::cout << c;
    }
    return 0;
}
