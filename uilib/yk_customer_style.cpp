#include "yk_customer_style.h"

LabelStyle g_model_1_lab_style;

BtnStyle g_model_1_btn_style;

void initYKStyle() {
	BorderAttribute border_attr;
	border_attr.width = 2;
	border_attr.color = 0xF86F03;
	border_attr.radius = 4;

	TextAttribute text_attr;
	text_attr.bold = false;
	text_attr.px_size = 12;
	text_attr.color = 0x0802A3;
	text_attr.text = QStringLiteral("Test Label");
	text_attr.have_under_line = true;

	BackgroundAttribute background_attr;
	background_attr.normal_color = 0xFFECEC;
	background_attr.hover_color = 0xFFBDF7;
	background_attr.press_color = 0xE1AEFF;
	background_attr.checked_color = 0xFF78C4;

	g_model_1_lab_style.background_attr = background_attr;
	g_model_1_lab_style.text_attr = text_attr;
	g_model_1_lab_style.border_attr = border_attr;

	g_model_1_btn_style.background_attr = background_attr;

	g_model_1_btn_style.text_attr = text_attr;

	g_model_1_btn_style.border_attr = border_attr;
}