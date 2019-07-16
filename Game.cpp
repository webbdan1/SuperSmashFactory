/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include <iostream>
using std::cout; using std::endl;
#include <sstream>
#include "Game.h"
#include "BubbleSort.h"
#include "SmallCharacterFactory.h"
#include "MediumCharacterFactory.h"
#include "BigCharacterFactory.h"
#include "CharacterVectorSortByHair.h"
#include "CharacterVectorSortByRace.h"
#include "CharacterVectorSortBySpeed.h"


Character* Game::readFile(const string &data) const {
  // instantiates character factory to create Character*
  Character* aCharacter;
  std::istringstream ss(data); 
  
  // retrieve size of player
  int count = 0;
  string size;
  while (ss) {
    if(count>0) { 
      ss >> size;
      break;
    }
    ss >> size;
    count += 1;
  }
   
  // instantiate proper factory and build new character
  if(size == "small") {
    SmallCharacterFactory aSmallFactory;
    aCharacter = aSmallFactory.createCharacter(data);
  }
  if(size == "med") {
    MediumCharacterFactory aMediumFactory;
    aCharacter = aMediumFactory.createCharacter(data);
  }
  if(size == "big") {
    BigCharacterFactory aBigFactory;
    aCharacter = aBigFactory.createCharacter(data);
  }    
  return aCharacter;
}

void Game::getCharacters() {
  // prints list of characters -- blank if no sisters
  if(m_CharacterVector.getSize()) {
    cout<<"************ Printing Sisters ************"<<endl;
    m_CharacterVector.print();
    cout<<"************ **************** ************"<<endl;
    cout<<endl;
  }
}

void Game::getCharactersByRace() {
  // sorts characters by race and prints if sisters are in game
  CharacterVectorSortByRace cr(m_CharacterVector);
  if(cr.getSize()) {
    BubbleSort bs;
    bs.sort(&cr);
    cout<<"************ Printing Sisters: Order by Race ************"<<endl;
    cr.print();
    cout<<"************ **************** ************"<<endl;
    cout<<endl;
  }
}

void Game::getCharactersBySpeed() {
  // sorts characters by speed and prints
  CharacterVectorSortBySpeed cs(m_CharacterVector);
  if(cs.getSize()) {
    BubbleSort bs;
    bs.sort(&cs);
    cout<<"************ Printing Sisters: Order by Speed ************"<<endl;
    cs.print();
    cout<<"************ **************** ************"<<endl;
    cout<<endl;
  }
}

void Game::getCharactersByHair() {
  // sorts characters by hair and prints
  CharacterVectorSortByHair ch(m_CharacterVector);
  if(ch.getSize()) {
    BubbleSort bs;
    bs.sort(&ch);
    cout<<"************ Printing Sisters: Order by Hair ************"<<endl;
    ch.print();
    cout<<"************ **************** ************"<<endl;
    cout<<endl;
  }
}
