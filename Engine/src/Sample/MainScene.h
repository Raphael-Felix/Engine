#pragma once
#include "Scene.h"

class MainScene :
    public Scene
{
public:
    void OnEnterScene() override;
    void OnExitScene() override;

    void OnUpdate(float dt) override;

    void OnEvent(const sf::Event& event) override;

    void OnDraw() override;
};

