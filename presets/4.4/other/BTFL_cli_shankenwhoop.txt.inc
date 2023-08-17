# diff all

# version
# Betaflight / STM32F411 (S411) 4.4.1 Apr 10 2023 / 21:36:21 (e43d591b2) MSP API: 1.45

# config: YES

# start the command batch
batch start

# reset configuration to default settings
defaults nosave

board_name CRAZYBEEF4SX1280
manufacturer_id HAMO
mcu_id 005e001c3132511130313538
signature

# name: shankenwhoop

# resources
resource MOTOR 1 B08
resource MOTOR 2 B07
resource MOTOR 3 B06
resource MOTOR 4 B10

# feature
feature -RX_SERIAL
feature -SOFTSERIAL
feature -TELEMETRY
feature RX_SPI

# serial
serial 1 2048 115200 57600 0 115200

# beeper
beeper -GYRO_CALIBRATED

# aux
aux 0 0 0 1800 2100 0 0
aux 1 1 1 900 1200 0 0
aux 2 2 1 1300 1700 0 0
aux 3 13 2 1675 2100 0 0
aux 4 35 3 1800 2100 0 0

# rxrange
rxrange 0 989 2011
rxrange 1 989 2011
rxrange 2 989 2011
rxrange 3 989 2011

# vtxtable
vtxtable bands 6
vtxtable channels 8
vtxtable band 1 BOSCAM_A A FACTORY 5865 5845 5825 5805 5785 5765 5745 5725
vtxtable band 2 BOSCAM_B B FACTORY 5733 5752 5771 5790 5809 5828 5847 5866
vtxtable band 3 BOSCAM_E E FACTORY 5705 5685 5665    0 5885 5905    0    0
vtxtable band 4 FATSHARK F FACTORY 5740 5760 5780 5800 5820 5840 5860 5880
vtxtable band 5 RACEBAND R FACTORY 5658 5695 5732 5769 5806 5843 5880 5917
vtxtable band 6 LOWRACE  L FACTORY 5333 5373 5413 5453 5493 5533 5573 5613
vtxtable powerlevels 5
vtxtable powervalues 10 2 14 20 26
vtxtable powerlabels 0 RCE 25 100 400

# master
set gyro_lpf1_static_hz = 400
set gyro_lpf2_static_hz = 0
set gyro_lpf1_dyn_min_hz = 400
set gyro_lpf1_dyn_max_hz = 800
set acc_calibration = -16,-32,-67,1
set min_check = 1020
set max_check = 1950
set rc_smoothing_auto_factor = 52
set dshot_idle_value = 580
set dshot_bidir = ON
set motor_pwm_protocol = DSHOT300
set motor_poles = 12
set motor_output_reordering = 3,2,1,0,4,5,6,7
set vbat_max_cell_voltage = 435
set vbat_min_cell_voltage = 320
set vbat_warning_cell_voltage = 335
set small_angle = 180
set deadband = 1
set yaw_deadband = 1
set pid_process_denom = 4
set simplified_gyro_filter_multiplier = 160
set osd_rssi_pos = 314
set osd_link_quality_pos = 2391
set osd_rssi_dbm_pos = 2424
set osd_tim_2_pos = 2455
set osd_flymode_pos = 2405
set osd_throttle_pos = 2420
set osd_vtx_channel_pos = 2433
set osd_current_pos = 288
set osd_mah_drawn_pos = 320
set osd_craft_name_pos = 2081
set osd_pidrate_profile_pos = 2401
set osd_warnings_pos = 2249
set osd_avg_cell_voltage_pos = 2413
set osd_disarmed_pos = 2314
set osd_core_temp_pos = 34
set osd_canvas_width = 30
set osd_canvas_height = 13
set vtx_band = 5
set vtx_channel = 1
set vtx_power = 3
set vtx_freq = 5658
set expresslrs_uid = 74,41,14,5,199,104
set expresslrs_rate_index = 1
set expresslrs_switch_mode = HYBRID
set craft_name = shankenwhoop
set pilot_name = Shashank

profile 0

# profile 0
set iterm_relax = RPY
set p_pitch = 80
set i_pitch = 100
set d_pitch = 85
set f_pitch = 140
set p_roll = 85
set i_roll = 100
set d_roll = 85
set f_roll = 140
set p_yaw = 120
set i_yaw = 100
set f_yaw = 140
set feedforward_transition = 21

profile 1

# profile 1
set dterm_lpf1_dyn_min_hz = 90
set dterm_lpf1_dyn_max_hz = 180
set dterm_lpf1_static_hz = 90
set dterm_lpf2_static_hz = 0
set vbat_sag_compensation = 100
set anti_gravity_gain = 45
set iterm_relax_cutoff = 10
set throttle_boost = 15
set p_pitch = 70
set i_pitch = 138
set d_pitch = 82
set f_pitch = 187
set p_roll = 67
set i_roll = 132
set d_roll = 72
set f_roll = 180
set p_yaw = 67
set i_yaw = 132
set f_yaw = 180
set d_min_roll = 54
set d_min_pitch = 61
set auto_profile_cell_count = 1
set thrust_linear = 10
set feedforward_averaging = 2_POINT
set feedforward_smooth_factor = 45
set feedforward_jitter_factor = 8
set simplified_master_multiplier = 150
set simplified_i_gain = 110
set simplified_d_gain = 120
set simplified_dterm_filter_multiplier = 120

profile 2

profile 3

# restore original profile selection
profile 1

rateprofile 0

# rateprofile 0
set thr_mid = 83
set thr_expo = 20
set roll_rc_rate = 15
set pitch_rc_rate = 15
set yaw_rc_rate = 20
set roll_expo = 75
set pitch_expo = 75
set yaw_expo = 52
set roll_srate = 94
set pitch_srate = 94
set yaw_srate = 90

rateprofile 1

# rateprofile 1
set thr_mid = 83
set thr_expo = 20
set roll_rc_rate = 15
set pitch_rc_rate = 15
set yaw_rc_rate = 20
set roll_expo = 75
set pitch_expo = 75
set yaw_expo = 52
set roll_srate = 90
set pitch_srate = 90
set yaw_srate = 90

rateprofile 2

rateprofile 3

# restore original rateprofile selection
rateprofile 0

# save configuration
save
#
