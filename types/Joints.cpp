/*
 * Joints.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Joints.h"

Joints::Joints()
{
	// TODO Auto-generated constructor stub

  m_time = 0;
  m_jointStates = JointState();
}

Joints::Joints(long time, JointState& jointStates)
  : m_time(time), m_jointStates(jointStates)
{
  // TODO
}

Joints::~Joints()
{
	// TODO Auto-generated destructor stub
}

