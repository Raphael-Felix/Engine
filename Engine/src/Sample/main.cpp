#include <iostream>
#include "main.h"

#include <SFML/Graphics.hpp>
#include "GameManager.h"

#include "MainScene.h"

int main()
{
    GameManager::Get()->CreateWindow(1560, 840, "Sample");

    GameManager::Get()->LaunchScene<MainScene>();
}