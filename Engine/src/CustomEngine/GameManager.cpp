#include "GameManager.h"
#include "Scene.h"

GameManager* GameManager::m_instance = nullptr;

GameManager::GameManager()
{
    m_instance = nullptr;
}

GameManager* GameManager::Get()
{
    if (m_instance == nullptr)
        m_instance = new GameManager();

    return m_instance;
}

void GameManager::CreateWindow(unsigned int width, unsigned int height, sf::Color color)
{
    m_window = new sf::RenderWindow(sf::VideoMode(sf::Vector2u( width, height )), "SFML works!");
}

void GameManager::LaunchScene()
{
    Update();
}

void GameManager::Update()
{
    while (m_window->isOpen())
    {
        while (const std::optional event = m_window->pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                m_window->close();
        }

        m_window->clear();
        m_window->display();
    }
}