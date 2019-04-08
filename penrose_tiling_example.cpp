#include "src/StandartLSystem.cpp"
#include <ctime>
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

const float step = 9.0;
const float angle = 36.0;

int main( int argc, char *argv[]) {
  StandartLSystem ls;

  ls.setAxiom("[7]++[7]++[7]++[7]++[7]");
  ls.addConstant('6');
  ls.addConstant('7');
  ls.addConstant('8');
  ls.addConstant('9');
  ls.addRule("6 => 81++91----71[-81----61]++");
  ls.addRule("7 => +81--91[---61--71]+");
  ls.addRule("8 => -61++71[+++81++91]-");
  ls.addRule("9 => --81++++61[+91++++71]--71");
  ls.addRule("1 => ");

  ls.moveto(250,250);

  ls.setColor(147, 112, 219);
  ls.iterate(6);
  ls.interpret(step, angle);
  ls.flush();
  SDL_Delay(5000);
  cout << (float)clock()/CLOCKS_PER_SEC << '\n';
  return 0;
}
