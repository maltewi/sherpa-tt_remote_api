/*
 * DGPS.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef DGPS_H_
#define DGPS_H_

class DGPS {
  public:
    DGPS();
    DGPS(long time, double latitude, int noOfSatellites, double altitude,
         double geoidalSeparation, double ageOfDifferentialCorrections,
         double deviationLatitude, double deviationLongitude, double deviationAltitude);

    virtual ~DGPS();

    double getAgeOfDifferentialCorrections() const {
      return m_ageOfDifferentialCorrections;
    }

    void setAgeOfDifferentialCorrections(double ageOfDifferentialCorrections) {
      m_ageOfDifferentialCorrections = ageOfDifferentialCorrections;
    }

    double getAltitude() const {
      return m_altitude;
    }

    void setAltitude(double altitude) {
      m_altitude = altitude;
    }

    double getDeviationAltitude() const {
      return m_deviationAltitude;
    }

    void setDeviationAltitude(double deviationAltitude) {
      m_deviationAltitude = deviationAltitude;
    }

    double getDeviationLatitude() const {
      return m_deviationLatitude;
    }

    void setDeviationLatitude(double deviationLatitude) {
      m_deviationLatitude = deviationLatitude;
    }

    double getDeviationLongitude() const {
      return m_deviationLongitude;
    }

    void setDeviationLongitude(double deviationLongitude) {
      m_deviationLongitude = deviationLongitude;
    }

    double getGeoidalSeparation() const {
      return m_geoidalSeparation;
    }

    void setGeoidalSeparation(double geoidalSeparation) {
      m_geoidalSeparation = geoidalSeparation;
    }

    double getLatitude() const {
      return m_latitude;
    }

    void setLatitude(double latitude) {
      m_latitude = latitude;
    }

    int getNoOfSatellites() const {
      return m_noOfSatellites;
    }

    void setNoOfSatellites(int noOfSatellites) {
      m_noOfSatellites = noOfSatellites;
    }

    long getTime() const {
      return m_time;
    }

    void setTime(long time) {
      m_time = time;
    }

  private:
    long m_time;
    double m_latitude;
    int m_noOfSatellites;
    double m_altitude;
    double m_geoidalSeparation;
    double m_ageOfDifferentialCorrections;
    double m_deviationLatitude;
    double m_deviationLongitude;
    double m_deviationAltitude;
};

#endif /* DGPS_H_ */
