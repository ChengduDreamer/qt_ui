#include "yk_basic_button.h"

YKBasicButton::YKBasicButton(QWidget* parent) : QPushButton(parent) {
	setAttribute(Qt::WA_StyledBackground);
	setAttribute(Qt::WA_TranslucentBackground);
}

void YKBasicButton::paintEvent(QPaintEvent* event) {
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(Qt::NoPen);
	painter.save();

	if (style_.border_attr.width > 0) {
		QPen pen{ style_.border_attr.color };
		pen.setWidth(style_.border_attr.width);
		painter.setPen(pen);
	}
	if (isChecked()) {
		painter.setBrush(QBrush(style_.background_attr.checked_color));
	}
	else {
		if (pressed_) {
			painter.setBrush(QBrush(style_.background_attr.press_color));
		}
		else {
			if (cursor_in_) {
				painter.setBrush(QBrush(style_.background_attr.hover_color));
			}
			else {
				painter.setBrush(QBrush(style_.background_attr.normal_color));
			}
			
		}
	}
	painter.drawRoundedRect(0, 0, this->width(), this->height(), style_.border_attr.radius, style_.border_attr.radius);

	painter.restore();
}

void YKBasicButton::leaveEvent(QEvent* event) {
	cursor_in_ = false;
	update();
}
void YKBasicButton::enterEvent(QEnterEvent* event) {
	cursor_in_ = true;
	update();
}
void YKBasicButton::mousePressEvent(QMouseEvent* event) {
	pressed_ = true;
	update();
}
void YKBasicButton::mouseReleaseEvent(QMouseEvent* event) {
	pressed_ = false();
	update();
}

void YKBasicButton::SetStyle(const BtnStyle& style) {
	style_ = style;
}