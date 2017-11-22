/*
 * IMU.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "IMU.h"

IMU::IMU()
{
  // TODO Auto-generated destructor stub
  m_time = 0;
  m_acc = Vector3();
  m_gyro = Vector3();
  m_mag = Vector3();
}

IMU::IMU(long time, Vector3& acc, Vector3& gyro, Vector3& mag)
  :m_time(time), m_acc(acc), m_gyro(gyro), m_mag(mag)
{
	// TODO Auto-generated constructor stub

}

IMU::~IMU()
{
	// TODO Auto-generated destructor stub
}

