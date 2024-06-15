#pragma once
#include <qstring.h>
#include <qcolor.h>

class BorderAttribute {
public:
	int width = 0;
	QColor color = 0xffffff;
	int radius = 0;
};

class TextAttribute {
public:
	QColor color = 0xffffff;
	bool bold = false;
	int px_size = 0;
	QString text = "";
};

class BackgroundAttribute {
public:
	QColor normal_color = 0xffffff;
};

class LabelStyle {
public:
	BorderAttribute border_attr;
	TextAttribute text_attr;
	BackgroundAttribute background_attr;
};