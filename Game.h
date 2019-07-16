/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef GAME_H
#define GAME_H

#include <fstream>
#include <iostream>
#include <string>
#include "CharacterVector.h"
#include "Character.h"

class Game {
protected:
  CharacterVector m_CharacterVector;
  string m_FileName;
  
public:  
  Game(const string &file) {
    string line;
    std::ifstream myfile (file);
    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
        Character* character = this->readFile(line);
        m_CharacterVector.insertCharacter(character);
      }
      myfile.close();
    }
    else std::cout << "Unable to open file" <<std::endl;   
  };
  
  Game(const Game &orig) = default;
  virtual ~Game() = default;
  
  void getCharacters();
  void getCharactersByRace();
  void getCharactersBySpeed();
  void getCharactersByHair();
  Character* readFile(const string &data) const;
};

#endif /* GAME_H */
