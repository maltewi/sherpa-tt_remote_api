/*
 * Quaternion.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Quaternion.h"

using namespace sherpa_tt_remote_api;

Quaternion::Quaternion()
{
  m_x = 0.0;
  m_y = 0.0;
  m_z = 0.0;
  m_w = 0.0;
}

Quaternion::Quaternion(double x, double y, double z, double w)
  :m_x(x), m_y(y), m_z(z), m_w(w)
{
	// TODO Auto-generated constructor stub

}

Quaternion::~Quaternion()
{
	// TODO Auto-generated destructor stub
}

