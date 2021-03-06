#ifndef VESC_TUTORIAL_PROJECT_H
#define VESC_TUTORIAL_PROJECT_H

#include "VESC.h"

// App specific functions
void reset_impulse();
void impulse_print_position();
void impulse();
void sinusoid();

void update_pos_and_gain_target(float pos, float kp, float kd);
void send_vesc_target(VESC &vesc, struct vesc_pos_gain_command &comm);

void print_pos_gain_target();

void start_encoder_prints();
void stop_encoder_prints();
void encoder_printing();

struct vesc_pos_gain_command {
	float pos;
	float k_p;
	float k_d;
};
void send_vesc_target(VESC &vesc, struct vesc_pos_gain_command &comm);

// State transition functions
void transition_to_running();
void transition_to_ESTOP();
void transition_to_STAGING();

// State functions
void STAGING_STATE();
void RUNNING_STATE();
void ESTOP_STATE();

// Shit functions
void print_shit();

// Serial and CAN functions
void process_serial();
void process_CAN_messages();


#endif
