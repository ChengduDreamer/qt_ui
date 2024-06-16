#include "yk_text_button.h"

YKTextButton::YKTextButton(QWidget* parent) : YKBasicButton(parent) {

}

void YKTextButton::paintEvent(QPaintEvent* event) {
	YKBasicButton::paintEvent(event);
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(Qt::NoPen);
	painter.save();
	
	auto font = painter.font();
	font.setFamily("Microsoft YaHei");
	font.setPixelSize(style_.text_attr.px_size);
	font.setBold(style_.text_attr.bold);
	font.setUnderline(style_.text_attr.have_under_line);
	painter.setPen(QColor{ style_.text_attr.color });
	painter.setFont(font);
	painter.drawText(this->rect(), Qt::AlignCenter, style_.text_attr.text);

	painter.restore();
}