#pragma once

#include "Screen.h"
#include "TButton.h"

class ImageWithBackground;

namespace Touch
{ // Size : 224
class StartMenuScreen : public Screen
{
public:
	static int mCurrentSplash;
	static std::vector<std::string> mSplashes;

public:
	std::shared_ptr<Touch::TButton> playButton_ptr;				// 160
	std::shared_ptr<Touch::TButton> realmButton_ptr;			// 168
	std::shared_ptr<ImageWithBackground> optionButton_ptr;		// 176
	std::shared_ptr<ImageWithBackground> languageButton_ptr;	// 184
	char filler1[32];											// 192

public:
	StartMenuScreen();
	virtual ~StartMenuScreen();
	virtual void handleBackEvent(bool);
	virtual void render(int, int, float);
	virtual void init();
	virtual void setupPositions();
	virtual void tick();
	virtual void _buttonClicked(Button &);
	virtual void _controllerDirectionChanged(int, StickDirection);
};
};
