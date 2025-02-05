#include <iostream>
#include <cstring>
/*#ifndef _STATE_H
#define _STATE_H
#ifndef _FUNCTION_H
#define _FUNCTION_H
//#include "function.h"
#endif
#include "state.h"
#endif
#ifndef _FUNCTION_H
#define _FUNCTION_H
//#include "function.h"
#endif*/
#include "nation.h"
#include "state.h"
#include "function.h"

  int main(int argc, char const *argv[]) {
      state s1, s2("Uttarakhand", "Dehradun", 1000, 10000.00);
      state s3(s2);
      char name[20], capital[20];
      unsigned int popl;
      float area;
      Friend f;
      f.display(s1);
      f.display(s2);
      f.display(s3);
      std::cout << std::endl << std::endl;
      // Inputiing values to another object using overloaded ->
      state s4;
      std::cout << "\n Initailizing values to a new obejct using the overloaded -> \n";
      std::cout << "\t Enter the name of the state :\t";
      std::cin >> name;
      std::cout << "\n\t Capital :\t";
      std::cin >> capital;
      std::cout << "\n\t Population :\t";
      std::cin >> popl;
      std::cout << "\n\t Area :\t";
      std::cin >> area;
      s4->set_name(name);
      s4->set_capital(capital);
      s4->set_popln(popl);
      s4->set_area(area);
      // Displaying the values of object using overloaded ->
      std::cout << "\t Displaying using overloaded '->' :\n\n";
      std::cout << "\n\n\t Name of the state : " << s4->get_name();
      std::cout << "\n\t Capital : " << s4->get_capital();
      std::cout << "\n\t Population : " << s4->get_popln();
      std::cout << "\n\t Area : " << s4->get_area();
      // Using pointers to make the obejcts and do the object things
      state* s5;
      s5 = new state;
      s5->set_name("Maharashtra");
      s5->set_capital("Mumbai");
      s5->set_popln(10000);
      s5->set_area(20000);
      std::cout << "\n\n";
      std::cout << "\n\n\t Name of the state : " << s5->get_name();
      std::cout << "\n\t Capital : " << s5->get_capital();
      std::cout << "\n\t Population : " << s5->get_popln();
      std::cout << "\n\t Area : " << s5->get_area();
      std::cout << std::endl << std::endl;
      // New objects initialized value using [] operator
      state s6, s7;
      s7 = s6[s2];
      f.display(s7);
      std::cout << "\n\n";

      // Nation class inherrited and new commands to test them
      nation *n1;
      n1 = &s2;
      std::cout << "\n\n\n\t Demonstrating runtime polymorphism \n" << '\n';
      std::cout << n1->get_name() << std::endl;
      std::cout << s2.nation::get_name() << std::endl;
      std::cout << s2.get_name() << '\n';
      return 0;
  }
