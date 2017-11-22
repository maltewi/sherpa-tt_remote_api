/*
 * Image.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Image.h"

Image::Image()
{
	// TODO Auto-generated constructor stub
  m_time = 0.0;
  m_width = 0.0;
  m_height = 0.0;
  m_isRGB = true;
  m_isGreyScale = false;
  strcpy(m_data, "\0");
}

Image::Image(double time, double width, double height, bool isRGB, bool isGreyScale, char *data)
  :m_time(time), m_width(width), m_height(height), m_isRGB(isRGB), m_isGreyScale(isGreyScale)
{
  // TODO Auto-generated constructor stub
  strcpy(m_data, data);
}

Image::~Image()
{
	// TODO Auto-generated destructor stub
}

