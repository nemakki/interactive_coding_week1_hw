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

	for (int i = 0; i <= w; i += a) {

		a *= 2;

		//slightly grey white
		ofSetColor(240, 240, 240);
		ofDrawLine(i, 0, 0, i);

	}

}
