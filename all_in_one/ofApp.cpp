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

	//sorry for just uploading one file, i think this is actually easier on both our ends to load and stuff... if i'm thinking this right. just uncomment the section after each *image 0* *image 1* thing etc, the required float for all of them is only float w and h, which are always up.


	//i have the idea of how to make all the sketches compatible for different window sizes like what i did for last week(i think), will probably upload another file for the compatability version later.

	/*

	basic idea is:

	if(height > width){
		for (i incrementing from (-(h-w)/2) to (h+ (h-w)/2)){
			*limiting the i value to strict range so that middle diagonal line would still be in middle

			same idea of using y - y1 = m(x - x1) to calculate the two points for the ofDrawLine funciton. 
			hard fix m=1 (slope is 45 degrees)
			take the longer side, which is height here to be the x and y value

			then a couple if statements to stop at the middle where line direction change, etc

		}else{
			for (i incrementing from (-(w-h)/2) to (w+ (w-h)/2)){
				same thing but use width for x and y here in this case
			}
		}
	}

	i think this works but its just theory crafting, probably would run into one or two issues when i actually write it out, but i'll just put this here for now.

	*/

	float w = ofGetWidth();
	float h = ofGetHeight();


	//image 0

	/*
	for (int i = 0; i <= w; i += 16) {

		//slightly grey white
		ofSetColor(240, 240, 240);
		ofDrawLine(i, 0, 0, i);

	}
	*/



	//image 1

	/*
	for (int i = 0; i <= w; i += 16) {

		//slightly grey white
		ofSetColor(240, 240, 240);
		ofDrawLine(i, 0, 0, i);

	}

	for (int i = 0; i <= 2 * w; i += 16) {
	
		float slope = w / h;
		float middleLine_y = slope * 0.5 * i;


		ofDrawLine(0.5 * i, -(middleLine_y - h), i, h);

	
	}
	*/




	//image 2

	/*
	int a = 1;

	for (int i = 0; i <= w; i += a) {

		a *= 2;

		//slightly grey white
		ofSetColor(240, 240, 240);
		ofDrawLine(i, 0, 0, i);

	}
	*/




	//image 3

	/*

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
	*/




	//image 4

	/*
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
	*/


}
