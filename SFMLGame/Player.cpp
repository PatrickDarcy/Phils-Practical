#include <Player.h>

Player::Player()
{
	m_position = { 100,100 };
	if (!m_texture.loadFromFile("Resources/Patrick.png"))
	{
		std::cout << "Not loading" << std::endl;
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(m_position);
	m_sprite.setScale(0.25, 0.25);
};
Player::~Player(){};

void Player::initialize()
{
	//cout << "Player initialize" << endl;
}
void Player::update()
{
	float x = m_position.x;
	float y = m_position.y;

	//cout << "Player updating" << endl;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		y -= 10;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		y += 10;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		x -= 10;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		x += 10;
	}

	m_position = { x,y };
	m_sprite.setPosition(m_position);

}
void Player::draw(sf::RenderWindow *t_window)
{
	t_window->draw(m_sprite);
	//cout << "Player drawing" << endl;
}