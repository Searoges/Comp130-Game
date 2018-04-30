
#pragma once
class player
{
public:
	player();
	~player();
	void setSprite();
	SDL_Surface plyrSprite;
	void render();
	void rotate();
	void shootLasCannon();
	void shootAssaultCannon();
};

