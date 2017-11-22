/*
 * Motion2D.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Motion2D.h"

using namespace sherpa_tt_remote_api;

Motion2D::Motion2D()
{
	// TODO Auto-generated constructor stub

  m_headingRadians = 0.0;
  m_rotation = 0.0;
  m_translation = 0.0;
}

Motion2D::Motion2D(double headingRadians, double rotation, double translation)
  :m_headingRadians(headingRadians), m_rotation(rotation), m_translation(translation)
{
  // TODO
}

Motion2D::~Motion2D()
{
	// TODO Auto-generated destructor stub
}

