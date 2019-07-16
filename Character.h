/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using std::string;

class Character {

protected:
  string m_Name;
  double m_Weight;
  string m_Speed;
  double m_Hair;
  string m_Race;
  string m_Size;

  Character() = default;
  Character(const Character &orig) = default;
  virtual ~Character() = default;
  virtual string getSpecial() const = 0;

public:
  string getName() const;
  void setName(const string &name);
  double getWeight() const;
  void setWeight(const double &weight);
  string getSpeed() const;
  void setSpeed(const string &speed);
  double getHair() const;
  void setHair(const double &hair);
  string getRace() const;
  void setRace(const string &race);
  string getSize() const;
  void setSize(const string &size);
  void print();

};

#endif /* CHARACTER_H */

