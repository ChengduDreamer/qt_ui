#pragma once
#include "yk_basic_button.h"

class YKTextButton : public YKBasicButton {
	Q_OBJECT
public:
	YKTextButton(QWidget* parent = nullptr);
	virtual void paintEvent(QPaintEvent* event) override;
};
