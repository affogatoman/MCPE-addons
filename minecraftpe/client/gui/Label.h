#pragma once

#include "GuiElement.h"

// Size : 84
class Label : public GuiElement
{
public:
	std::string displayString;	// 48
	MinecraftClient* mc;		// 52
	Color color;				// 56
	char filler1[8];			// 72
	bool isWidthSet;			// 80
	bool hasShadow;				// 81
	bool centered;				// 82
	bool isPointerPressed;		// 83

public:
	Label(MinecraftClient &, const std::string &, const Color &, int, int, int, bool);
	virtual ~Label();
	virtual void render(MinecraftClient *, int, int);
	virtual void setupPositions();
	virtual std::string getText() const;
	virtual void setText(std::string);
	virtual void setTextRaw(const std::string &);
	virtual void setWidth(int);
	virtual void setColor(const Color &);
	void setCentered(bool);
};
