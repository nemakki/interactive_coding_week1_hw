#include "ofApp.h"


void ofApp::setup()
{
	//making it a bit easier on eyes by not use pure black/white
	ofBackground(36, 36, 36);

}


void ofApp::update()
{
}


void ofApp::draw()
{
	float w = ofGetWidth();
	float h = ofGetHeight();


	for (int i = 0; i <= w; i += 16) {

		//directly borrowed from assignment instruction page
		
		float hue = ofMap(i, 0, w, 0, 255);
		ofSetColor(ofColor::fromHsb(hue, 255, 255));
		

		ofDrawLine(i, 0, 0, i);

	}

	for (int i = 0; i <= 2 * w; i += 16) {

		float slope = w / h;
		float middleLine_y = slope * 0.5 * i;

		ofSetColor(240, 240, 240);
		ofDrawLine(0.5 * i, -(middleLine_y - h), i, h);

	}


}
