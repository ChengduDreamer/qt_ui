#pragma once
#include <qlabel.h>
#include <qpainter.h>
#include "yk_style.h"

class YKLabel : public QLabel {
public:
	YKLabel(QWidget* parent = nullptr);
	virtual void paintEvent(QPaintEvent* paint_event) override;
	void SetStyle(const LabelStyle& style);
private:
	LabelStyle style_;
};
