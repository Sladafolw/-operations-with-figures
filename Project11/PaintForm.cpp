#include "PaintForm.h"
//#include <amp_graphics.h>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>


#define PI 3.14159265 
#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project11::PaintForm form;
	Application::Run(% form);
}

ref class Figure
{
public:
	int point2X, point2Y, point3X, point3Y, point4X, point4Y;
	//	cli::array<int>^ myArrayX;
		//cli::array<int>^ myArrayY;
		 //int CenterX; int CenterY;
public:System::Drawing::Color color1;
public:int startX, startY, width, height;
	  Figure^ a;
	  Figure^ b;

public:void virtual setRegion();
public:void virtual draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas);
public:System::Drawing::Drawing2D::GraphicsPath^ Polygon;
	  System::Drawing::Region^ region;
	  System::Drawing::SolidBrush::Brush^ myBrush;
};

ref class MyRectangle :public Figure
{

public:void setRegion() override {
	cli::array<System::Drawing::Point>^ pts = { System::Drawing::Point(startX, startY), System::Drawing::Point(point2X, point2Y), System::Drawing::Point(point3X, point3Y), System::Drawing::Point(point4X, point4Y) };
	Polygon = gcnew System::Drawing::Drawing2D::GraphicsPath();
	Polygon->AddPolygon(pts);
	region = gcnew System::Drawing::Region(Polygon);
}

public: void draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
{


	canvas->FillRegion(myBrush, region);
}


};

ref class Triangle :public Figure
{

public:void setRegion() override {
	cli::array<System::Drawing::Point>^ pts =
	{ System::Drawing::Point(startX, startY),System::Drawing::Point(point2X, point2Y), System::Drawing::Point(point3X, point3Y) };
	Polygon = gcnew System::Drawing::Drawing2D::GraphicsPath();
	Polygon->AddPolygon(pts);
	region = gcnew System::Drawing::Region(Polygon);
}
public: void  draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
{

	canvas->FillRegion(myBrush, region);
}

};
ref class Rhombus :public Figure
{

//public: void selectedFigure(Figure^ a, System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
//{
//	canvas->FillRegion(myBrush, a->region);
//}
public:void setRegion() override {
	cli::array<System::Drawing::Point>^ pts =
	{ System::Drawing::Point(startX, startY),System::Drawing::Point(point2X, point2Y), System::Drawing::Point(point3X, point3Y),System::Drawing::Point(point4X, point4Y) };
	Polygon = gcnew System::Drawing::Drawing2D::GraphicsPath();
	Polygon->AddPolygon(pts);
	region = gcnew System::Drawing::Region(Polygon);
}
public:
	void draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
	{


		canvas->FillRegion(myBrush, region);

	}



};

ref class Circle :public Figure
{

public:void setRegion() override {
	Polygon = gcnew System::Drawing::Drawing2D::GraphicsPath();
	Polygon->AddEllipse((static_cast<float>(startX)), (static_cast<float>(startY)), (static_cast<float>(width)), (static_cast<float>(height)));
	region = gcnew System::Drawing::Region(Polygon);
}
public:
	void  draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
	{

		canvas->FillRegion(myBrush, region);


	}


};


ref class MyEllipse :public Figure
{

public:void setRegion() override {

	Polygon = gcnew System::Drawing::Drawing2D::GraphicsPath();
	Polygon->AddEllipse((static_cast<float>(startX)), (static_cast<float>(startY)), (static_cast<float>(width)), (static_cast<float>(height)));
	region = gcnew System::Drawing::Region(Polygon);
}
public:
	void draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
	{

		canvas->FillRegion(myBrush, region);


	}
};

ref class TwoObject : public Figure
{


public: TwoObject(Figure^ a, Figure^ b)
{
	this->a = a;
	this->b = b;

}
public:void setRegion()override
{
	region = a->region;
	region->Union(b->region);
}

public:
	void draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
	{

		canvas->FillRegion(myBrush, region);

	}
};

ref class Rez : public Figure
{


public: Rez(Figure^ a, Figure^ b)
{
	this->a = a;
	this->b = b;

}
public:void setRegion()override
{
	region = a->region;
	region->Xor(b->region);
}


public:
	void draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
	{

		canvas->FillRegion(myBrush, region);

	}
};
ref class Pers : public Figure
{

public:Pers(Figure^ a, Figure^ b)
{
	this->a = a; this->b = b;

}
public:void setRegion()override
{
	System::Drawing::Region^ region1 = a->region;
	region1->Intersect(b->region);
	region = region1;


}
public:void draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas) override
{
	System::Drawing::Color color = System::Drawing::Color::Green;
	myBrush = gcnew System::Drawing::SolidBrush(color);

	canvas->FillRegion(myBrush, region);



}

};





void Figure::draw(System::Drawing::SolidBrush::Brush^ myBrush, System::Drawing::Graphics^ canvas)
{
	throw gcnew System::NotImplementedException();
}
void Figure::setRegion()
{
	throw gcnew System::NotImplementedException();
}






struct Vector2D {
	int X,
		Y;
};
Vector2D mousePosition;

Project11::PaintForm::PaintForm(void)
{
	InitializeComponent();

	openFileDialog1->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
	saveFileDialog1->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
}



System::Void Project11::PaintForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{


	mousePosition.X = e->Location.X;
	mousePosition.Y = e->Location.Y;



}

System::Void Project11::PaintForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{

	pictureBox1->Invalidate();

}

System::Void Project11::PaintForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{

	//Проверка, чем рисуем
	switch (statePen)
	{

	case 1://рисуем прямоугольник
		if (mousePosition.X != -1 && mousePosition.Y != -1 && mousePosition.Y > 150)
		{
			int width = Convert::ToInt32(numericUpDownWidthRectangle->Value);
			int height = Convert::ToInt32(numericUpDownHeightRectangle->Value);
			if (width != height) {
				MyRectangle^ rectangle = gcnew MyRectangle();
				rectangle->width = width;
				rectangle->height = height;
				rectangle->startX = mousePosition.X;
				rectangle->startY = mousePosition.Y;
				rectangle->point2X = rectangle->startX;
				rectangle->point2Y = rectangle->startY + height;
				rectangle->point3X = rectangle->startX + width;
				rectangle->point3Y = rectangle->startY + height;
				rectangle->point4X = rectangle->startX + width;
				rectangle->point4Y = rectangle->startY;
				rectangle->color1 = pen->Color;
				System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
				rectangle->myBrush = myBrush;
				rectangle->setRegion();
				rectangle->draw(myBrush, canvas);
				listBoxFigures->Items->Add(rectangle);
				mousePosition.X = -1;
				mousePosition.Y = -1;
				break;
			}
			else
			{


				MessageBox::Show("ОШИБКА У ПРЯМОУГОЛЬНИКА НЕ МОГУТ БЫТЬ РАВНА ВЫСОТА И ШИРИНА!");
				mousePosition.X = -1;
				mousePosition.Y = -1;
				break;
			}

		}

	case 2://рисуем ромб

		if (mousePosition.X != -1 && mousePosition.Y != -1 && mousePosition.Y > 175)
		{
			int diaogonal1 = Convert::ToInt32(numericUpDownRhombus1->Value);
			int diaogonal2 = diaogonal1;
			Rhombus^ rhombus = gcnew Rhombus;
			rhombus->startX = mousePosition.X;
			rhombus->startY = mousePosition.Y;
			rhombus->point2Y = mousePosition.Y - diaogonal1 / 2;
			rhombus->point2X = mousePosition.X - diaogonal2 / 2;
			rhombus->point3Y = mousePosition.Y - diaogonal1;
			rhombus->point3X = mousePosition.X;
			rhombus->point4Y = mousePosition.Y - diaogonal1 / 2;
			rhombus->point4X = mousePosition.X + diaogonal2 / 2;
			rhombus->color1 = pen->Color;
			rhombus->setRegion();
			System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
			rhombus->myBrush = myBrush;
			rhombus->draw(myBrush, canvas);
			listBoxFigures->Items->Add(rhombus);
			mousePosition.X = -1;
			mousePosition.Y = -1;
			break;
			

		}
	case 3://рисуем круг

		if (mousePosition.X != -1 && mousePosition.Y != -1 && mousePosition.Y > 160)
		{
			int width = Convert::ToInt32(numericUpDownWidthCircle->Value);
			int height = width;
			Circle^ circle = gcnew Circle;
			circle->startX = mousePosition.X;
			circle->startY = mousePosition.Y;
			circle->width = width;
			circle->height = height;
			circle->color1 = pen->Color;
			circle->setRegion();
			System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
			circle->myBrush = myBrush;
			circle->draw(myBrush, canvas);
			listBoxFigures->Items->Add(circle);
			mousePosition.X = -1;
			mousePosition.Y = -1;
			break;
		}

	case 4:
		if (mousePosition.X != -1 && mousePosition.Y != -1 && mousePosition.Y > 179) {

			int lenght = Convert::ToInt32(numericUpDown2->Value);
			Triangle^ triangle = gcnew Triangle;
			triangle->startX = mousePosition.X;
			triangle->startY = mousePosition.Y;
			triangle->point2X = mousePosition.X;
			triangle->point2Y = mousePosition.Y - lenght;
			triangle->point3X = mousePosition.X + lenght;
			triangle->point3Y = mousePosition.Y;
			triangle->color1 = pen->Color;
			triangle->setRegion();
			System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
			triangle->myBrush = myBrush;
			triangle->draw(myBrush, canvas);
			listBoxFigures->Items->Add(triangle);
			mousePosition.X = -1;
			mousePosition.Y = -1;


		}	break;

	case 5://рисуем ellipse

		if (mousePosition.X != -1 && mousePosition.Y != -1 && mousePosition.Y > 160)
		{

			int width = Convert::ToInt32(numericUpDownEllipse1->Value);
			int height = Convert::ToInt32(numericUpDownEllipse2->Value);
			if (width != height) {
				MyEllipse^ ellipse = gcnew MyEllipse;
				ellipse->startX = mousePosition.X;
				ellipse->startY = mousePosition.Y;
				ellipse->width = width;
				ellipse->height = height;
				ellipse->color1 = pen->Color;
				ellipse->setRegion();
				System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
				ellipse->myBrush = myBrush;
				ellipse->draw(myBrush, canvas);
				listBoxFigures->Items->Add(ellipse);
				mousePosition.X = -1;
				mousePosition.Y = -1;
				break;
			}
			else
			{


				MessageBox::Show("ОШИБКА У ЭЛИПССА НЕ МОГУТ БЫТЬ РАВНА ВЫСОТА И ШИРИНА!");
				mousePosition.X = -1;
				mousePosition.Y = -1;
				break;
			}

		}


	default:
		mousePosition.X = -1;
		mousePosition.Y = -1;
		break;


	}


}


System::Void Project11::PaintForm::PaintForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//Инициализируем данные
	color = Color::YellowGreen;
	size = 3;
	pen = gcnew Pen(color, size);
	statePen = 0;
	buttonColorChange->BackColor = color;
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveRhombus->BackColor = Color::LightGray;
	ButtonActivateRectangle->BackColor = Color::LightGray;
	buttonActiveTriangle->BackColor = Color::LightGray;
	buttonActiveEllipse->BackColor = Color::LightGray;
	//this->pictureBox1->Width = 1900;
	//this->pictureBox1->Height = 1000;
	Bitmap^ Img = gcnew Bitmap(1900, 1000);
	canvas = Graphics::FromImage(Img);
	pictureBox1->Image = Img;
	pictureBox1->BackColor = Color::White;
	filename = "openFileDialog1";
}

System::Void Project11::PaintForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Project11::PaintForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("это приложение написано Славой ");
}



System::Void Project11::PaintForm::сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ fname;
	saveFileDialog1->ShowDialog();//показываем диолог для сохранения
	fname = saveFileDialog1->FileName;//запоминаем расположение сохранения

	//Проверяем 
	if (fname == "")
		return;

	//Запоминаем изображение
	Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
	img->Save(fname);//сохраняем

	MessageBox::Show("Изображение сохранено по адресу \"" + fname + "\".", "Внимание!");


}

System::Void Project11::PaintForm::панельЭлементовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxToolbar->Visible) {
		groupBoxToolbar->Visible = false;
	}
	else {
		groupBoxToolbar->Visible = true;
		groupBoxToolbar->Location = Point(0, 20);
	}


}

System::Void Project11::PaintForm::buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e)
{
	//size = Convert::ToSingle(numericUpDownSize->Value);
	//pen = gcnew Pen(color, size);
}

System::Void Project11::PaintForm::buttonColor_Click(System::Object^ sender, System::EventArgs^ e)
{
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;
	pen = gcnew Pen(color, size);
}

System::Void Project11::PaintForm::buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e)
{

	listBoxFigures->Items->Clear();
	listBox2Figures->Items->Clear();
	pictureBox1->Invalidate();
	canvas->Clear(Color::White);
	
}


System::Void Project11::PaintForm::buttonActiveRhombus_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 2;
	//меняем цвет кнопки активной фигуры
	buttonActiveRhombus->BackColor = Color::Green;

	//меняем цвет кнопом не активных фигур
	buttonActiveCircle->BackColor = Color::LightGray;

	buttonActiveTriangle->BackColor = Color::LightGray;
	ButtonActivateRectangle->BackColor = Color::LightGray;
	buttonActiveEllipse->BackColor = Color::LightGray;

	//активируем настройки квадрата
	groupBoxSettingsRhombus->Visible = true;
	groupBoxSettingsRhombus->Location = Point(1200, 28);

	//деактивируем остальные настройки
	groupBoxSettingsEllipse->Visible = false;
	groupBoxSettingsCircle->Visible = false;
	groupBoxSettingsRectangle->Visible = false;
	groupBox2Triangle->Visible = false;
}



System::Void Project11::PaintForm::buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
	//меняем состояние пера
	statePen = 3;
	//меняем цвет кнопки активной фигуры
	buttonActiveCircle->BackColor = Color::Green;

	//меняем цвет кнопом не активных фигур
	buttonActiveRhombus->BackColor = Color::LightGray;
	buttonActiveTriangle->BackColor = Color::LightGray;
	buttonActiveEllipse->BackColor = Color::LightGray;
	ButtonActivateRectangle->BackColor = Color::LightGray;

	//активируем настройки круга
	groupBoxSettingsCircle->Visible = true;
	groupBoxSettingsCircle->Location = Point(1200, 28);

	//деактивируем остальные настройки
	groupBox2Triangle->Visible = false;
	groupBoxSettingsRhombus->Visible = false;
	groupBoxSettingsRectangle->Visible = false;
	groupBoxSettingsEllipse->Visible = false;

}

System::Void Project11::PaintForm::buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Width = Convert::ToInt32(numericUpDownWigtnForm->Value);
	this->Height = Convert::ToInt32(numericUpDownHeightForm->Value);

	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}


	filename = "openFileDialog1";
	groupBox1->Visible = true;
	groupBox2->Visible = true;
}



System::Void Project11::PaintForm::ButtonActivateRectangle_Click(System::Object^ sender, System::EventArgs^ e)
{//Проверяем состояние пера
	{

		//меняем состояние пера
		statePen = 1;

		//меняем цвет кнопки активной фигуры
		ButtonActivateRectangle->BackColor = Color::Green;

		//меняем цвет кнопом не активных фигур
		buttonActiveRhombus->BackColor = Color::LightGray;
		buttonActiveTriangle->BackColor = Color::LightGray;
		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveEllipse->BackColor = Color::LightGray;
		//активируем настройки
		groupBoxSettingsRectangle->Visible = true;
		groupBoxSettingsRectangle->Location = Point(1200, 28);

		//деактивируем остальные настройки
		groupBoxSettingsRhombus->Visible = false;
		groupBoxSettingsCircle->Visible = false;
		groupBoxSettingsEllipse->Visible = false;
		groupBox2Triangle->Visible = false;
	}

}




System::Void Project11::PaintForm::buttonActiveTriangle_Click(System::Object^ sender, System::EventArgs^ e)
{
	{statePen = 4;


	//меняем цвет кнопки активной фигуры
	groupBox2Triangle->Visible = true;
	buttonActiveTriangle->BackColor = Color::Green;

	//меняем цвет кнопом не активных фигур
	buttonActiveRhombus->BackColor = Color::LightGray;
	buttonActiveEllipse->BackColor = Color::LightGray;
	buttonActiveCircle->BackColor = Color::LightGray;
	ButtonActivateRectangle->BackColor = Color::LightGray;

	//активируем настройки круга

	groupBox2Triangle->Location = Point(1200, 28);

	//деактивируем остальные настройки
	groupBoxSettingsCircle->Visible = false;
	groupBoxSettingsRhombus->Visible = false;
	groupBoxSettingsRectangle->Visible = false;
	groupBoxSettingsEllipse->Visible = false;
	}


}



System::Void Project11::PaintForm::PaintForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	e->Handled = true;



	Figure^ MyFigure = (Figure^)listBoxFigures->SelectedItem;
	if (MyFigure != nullptr) {
		Pen^ defaultPen = gcnew Pen(Color::White, 1);
		System::Drawing::SolidBrush::Brush^ myBrush1 = gcnew System::Drawing::SolidBrush(defaultPen->Color);
		Pen^ penToDraw = gcnew Pen(MyFigure->color1, 1);
		System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(penToDraw->Color);
		if (listBoxFigures->SelectedItem == nullptr)
		{
			return;
		}


		MyFigure->draw(myBrush1, canvas);
		if (MyFigure != nullptr)
		{
			switch (e->KeyData) {
			case Keys::Right:
				MyFigure->region->Translate(10, 0);
				if (MyFigure->region->IsVisible(0, 160, 1500, 730) == false)
				{
					MyFigure->region->Translate(-10, 0);
				}

				break;
			case Keys::Left:
				MyFigure->region->Translate(-10, 0);
				if (MyFigure->region->IsVisible(0, 160, 1500, 730) == false)
				{
					MyFigure->region->Translate(10, 0);
				}

				break;
			case Keys::Down:
				MyFigure->region->Translate(0, 10);
				if (MyFigure->region->IsVisible(0, 160, 1500, 730) == false)
				{
					MyFigure->region->Translate(0, -10);
				}
				break;
			case Keys::Up:
				MyFigure->region->Translate(0, -10);
				if (MyFigure->region->IsVisible(0, 160, 1500, 730) == false)
				{
					MyFigure->region->Translate(0, 10);
				}
			default:
				break;
			}
		}

	}
	RedrawShapes();



}

void Project11::PaintForm::RedrawShapes()
{
	int a;
	canvas->Clear(Color::White);
	pictureBox1->Invalidate();
	if (listBoxFigures->SelectedItem != nullptr)
	{
		a = listBoxFigures->SelectedIndex;
	}

	for (int i = 0; i < listBoxFigures->Items->Count; i++)
	{
		if (i == a)
		{
			i++;
			if (listBoxFigures->Items->Count == i)
			{
				break;
			}
		}
		Figure^ MyFigure = (Figure^)listBoxFigures->Items[i];

		MyFigure->draw(MyFigure->myBrush, canvas);


	}

	for (int i = 0; i < listBox2Figures->Items->Count; i++)
	{
		Figure^ MyFigure = (Figure^)listBox2Figures->Items[i];
		MyFigure->draw(MyFigure->myBrush, canvas);
	}
	if (listBoxFigures->Items[a]!=nullptr)
	{
		Figure^ MyFigure = (Figure^)listBoxFigures->Items[a];

		MyFigure->draw(MyFigure->myBrush, canvas);
	}

}



System::Void Project11::PaintForm::buttonColorChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBoxFigures->SelectedItem != nullptr) {
		Figure^ ColorChange = (Figure^)listBoxFigures->SelectedItem;
		colorDialog1->ShowDialog();
		if (ColorChange != nullptr) {
			ColorChange->color1 = colorDialog1->Color;
			Pen^ penToDraw = gcnew Pen(ColorChange->color1, 3);
			System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(penToDraw->Color);
			ColorChange->myBrush = myBrush;
			ColorChange->draw(myBrush, canvas);
			buttonColorChange->BackColor = ColorChange->color1;
		}
		RedrawShapes();

	}

}

System::Void Project11::PaintForm::buttonActiveEllipse_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 5;

	//меняем цвет кнопки активной фигуры
	buttonActiveEllipse->BackColor = Color::Green;

	//меняем цвет кнопом не активных фигур
	buttonActiveRhombus->BackColor = Color::LightGray;
	buttonActiveTriangle->BackColor = Color::LightGray;
	buttonActiveCircle->BackColor = Color::LightGray;
	ButtonActivateRectangle->BackColor = Color::LightGray;
	//активируем настройки
	groupBoxSettingsEllipse->Visible = true;
	groupBoxSettingsEllipse->Location = Point(1200, 28);

	//деактивируем остальные настройки
	groupBox2Triangle->Visible = false;
	groupBoxSettingsRhombus->Visible = false;
	groupBoxSettingsCircle->Visible = false;
	groupBoxSettingsRectangle->Visible = false;

}

System::Void Project11::PaintForm::buttonTwoObject_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBoxFigures->SelectedItem != nullptr && listBox2Figures->SelectedItem)
	{
		Figure^ TwoFigures = (Figure^)listBoxFigures->SelectedItem;
		Figure^ OneFigures = (Figure^)listBox2Figures->SelectedItem;
		TwoObject^ Twoobj = gcnew TwoObject(OneFigures, TwoFigures);
		listBox2Figures->Items->Remove(listBox2Figures->SelectedItem);
		listBoxFigures->Items->Remove(listBoxFigures->SelectedItem);
		listBoxFigures->Items->Insert(0,Twoobj);
		System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
		Twoobj->myBrush = myBrush;
		Twoobj->setRegion();
		Twoobj->draw(Twoobj->myBrush, canvas);
	}
	RedrawShapes();


}
System::Void Project11::PaintForm::buttonAddFigure_Click(System::Object^ sender, System::EventArgs^ e)
{
	Figure^ OneFigures;
	if (listBoxFigures->SelectedItem != nullptr)
	{
		OneFigures = (Figure^)listBoxFigures->SelectedItem;
		listBox2Figures->Items->Add(OneFigures);
		listBoxFigures->Items->Remove(listBoxFigures->SelectedItem);
		OneFigures->draw(OneFigures->myBrush, canvas);
		listBoxFigures->SelectedItem = nullptr;

	}
}
System::Void Project11::PaintForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Figure^ OneFigures;
	if (listBox2Figures->SelectedItem != nullptr)
	{
		OneFigures = (Figure^)listBox2Figures->SelectedItem;
		listBoxFigures->Items->Add(OneFigures);
		listBox2Figures->Items->Remove(listBox2Figures->SelectedItem);
		OneFigures->draw(OneFigures->myBrush, canvas);
		listBoxFigures->SelectedItem = nullptr;

	}
}
System::Void Project11::PaintForm::buttonRaz_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	if (listBoxFigures->SelectedItem != nullptr && listBox2Figures->SelectedItem)
	{
		Figure^ TwoFigures = (Figure^)listBoxFigures->SelectedItem;
		Figure^ OneFigures = (Figure^)listBox2Figures->SelectedItem;
		Rez^ rez = gcnew Rez(OneFigures, TwoFigures);
		listBox2Figures->Items->Remove(listBox2Figures->SelectedItem);
		listBoxFigures->Items->Remove(listBoxFigures->SelectedItem);
		listBoxFigures->Items->Insert(0, rez);
		rez->setRegion();
		myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
		rez->myBrush = myBrush;
		rez->draw(myBrush, canvas);
	}
	RedrawShapes();


}

System::Void Project11::PaintForm::listBoxFigures_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{

	color = Color::Green;
	size = 3;
	Pen^ pen1 = gcnew Pen(color, size);
	if (listBoxFigures->SelectedItem != nullptr) {
		RedrawShapes();
		Figure^ mySelectedItem = (Figure^)listBoxFigures->SelectedItem;
		System::Drawing::SolidBrush^ myBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Green);
		mySelectedItem->draw(myBrush, canvas);


	}
}
System::Void Project11::PaintForm::listBox2Figures_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{

	if (listBox2Figures->SelectedItem != nullptr) {
		RedrawShapes();
		Figure^ mySelectedItem = (Figure^)listBox2Figures->SelectedItem;
		System::Drawing::SolidBrush^ myBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Green);
		mySelectedItem->draw(myBrush, canvas);

	}
}




System::Void Project11::PaintForm::button1Pers_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBoxFigures->SelectedItem != nullptr && listBox2Figures->SelectedItem)
	{
		Figure^ TwoFigures = (Figure^)listBoxFigures->SelectedItem;
		Figure^ OneFigures = (Figure^)listBox2Figures->SelectedItem;
		Pers^ pers = gcnew Pers(OneFigures, TwoFigures);
		listBox2Figures->Items->Remove(listBox2Figures->SelectedItem);
		listBoxFigures->Items->Remove(listBoxFigures->SelectedItem);
		listBoxFigures->Items->Insert(0,pers);
		System::Drawing::SolidBrush::Brush^ myBrush = gcnew System::Drawing::SolidBrush(pen->Color);
		pers->myBrush = myBrush;
		pers->setRegion();
		pers->draw(pers->myBrush, canvas);
	}
	RedrawShapes();

}






