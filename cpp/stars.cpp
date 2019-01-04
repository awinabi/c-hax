#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::string message = "Welcome to the Galaxy, " + name ;

  for(int i=0; i<10; i++) {
    std::string spaces(10-i, ' ');
    std::string stars(i, '*');
    std::cout << spaces << stars << stars << std::endl;
  }

  for(int i=0; i<3; i++) {
    std::string trunk_spaces(8, ' ');
    std::cout << trunk_spaces << "|" << "  " << "|" << std::endl;
  }
  std::string msg_stars(message.size()+4, '*');
  std::string msg_spaces(message.size(), ' ');

  std::cout << msg_stars << std::endl;
  std::cout << "* " << msg_spaces << " *" << std::endl;
  std::cout << "* " << message << " *" << std::endl;
  std::cout << "* " << msg_spaces << " *" << std::endl;
  std::cout << msg_stars << std::endl;


  return 0;
}
