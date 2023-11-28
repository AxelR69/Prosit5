#include "Climages.h"
using namespace System;

namespace NS_composants
{
	System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier)
	{
		return gcnew System::Drawing::Bitmap(fichier);
	}
}
