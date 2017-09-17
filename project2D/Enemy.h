#pragma once
#include "Agent.h"
#include "SteeringBehaviour.h"

class Enemy : public Agent
{
public:
	Enemy(Agent* Target, map<StateE, State*> States, Texture* Sprite, Texture* Hit_Sprite, Vector2 Position);
	~Enemy();

	void Update(float DeltaTime) override;
	void Draw(aie::Renderer2D* renderer) override;

private:

};