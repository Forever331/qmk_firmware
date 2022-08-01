#pragma once

#if defined ENABLE_RGB_MATRIX_CYCLE_MULTISPLASH \
|| defined ENABLE_RGB_MATRIX_CYCLE_REACTIVE_MULTICROSS \
|| defined ENABLE_RGB_MATRIX_CYCLE_REACTIVE_MULTINEXUS \
|| defined ENABLE_RGB_MATRIX_CYCLE_REACTIVE_MULTIWIDE

typedef HSV (*rs_f)(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint16_t tick, uint8_t time);

bool effect_runner_reactive_s(uint8_t start, effect_params_t* params, rs_f effect_func) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
	uint8_t time = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed / 4, 1));
    uint8_t count = g_last_hit_tracker.count;
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        HSV hsv = rgb_matrix_config.hsv;
        hsv.v   = 0;
        for (uint8_t j = start; j < count; j++) {
            int16_t  dx   = g_led_config.point[i].x - g_last_hit_tracker.x[j];
            int16_t  dy   = g_led_config.point[i].y - g_last_hit_tracker.y[j];
            uint8_t  dist = sqrt16(dx * dx + dy * dy);
            uint16_t tick = scale16by8(g_last_hit_tracker.tick[j], qadd8(rgb_matrix_config.speed, 1));
            hsv           = effect_func(hsv, dx, dy, dist, tick, time);
        }
        hsv.v   = scale8(hsv.v, rgb_matrix_config.hsv.v);
        RGB rgb = rgb_matrix_hsv_to_rgb(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return led_max < DRIVER_LED_TOTAL;
}

#endif
