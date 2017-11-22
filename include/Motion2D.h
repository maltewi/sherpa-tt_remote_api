/*
 * Motion2D.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef MOTION2D_H_
#define MOTION2D_H_

class Motion2D {
  public:
    Motion2D();
    Motion2D(double headingRadians, double rotation, double traslation);
    virtual ~Motion2D();

    double getHeadingRadians() const {
      return m_headingRadians;
    }

    void setHeadingRadians(double headingRadians) {
      m_headingRadians = headingRadians;
    }

    double getRotation() const {
      return m_rotation;
    }

    void setRotation(double rotation) {
      m_rotation = rotation;
    }

    double getTraslation() const {
      return m_traslation;
    }

    void setTraslation(double traslation) {
      m_traslation = traslation;
    }

  private:
    double m_headingRadians;
    double m_rotation;
    double m_traslation;
};

#endif /* MOTION2D_H_ */
