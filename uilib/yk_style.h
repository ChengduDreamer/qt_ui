#pragma once
#include <qstring.h>
#include <qcolor.h>

enum class EYKImageType {
	kPng,
	kSvg
};

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
	bool have_under_line = false;
};

class BackgroundAttribute {
public:
	QColor normal_color = 0xffffff;
	QColor hover_color = 0xffffff;
	QColor press_color = 0xffffff;
	QColor checked_color = 0xffffff;
};

class ImageAttribute {
public:
	EYKImageType image_type = EYKImageType::kPng;
	QString img_path;
};

class LabelStyle {
public:
	BorderAttribute border_attr;
	TextAttribute text_attr;
	BackgroundAttribute background_attr;
};

class BtnStyle {
public:
	BorderAttribute border_attr;
	TextAttribute text_attr;
	BackgroundAttribute background_attr;
	ImageAttribute img_attr;
};