#ifndef PLAYER_H
#define PLAYER_H

#include<string_view>
#include<string>
#include<iostream>
#include "person.h"

class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);
public:
    Player() = default;
    Player(std::string_view first_name_param, std::string_view last_name_param, std::string_view game_param);

private:
    std::string m_game{"None"};
};

Player::Player(std::string_view first_name_param, std::string_view last_name_param, std::string_view game_param) 
{
    first_name = first_name_param;
    last_name = last_name_param;
    m_game = game_param;
}

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player [ game : " << player.m_game << " names : " << player.get_first_name() << " " << player.get_last_name() << " ]";
    return out;
}

#endif
