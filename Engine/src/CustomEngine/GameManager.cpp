#include "GameManager.h"
#include "Scene.h"

GameManager* GameManager::m_instance = nullptr;

GameManager::GameManager()
{
    m_instance = nullptr;
    m_window = nullptr;
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

template <typename T>
void GameManager::LaunchScene<T>()
{
    static_assert(std::is_base_of<Scene, T>(), "T must be derived from Scene");
    

}

void GameManager::Update()
{
    while (m_window->isOpen())
    {
        m_currentScene->Update();

        m_currentScene->Event(m_window->pollEvent());
    }
}