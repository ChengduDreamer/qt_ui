#pragma once
#include <qpushbutton.h>
#include <qpainter.h>
#include <qevent.h>
#include "yk_style.h"

class YKBasicButton : public QPushButton {
	Q_OBJECT
public:
	YKBasicButton(QWidget* parent = nullptr);
	void SetStyle(const BtnStyle& style);
	virtual void paintEvent(QPaintEvent* event) override;
	virtual void leaveEvent(QEvent* event) override;
	virtual void enterEvent(QEnterEvent* event);
	virtual void mousePressEvent(QMouseEvent* event) override;
	virtual void mouseReleaseEvent(QMouseEvent* event) override;
private:
	bool cursor_in_ = false; // ������
	bool pressed_ = false;   // ��갴��
	BtnStyle style_;
};
