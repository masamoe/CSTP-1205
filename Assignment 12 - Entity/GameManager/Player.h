#pragma once
#include <iostream>
#include "Entity.h"

using namespace std;

class Player : public Entity
{
private:
    string m_username;
    string m_name;

public:
    // Default constructor
    Player();
    Player(const string &username, const string &name);

    // Destructor called when the object is out of scope
    ~Player();

    const string &GetName();
    const string &GetUsername();
    void SetName(const string &name);

    // Overload meathods need to have different parameters
    void SetName(const string &name, const string &lastName);

    // assignment operator for Player class
    const Player &operator=(const Player &player);
};