#include "Player.h"

Player::Player(const string &username, const string &name)
    : m_username(username), m_name(name) // initializers, same result as below
{
}

// Player::Player(const string &username, const string &name)
// {
//     this->m_username = username;
//     this->m_name = name;
// }

const string &Player::GetName()
{
    return this->m_name;
}

const string &Player::GetUsername()
{
    return this->m_username;
}

void Player::SetName(const string &name)
{
    this->m_name = name;
}