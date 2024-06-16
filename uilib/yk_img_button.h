#pragma once
#include <qsvgrenderer.h>
#include <qpixmap.h>
#include "yk_basic_button.h"

class YKImgButton : public YKBasicButton {
Q_OBJECT
public:
	YKImgButton(QWidget* parent = nullptr);
	virtual void paintEvent(QPaintEvent* event) override;
	virtual void SetStyle(const BtnStyle& style) override;
protected:
	QSvgRenderer svg_render;
	QPixmap pix_map;
private:
	bool load_img_res_ = false;
};
