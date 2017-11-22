/*
 * Image.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <vector>
#include "assert.h"

namespace sherpa_tt_remote_api{
typedef std::vector<uint8_t> FrameBuffer;

enum FrameMode{
    RGB_UINT8,
    BGR_UINT8,
    MONO_UINT8,
    RGB_UINT16,
    BGR_UINT16,
    MONO_UINT16,
    MONO_FLOAT32,
    RGB_FLOAT32,
    BGR_FLOAT32
};

typedef uint8_t Pixel1UInt8;
typedef uint8_t Pixel3UInt8[3];
typedef uint16_t Pixel1UInt16;
typedef uint16_t Pixel3UInt16[3];
typedef float Pixel1Float32;
typedef float Pixel3Float32[3];


class Image {
public:
    Image();
    Image(double time, double width, double height, bool isRGB, bool isGreyScale, char *data);
    virtual ~Image();

    const FrameBuffer& getData() const {
        return m_data;
    }

    void setData(FrameBuffer& data) {
        m_data = data;
    }

    double getHeight() const {
        return m_height;
    }

    void setHeight(double height) {
        m_height = height;
    }

    bool isIsGreyScale() const {
        return m_isGreyScale;
    }

    void setGreyScale(bool isGreyScale) {
        m_isGreyScale = isGreyScale;
    }

    bool isIsRgb() const {
        return m_isRGB;
    }

    void setRgb(bool isRgb) {
        m_isRGB = isRgb;
    }

    double getTime() const {
        return m_time;
    }

    void setTime(double time) {
        m_time = time;
    }

    double getWidth() const {
        return m_width;
    }

    void setWidth(double width) {
        m_width = width;
    }

    uint8_t getPixelSizeByte() const;

    uint8_t getRowSizeByte() const;

    size_t getBufferIndex(size_t column, size_t row) const;

    template<typename Pixel>
    Pixel getPixel(size_t column, size_t row);

    uint8_t getNChannels() const;
    uint8_t getPixelDepthBit() const;
    uint8_t getPixelDepthByte() const;

private:
    double m_time;
    double m_width;
    double m_height;
    bool m_isRGB;
    bool m_isGreyScale;
    FrameMode m_frameMode;
    FrameBuffer m_data;
};
}

#endif /* IMAGE_H_ */
