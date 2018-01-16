/*
 * Motion2D.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef MOTION2D_H_
#define MOTION2D_H_

namespace sherpa_tt_remote_api{
class Motion2D {
  public:
    double m_headingRadians;
    double m_rotation;
    double m_translation;
      
    Motion2D();
    Motion2D(double headingRadians, double rotation, double translation);

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

    double getTranslation() const {
      return m_translation;
    }

    void setTranslation(double translation) {
      m_translation = translation;
    }
};
}

#endif /* MOTION2D_H_ */
