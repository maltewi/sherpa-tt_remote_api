/*
 * DGPS.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "DGPS.h"

using namespace sherpa_tt_remote_api;

DGPS::DGPS()
{
	// TODO Auto-generated constructor stub

}

DGPS::DGPS(long time, double latitude, int noOfSatellites, double altitude,
double geoidalSeparation, double ageOfDifferentialCorrections,
double deviationLatitude, double deviationLongitude,
double deviationAltitude)
  :m_time(time), m_latitude(latitude), m_noOfSatellites(noOfSatellites),
   m_altitude(altitude), m_geoidalSeparation(geoidalSeparation),
   m_ageOfDifferentialCorrections(ageOfDifferentialCorrections),
   m_deviationLatitude(deviationLatitude), m_deviationLongitude(deviationLongitude),
   m_deviationAltitude(deviationAltitude)
{
  // TODO

}

DGPS::~DGPS()
{
	// TODO Auto-generated destructor stub
  m_time = 0;
  m_latitude = 0.0;
  m_noOfSatellites = 0;
  m_altitude = 0.0;
  m_geoidalSeparation = 0.0;
  m_ageOfDifferentialCorrections = 0.0;
  m_deviationLatitude = 0.0;
  m_deviationLongitude = 0.0;
  m_deviationAltitude = 0.0;
}

