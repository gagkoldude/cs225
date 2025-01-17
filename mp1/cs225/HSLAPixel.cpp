#include "HSLAPixel.h"

using namespace cs225;

HSLAPixel::HSLAPixel() {
	l = 1.0;
	s = 1.0;
	a = 1.0;
}

HSLAPixel::HSLAPixel(double hue, double saturation, double luminance) {
	h = hue;
	s = saturation;
	l = luminance;
	a = 1.0;
}

HSLAPixel::HSLAPixel(double hue, double saturation, double luminance, double alpha) {
	h = hue;
	s = saturation;
	l = luminance;
	a = alpha;
}
