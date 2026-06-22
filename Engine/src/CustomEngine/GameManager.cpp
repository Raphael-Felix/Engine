#include "GameManager.h"
#include "Scene.h"

GameManager* GameManager::m_instance = nullptr;

GameManager::GameManager()
{
    m_instance = nullptr;
    m_window = nullptr;

    m_currentScene = nullptr;
}

GameManager* GameManager::Get()
{
    if (m_instance == nullptr)
        m_instance = new GameManager();

    return m_instance;
}

void GameManager::CreateWindow(unsigned int width, unsigned int height, std::string title, sf::Color color)
{
    m_window = new sf::RenderWindow(sf::VideoMode(sf::Vector2u( width, height )), title);
}

void GameManager::Run()
{
    while (m_window->isOpen())
    {
        float dt = 0;

        m_currentScene->Update(dt);

        if (const auto event = m_window->pollEvent())
        {
            if ((*event).is<sf::Event::Closed>())
            {
                m_window->close();
            }

            m_currentScene->Event(*event);
        }

        m_window->clear();
        m_currentScene->Draw();
    }
}