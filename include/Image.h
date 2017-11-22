/*
 * Image.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#define MAX_IMG_SIZE 4096 //TODO: Set maximum image size

#include <stdio.h>
#include <string.h>

class Image {
  public:
    Image();
    Image(double time, double width, double height, bool isRGB, bool isGreyScale, char *data);
    virtual ~Image();

    const char* getData() const {
      return m_data;
    }

    void setData(char* data) {
      strcpy(m_data, data);
    }

    double getHeight() const {
      return m_height;
    }

    void setHeight(double height) {
      m_height = height;
    }

    bool isIsGreyScale() const {
      return m_isGreyScale;
    }

    void setGreyScale(bool isGreyScale) {
      m_isGreyScale = isGreyScale;
    }

    bool isIsRgb() const {
      return m_isRGB;
    }

    void setRgb(bool isRgb) {
      m_isRGB = isRgb;
    }

    double getTime() const {
      return m_time;
    }

    void setTime(double time) {
      m_time = time;
    }

    double getWidth() const {
      return m_width;
    }

    void setWidth(double width) {
      m_width = width;
    }

  private:
    double m_time;
    double m_width;
    double m_height;
    bool m_isRGB;
    bool m_isGreyScale;
    char m_data[MAX_IMG_SIZE];
};

#endif /* IMAGE_H_ */
