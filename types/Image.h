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
    UNDEFINED = 0,
    RGB_UINT8, // Bit je Kanal
    RGB_UINT16,
    RGB_FLOAT32,
    BGR_UINT8,
    BGR_UINT16,
    BGR_FLOAT32,
    MONO_UINT8 = 128,
    MONO_UINT16,
    MONO_FLOAT32,
    JPEG = 256
};

typedef uint8_t Pixel1UInt8;
typedef uint8_t Pixel3UInt8[3];
typedef uint16_t Pixel1UInt16;
typedef uint16_t Pixel3UInt16[3];
typedef float Pixel1Float32;
typedef float Pixel3Float32[3];


class Image {
public:
    uint64_t m_time;
    uint16_t m_width;
    uint16_t m_height;
    FrameMode m_frameMode;
    FrameBuffer m_data;
    
    Image();

    Image(uint64_t time, uint16_t width, uint16_t height, enum FrameMode frame_mode, 
          std::vector<uint8_t>& data);

    const FrameBuffer& getData() const {
        return m_data;
    }

    void setData(FrameBuffer& data) {
        m_data = data;
    }

    uint16_t getHeight() const {
        return m_height;
    }

    void setHeight(uint16_t height) {
        m_height = height;
    }

    bool isIsGreyScale() const {
        return m_frameMode >= MONO_UINT8 && m_frameMode <= MONO_FLOAT32;
    }

    bool isIsRgb() const {
        return m_frameMode >= RGB_UINT8 && m_frameMode <= BGR_FLOAT32;
    }
    
    bool isCompressed() const {
        return m_frameMode == JPEG;
    }

    int64_t getTime() const {
        return m_time;
    }

    void setTime(int64_t time) {
        m_time = time;
    }

    uint16_t getWidth() const {
        return m_width;
    }

    void setWidth(uint16_t width) {
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
};
}

#endif /* IMAGE_H_ */
