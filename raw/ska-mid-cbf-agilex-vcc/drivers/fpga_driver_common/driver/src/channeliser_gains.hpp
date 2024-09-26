#ifndef CHANNELISER_GAINS_H
#define CHANNELISER_GAINS_H

#include <cstdint>
#include <stdexcept>
#include <iostream>
#include <cmath>

namespace fpga_driver {
    struct shift_scale_t {
        uint16_t shift;
        uint16_t scale;
    };

    shift_scale_t gain_to_shift_scale(float gain, int channels_out) {
        // Calculate the 'shift' and 'scale' register values to be used in configuring a channlizer with this gain
        float intrinsic_gain = 1.0 / (0.9475 * std::sqrt(2 * channels_out));
        float comb_gain = gain / intrinsic_gain;
        uint32_t int_gain = std::clamp(static_cast<uint32_t>(std::ceil(comb_gain)), 0U, 32767U);
        shift_scale_t shift_scale;
        shift_scale.shift = static_cast<uint16_t>(std::log2(int_gain));
        shift_scale.scale = static_cast<uint16_t>((comb_gain / int_gain) * 65535);
        return shift_scale;
    };

    uint16_t gain_to_shift(float gain, int channels_out) {
        return gain_to_shift_scale(gain, channels_out).shift;
    };

    uint16_t gain_to_scale(float gain, int channels_out) {
        return gain_to_shift_scale(gain, channels_out).scale;
    };
    
    float shift_scale_to_gain(uint16_t shift, uint16_t scale) {
        // Retrieve config gain value from shift, scale register values:
        float int_gain = 1 << shift;
        float comb_gain = (scale / 65535.0f) * int_gain;
        float intrinsic_gain = 1.0f/(0.9475f * std::sqrt(20));
        float gain = comb_gain * intrinsic_gain;
        return gain;
    };

}

#endif