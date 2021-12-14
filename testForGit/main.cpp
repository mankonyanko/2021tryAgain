#include <iostream>
#include <string>
#include "animal.h"
#include "vr.h"

using namespace std;

int main()
{
	vrHMD *whoAmI = new quest2();
	whoAmI->setType("internal");
	whoAmI->whatType();
}

