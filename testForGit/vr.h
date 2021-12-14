#pragma once
#include <iostream>
#include <string>

using namespace std;

class vrHMD {
private:
	string trackingType;
public:
	virtual void whatType() = 0;
	void setType(string way) {
		trackingType = way;
	}
	string getType() {
		return trackingType;
	}
};

class quest2 : public vrHMD {
public:
	virtual void whatType() override {
		if (getType() == "internal")
			cout << "this is Oculus quest2" << endl;
		else
			cout << "this is indexVR or Vive things" << endl;
	}
};
	
