/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/
#include <string>
#include <sstream>
#include <iostream>
#include "MediumCharacterFactory.h"
#include "MediumCharacter.h"

Character* MediumCharacterFactory::createCharacter(const string &data) {
  // instantiates medium character object, sets data member values
  MediumCharacter* mediumCharacter = new MediumCharacter();

  std::istringstream ss(data); 
  while (ss) {
    string field; 
    ss >> field;   
 
    if( !(mediumCharacter->getName()).size() ) {
      mediumCharacter->setName(field);  // set name
      continue;
    }
    if( !(mediumCharacter->getSize()).size() ) {
        mediumCharacter->setSize(field);  // set size
        continue;
    }
    if( !(mediumCharacter->getWeight()) ) {
      double doubleField = std::atof(field.c_str());   
      mediumCharacter->setWeight(doubleField);  // set weight
      continue;
    }
    if( !(mediumCharacter->getSpeed()).size() ) {
      mediumCharacter->setSpeed(field);  // set speed
      continue;
    }
    if( !(mediumCharacter->getHair()) ) {        
      double doubleField = std::atof(field.c_str());   
      mediumCharacter->setHair(doubleField);  // set hair
      continue;
    }
    if( !(mediumCharacter->getRace()).size() ) {
      mediumCharacter->setRace(field); // set race
      continue;
    }
    if( !(mediumCharacter->getWeapon()).size() ) {
      mediumCharacter->setWeapon(field); // set weapon
      continue;
    }
  }
  return mediumCharacter;  
}
