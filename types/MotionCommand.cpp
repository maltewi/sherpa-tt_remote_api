/*
 * MotionCommand.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "MotionCommand.h"

using namespace sherpa_tt_remote_api;

MotionCommand::MotionCommand()
{
	// TODO Auto-generated constructor stub

  m_curvature_radm = 0.0;
  m_manoeuvreType = 0;
  m_speed_ms = 0.0;
  m_turnRate_rads = 0.0;
}

MotionCommand::MotionCommand(int manoeuvreType, double curvature_radm, double speed_ms, double turnRate_rads)
  :m_manoeuvreType(manoeuvreType), m_curvature_radm(curvature_radm), m_speed_ms(speed_ms), m_turnRate_rads(turnRate_rads)
{
  // TODO
}

MotionCommand::~MotionCommand()
{
	// TODO Auto-generated destructor stub
}

