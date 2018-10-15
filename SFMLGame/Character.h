#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
#include <iostream>
class Character
{
public:
	Character() = default;
	~Character();
	void initialize();
	void update();
	void draw();

protected:
	sf::Sprite m_sprite;
	sf::Texture m_texture;
	sf::Vector2f m_position;
};
#endif