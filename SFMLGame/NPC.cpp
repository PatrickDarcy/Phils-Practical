#include <NPC.h>

NPC::NPC()
{
	m_position = { 200, 200 };
	if (!m_texture.loadFromFile("Resources/NPC.png"))
	{
		std::cout << "Not loading" << std::endl;
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(m_position);
	m_sprite.setScale(0.125, 0.125);
};
NPC::~NPC(){};

void NPC::initialize()
{
	//cout << "NPC initialize" << endl;
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow *t_window)
{
	t_window->draw(m_sprite);
	//cout << "NPC drawing" << endl;
}