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



}
