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

	int a = 1;
	int b = 1;

	for (int i = 0; i <= w; i += a) {

		a *= 2;

		//slightly grey white
		ofSetColor(240, 240, 240);
		ofDrawLine(i, 0, 0, i);

	}

	for (int i = 2 * w; i >= 0; i -= b) {

		b *= 2;

		float slope = w / h;
		float middleLine_y = slope * 0.5 * i;


		ofDrawLine(0.5 * i, -(middleLine_y - h), i, h);

	}

}
