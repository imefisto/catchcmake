#include "User.h"

std::string User::getFullname()
{
  std::string fullName = _name;

  if(_name.length() > 0 && _surname.length() > 0)
  {
    fullName += " ";
  }

  fullName += _surname;

  return fullName.length() > 0
    ? fullName
    : "John Doe" // default value
    ;
}
