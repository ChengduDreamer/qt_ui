#include <qapplication.h>
#include <qwidget.h>
#include "yk_customer_style.h"
#include "yk_label.h"
#include "yk_vbox_layout.h"
#include "yk_hbox_layout.h"
#include "yk_basic_button.h"

int main(int argc,char** argv){
	initYKStyle();
	QApplication app(argc, argv);
	QWidget widget{};
	widget.resize(1200, 900);

	auto vbox_main_layout = new YKVBoxLayout(&widget);

	auto hbox_line_1_layout = new YKHBoxLayout();

	YKLabel* yk_lab = new YKLabel(&widget);
	yk_lab->SetStyle(g_model_1_lab_style);
	yk_lab->setFixedSize(100, 30);
	hbox_line_1_layout->addWidget(yk_lab);

	YKBasicButton* basic_button = new YKBasicButton(&widget);
	basic_button->SetStyle(g_model_1_btn_style);
	basic_button->setFixedSize(100, 30);

	hbox_line_1_layout->addSpacing(8);
	hbox_line_1_layout->addWidget(basic_button);

	vbox_main_layout->addLayout(hbox_line_1_layout);

	widget.show();
	app.exec();
	return 0;
}