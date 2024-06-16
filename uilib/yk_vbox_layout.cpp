#include "yk_vbox_layout.h"

YKVBoxLayout::YKVBoxLayout(QWidget* parent) : QVBoxLayout(parent) {
	setContentsMargins(0, 0, 0, 0);
	setSpacing(0);
	setAlignment(Qt::AlignTop);
}