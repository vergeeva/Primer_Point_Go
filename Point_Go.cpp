#include "Point_Go.h"
#include "MyForm.h"
// Всегда, когда объект должен получить форму.
Point_Go::Point_Go()
{
	x = y = 50;
	direction = 1;
	speed = 3;
}
Point_Go::Point_Go(int xx, int yy)
{
	x = xx;
	y = yy;
	direction = 1;
	speed = 3;
}
String ^ Point_Go::ToString( )
{
	return String::Format("({0},{1})", x, y);
}
//----------------------------------------------------------------------
void Point_Go::Draw(System::Windows::Forms::PictureBox ^Pb)
{
	Pb->Left = x;
	Pb->Top = y;
}
void  Point_Go::Go(System::Windows::Forms::PictureBox ^Pb)
{
	
}
//----------------------------------------------------------------------
void Point_Go::Left(System::Windows::Forms::PictureBox ^Pb)
{
	
}
void Point_Go::Right(System::Windows::Forms::PictureBox ^Pb)
{
	
}
void Point_Go::Down(System::Windows::Forms::PictureBox ^Pb)
{

}
void Point_Go::Up(System::Windows::Forms::PictureBox ^Pb)
{

}


