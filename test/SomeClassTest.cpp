#include "catch.hpp"
#include "User.h"

SCENARIO( "User Entity", "[]" ) {

  GIVEN("A user") {

    WHEN("it is created") {

      User u;

      THEN("getFullname should return John Doe") {

        REQUIRE(u.getFullname() == "John Doe");

      }

    }

    WHEN("assign name and surname") {

      User u;

      u.setName("Pepe");
      u.setSurname("Argento");

      THEN("getFullname should return name+<space>+surname") {

        REQUIRE(u.getFullname() == "Pepe Argento");

      }

    }

    WHEN("assign only a name") {

      User u;

      u.setName("Pepe");

      THEN("getFullname should return the name") {

        REQUIRE(u.getFullname() == "Pepe");

      }

    }

    WHEN("assign only a surname") {

      User u;

      u.setSurname("Argento");

      THEN("getFullname should return the surname") {

        REQUIRE(u.getFullname() == "Argento");

      }

    }

  }

};
