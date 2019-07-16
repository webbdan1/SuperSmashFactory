/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/
#include <string>
#include <sstream>
#include <iostream>
#include "BigCharacterFactory.h"
#include "BigCharacter.h"

Character* BigCharacterFactory::createCharacter(const string &data) {
  // instantiates big character object, sets data member values
  BigCharacter* bigCharacter = new BigCharacter();
  
  std::istringstream ss(data); 
  while (ss) {
    string field; 
    ss >> field;   
 
    if( !(bigCharacter->getName()).size() ) {
      bigCharacter->setName(field);  // set name
      continue;
    }
    if( !(bigCharacter->getSize()).size() ) {
        bigCharacter->setSize(field);  // set size
        continue;
    }
    if( !(bigCharacter->getWeight()) ) {
      std::size_t offset = 0; 
      double doubleField = std::atof(field.c_str());   
      bigCharacter->setWeight(doubleField);  // set weight
      continue;
    }
    if( !(bigCharacter->getSpeed()).size() ) {
      bigCharacter->setSpeed(field);  // set speed
      continue;
    }
    if( !(bigCharacter->getHair()) ) {        
      double doubleField = std::atof(field.c_str());   
      bigCharacter->setHair(doubleField);  // set hair
      continue;
    }
    if( !(bigCharacter->getRace()).size() ) {
      bigCharacter->setRace(field); // set race
      continue;
    }
    if( !(bigCharacter->getSkill()).size() ) {
      bigCharacter->setSkill(field); // set skill
      continue;
    }
  }
  return bigCharacter;  
}
