#include <string>

class User {

  public:

    std::string getFullname();

    void setName(const std::string name) { _name = name; }
    void setSurname(const std::string surname) { _surname = surname; }

  private:

    std::string _name, _surname;


};
