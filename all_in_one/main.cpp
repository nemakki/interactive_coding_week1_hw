#include "ofApp.h"


int main()
{
	//changed to 512 to fit in the double incrementing interval
	ofSetupOpenGL(512, 512, OF_WINDOW);
	return ofRunApp(std::make_shared<ofApp>());
}
