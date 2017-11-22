/*
 * Motion2D.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Motion2D.h"

Motion2D::Motion2D()
{
	// TODO Auto-generated constructor stub

  m_headingRadians = 0.0;
  m_rotation = 0.0;
  m_traslation = 0.0;
}

Motion2D::Motion2D(double headingRadians, double rotation, double traslation)
  :m_headingRadians(headingRadians), m_rotation(rotation), m_traslation(traslation)
{
  // TODO
}

Motion2D::~Motion2D()
{
	// TODO Auto-generated destructor stub
}

