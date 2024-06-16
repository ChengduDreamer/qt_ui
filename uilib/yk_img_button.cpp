#include "yk_img_button.h"


YKImgButton::YKImgButton(QWidget* parent) : YKBasicButton(parent) {

}

void YKImgButton::SetStyle(const BtnStyle& style) {
	YKBasicButton::SetStyle(style);
	if (EYKImageType::kSvg == style_.img_attr.image_type) {
		load_img_res_ = svg_render.load(style_.img_attr.img_path);
	}
	else if (EYKImageType::kPng == style_.img_attr.image_type) {
		load_img_res_ = pix_map.load(style_.img_attr.img_path);
	}
}

void YKImgButton::paintEvent(QPaintEvent* event) {
	YKBasicButton::paintEvent(event);
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(Qt::NoPen);
	painter.save();
	if (load_img_res_) {
		if (EYKImageType::kSvg == style_.img_attr.image_type) {
			svg_render.render(&painter, this->rect());
		}
		else if (EYKImageType::kPng == style_.img_attr.image_type) {
			painter.drawPixmap(this->rect(), pix_map);
		}
	}
	painter.restore();
}