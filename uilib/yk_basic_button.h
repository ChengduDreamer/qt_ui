#pragma once
#include <qpushbutton.h>
#include <qpainter.h>
#include <qevent.h>
#include "yk_style.h"

//YKBasicButton, as the parent class for other buttons, does not display text or icons.

class YKBasicButton : public QPushButton {
	Q_OBJECT
public:
	YKBasicButton(QWidget* parent = nullptr);
	virtual void SetStyle(const BtnStyle& style);
	virtual void paintEvent(QPaintEvent* event) override;
	virtual void leaveEvent(QEvent* event) override;
	virtual void enterEvent(QEnterEvent* event);
	virtual void mousePressEvent(QMouseEvent* event) override;
	virtual void mouseReleaseEvent(QMouseEvent* event) override;
protected:
	bool cursor_in_ = false; // 鼠标进入
	bool pressed_ = false;   // 鼠标按下
	BtnStyle style_;
};
