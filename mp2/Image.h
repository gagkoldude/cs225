#ifndef IMAGE_H
#define IMAGE_H

#include "cs225/PNG.h"

using namespace cs225;

class Image : public PNG {
  public:
    Image(int width, int height);
    Image();
    void lighten();
    void lighten(double amount);
    void darken();
    void darken(double amount);
    void saturate();
    void saturate(double amount);
    void desaturate();
    void desaturate(double amount);
    void grayscale();
    void rotateColor(double degrees);
    void illinify();
    void scale(double factor);
    void scale(unsigned w, unsigned h);

  private:
    unsigned int width_;            /*< Width of the image */
    unsigned int height_;           /*< Height of the image */
    HSLAPixel *imageData_;          /*< Array of pixels */
};

#endif
