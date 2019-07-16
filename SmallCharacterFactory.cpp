/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/
#include <string>
#include <sstream>
#include <iostream>
#include "SmallCharacterFactory.h"
#include "SmallCharacter.h"

Character* SmallCharacterFactory::createCharacter(const string &data) {
  // instantiates small character object, sets data member values
  SmallCharacter* smallCharacter = new SmallCharacter();
  
  std::istringstream ss(data); 
  while (ss) {
    string field; 
    ss >> field;   
 
    if( !(smallCharacter->getName()).size() ) {
      smallCharacter->setName(field);  // set name
      continue;
    }
    if( !(smallCharacter->getSize()).size() ) {
        smallCharacter->setSize(field);  // set size
    }
    if( !(smallCharacter->getWeight()) ) {
      double doubleField = std::atof(field.c_str());    
      smallCharacter->setWeight(doubleField);  // set weight
      continue;
    }
    if( !(smallCharacter->getSpeed()).size() ) {
      smallCharacter->setSpeed(field);  // set speed
      continue;
    }
    if( !(smallCharacter->getHair()) ) {        
      double doubleField = std::atof(field.c_str());   
      smallCharacter->setHair(doubleField);  // set hair
      continue;
    }
    if( !(smallCharacter->getRace()).size() ) {
      smallCharacter->setRace(field); // set race
      continue;
    }
    if( !(smallCharacter->getisEquipped()) ) {
      bool boolField = false;
      if(field == "TRUE"){boolField = true;}
      else{boolField = false;}
      smallCharacter->setisEquipped(boolField); // set isEquipped
      continue;
    }
  }
  return smallCharacter;  
}
