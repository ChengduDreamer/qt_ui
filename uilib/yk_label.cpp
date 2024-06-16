#include "yk_label.h"
#include <qfont.h>

YKLabel::YKLabel(QWidget* parent) : QLabel(parent) {
	setAttribute(Qt::WA_StyledBackground);
	setAttribute(Qt::WA_TranslucentBackground);
}

void YKLabel::paintEvent(QPaintEvent* paint_event) {
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(Qt::NoPen);
	painter.save();

	if (style_.border_attr.width > 0) {
		QPen pen{ style_.border_attr.color };
		pen.setWidth(style_.border_attr.width);
		painter.setPen(pen);
	}
	painter.setBrush(QBrush(style_.background_attr.normal_color));
	painter.drawRoundedRect(0, 0, this->width(), this->height(), style_.border_attr.radius, style_.border_attr.radius);
	painter.setBrush(Qt::NoBrush);
	
	auto font = painter.font();
	font.setFamily("Microsoft YaHei");
	font.setPixelSize(style_.text_attr.px_size);
	font.setBold(style_.text_attr.bold);
	font.setUnderline(style_.text_attr.have_under_line);
	painter.setPen(QColor{ style_ .text_attr.color});
	painter.setFont(font);
	//By default, the text will be centered, and we will consider padding and other adjustments later.
	painter.drawText(this->rect(), Qt::AlignCenter, style_.text_attr.text);

	painter.restore();
}

void YKLabel::SetStyle(const LabelStyle& style) {
	style_ = style;
}