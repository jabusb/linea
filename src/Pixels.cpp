#include "Pixels.h"

void Pixels::putPixel(int x, int y, int r, int g, int b) {
	pix.setColor(x, y, (r, g, b)); // Inicializaci�n del putpixel

}

void Pixels::getPixel() {
	tex.loadData(pix); // Carga los pixeles que ser�n del bitmap
	
}

void Pixels::init() {
	pix.allocate(1024, 768, OF_PIXELS_RGB); 
	tex.allocate(1024, 768, GL_RGB); // Canvas
		
		
}

void Pixels::draw() {
	tex.draw(0, 0);
}