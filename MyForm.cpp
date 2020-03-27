#include "MyForm.h"
 			// Имя h-файла формы.
using namespace Primer_Point_Go; 	// Имя проекта.
[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles( );
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm( )); // Имя формы.
	return 0;
}

