#include "yk_hbox_layout.h"


YKHBoxLayout::YKHBoxLayout(QWidget* parent) : QHBoxLayout(parent) {
	setContentsMargins(0, 0, 0, 0);
	setSpacing(0);
	setAlignment(Qt::AlignLeft);
}