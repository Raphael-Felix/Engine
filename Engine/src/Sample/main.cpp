#include <iostream>
#include "main.h"

#include <SFML/Graphics.hpp>
#include "GameManager.h"

int main()
{
    GameManager::Get()->CreateWindow(640, 640);

    GameManager::Get()->LaunchScene();
}