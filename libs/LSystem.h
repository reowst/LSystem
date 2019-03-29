/*
* The class that produces the development
* of the lsystem in accordance with its rules.
*/
#include "LRule.cpp"
#include "turtle.cpp"
#include <string>
#include <vector>

using namespace std;

class LSystem : public Turtle{
  public:
    LSystem(string, vector<string> &);
    void parseRules(vector<string>);
    void addRule(string, string);
    void iterate(const int &);
    string getCondition();
    void interpret(const float &, const float &);
  private:
    string condition; // condition of the lsystem
    vector<LRule> rules; // rules of the lsystem
};
