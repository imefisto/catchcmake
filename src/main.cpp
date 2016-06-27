#include <iostream>
#include "User.h"

int main (int argc, char *argv[]) 
{ 
  User u;

  std::cout << "Hello " << u.getFullname() << "\n";
} 
