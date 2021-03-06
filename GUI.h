#pragma once
#include "Includes.h"
class Button
{
public:
	sf::Vector2f upperLimit, lowerLimit;
};
class interactiveButton
{
public:
	RectangleShape shape;
	Texture normal;
	Texture hover;
	Texture special;
	Button button;
	pair<string, int> TypeAndValue;
	void Reset()
	{
		shape.setSize(Vector2f(0,0));
		button.lowerLimit = Vector2f(0, 0);
		button.upperLimit = Vector2f(0, 0);
	}
};
class GUI
{
public:
	GUI();
	void ProgramRun(RenderWindow &window, interactiveButton Card[14], Sprite BackGround,interactiveButton RoundDone);
	void SetTextures(Texture Spades[15], Texture Hearts[15], Texture Diamonds[15], Texture Clubs[15], Texture &Background);
	void PlayerCardsSetup( vector < pair<int, string>> Players, interactiveButton Card[14], Texture Spades[15], Texture Hearts[15], Texture Diamonds[15], Texture Clubs[15]);
	void normalize(interactiveButton &ib);
	void RectButtonAssign(interactiveButton &ib);
	bool isButtonHovered(interactiveButton ib, RenderWindow &window);
	bool LMB();
	bool ibuttonAutoHover(interactiveButton &ib, sf::RenderWindow &window);
	void hang();

	~GUI();
};

