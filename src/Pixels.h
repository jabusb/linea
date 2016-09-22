#pragma once
#include "ofMain.h"
#include "ofMath.h"

class Pixels {
	private:
		ofPixels pix;
		ofTexture tex;
		
			public:
				void init();
				void draw();
				void getPixel();
				void putPixel(int x, int y, int r, int g, int b);
			
			
};