/*
 * JoinState.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include <JointState.h>

JointState::JointState()
{
	// TODO Auto-generated constructor stub
  m_position = 0;
  m_speed = 0.0;
  m_acceleration = 0.0;
  m_effort = 0.0;
}

JointState::JointState(long position, double speed, double acceleration, double effort)
  :m_position(position), m_speed(speed), m_acceleration(acceleration), m_effort(effort)
{
  // TODO
}

JointState::~JointState()
{
	// TODO Auto-generated destructor stub
}

