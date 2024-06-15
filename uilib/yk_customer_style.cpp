#include "yk_customer_style.h"

LabelStyle g_model_1_lab_style;

void initYKStyle() {
	BorderAttribute border_attr;
	border_attr.width = 1;
	border_attr.color = 0x1D5D9B;
	border_attr.radius = 4;

	TextAttribute text_attr;
	text_attr.bold = false;
	text_attr.px_size = 12;
	text_attr.color = 0x0802A3;
	text_attr.text = QStringLiteral("Test Label");

	BackgroundAttribute background_attr;
	background_attr.normal_color = 0x7BD3EA;

	g_model_1_lab_style.background_attr= background_attr;
	g_model_1_lab_style.text_attr = text_attr;
	g_model_1_lab_style.border_attr = border_attr;
}