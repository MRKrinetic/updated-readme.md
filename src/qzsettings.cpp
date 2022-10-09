#include <QSettings>
#include <QDebug>
#include "qzsettings.h"
const QString QZSettings:: cryptoKeySettingsProfiles = QStringLiteral("cryptoKeySettingsProfiles");
const QString QZSettings:: bluetooth_no_reconnection = QStringLiteral("bluetooth_no_reconnection");
const QString QZSettings:: bike_wheel_revs = QStringLiteral("bike_wheel_revs");
const QString QZSettings:: bluetooth_lastdevice_name = QStringLiteral("bluetooth_lastdevice_name");
const QString QZSettings:: default_bluetooth_lastdevice_name = QStringLiteral("");
const QString QZSettings:: bluetooth_lastdevice_address = QStringLiteral("bluetooth_lastdevice_address");
const QString QZSettings:: default_bluetooth_lastdevice_address = QStringLiteral("");
const QString QZSettings:: hrm_lastdevice_name = QStringLiteral("hrm_lastdevice_name");
const QString QZSettings:: default_hrm_lastdevice_name = QStringLiteral("");
const QString QZSettings:: hrm_lastdevice_address = QStringLiteral("hrm_lastdevice_address");
const QString QZSettings:: default_hrm_lastdevice_address = QStringLiteral("");
const QString QZSettings:: ftms_accessory_address = QStringLiteral("ftms_accessory_address");
const QString QZSettings:: default_ftms_accessory_address = QStringLiteral("");
const QString QZSettings:: ftms_accessory_lastdevice_name = QStringLiteral("ftms_accessory_lastdevice_name");
const QString QZSettings:: default_ftms_accessory_lastdevice_name = QStringLiteral("");
const QString QZSettings:: csc_sensor_address = QStringLiteral("csc_sensor_address");
const QString QZSettings:: default_csc_sensor_address = QStringLiteral("");
const QString QZSettings:: csc_sensor_lastdevice_name = QStringLiteral("csc_sensor_lastdevice_name");
const QString QZSettings:: default_csc_sensor_lastdevice_name = QStringLiteral("");
const QString QZSettings:: power_sensor_lastdevice_name = QStringLiteral("power_sensor_lastdevice_name");
const QString QZSettings:: default_power_sensor_lastdevice_name = QStringLiteral("");
const QString QZSettings:: power_sensor_address = QStringLiteral("power_sensor_address");
const QString QZSettings:: default_power_sensor_address = QStringLiteral("");
const QString QZSettings:: elite_rizer_lastdevice_name = QStringLiteral("elite_rizer_lastdevice_name");
const QString QZSettings:: default_elite_rizer_lastdevice_name = QStringLiteral("");
const QString QZSettings:: elite_rizer_address = QStringLiteral("elite_rizer_address");
const QString QZSettings:: default_elite_rizer_address = QStringLiteral("");
const QString QZSettings:: elite_sterzo_smart_lastdevice_name = QStringLiteral("elite_sterzo_smart_lastdevice_name");
const QString QZSettings:: default_elite_sterzo_smart_lastdevice_name = QStringLiteral("");
const QString QZSettings:: elite_sterzo_smart_address = QStringLiteral("elite_sterzo_smart_address");
const QString QZSettings:: default_elite_sterzo_smart_address = QStringLiteral("");
const QString QZSettings:: strava_accesstoken = QStringLiteral("strava_accesstoken");
const QString QZSettings:: default_strava_accesstoken = QStringLiteral("");
const QString QZSettings:: strava_refreshtoken = QStringLiteral("strava_refreshtoken");
const QString QZSettings:: default_strava_refreshtoken = QStringLiteral("");
const QString QZSettings:: strava_lastrefresh = QStringLiteral("strava_lastrefresh");
const QString QZSettings:: default_strava_lastrefresh = QStringLiteral("");
const QString QZSettings:: strava_expires = QStringLiteral("strava_expires");
const QString QZSettings:: default_strava_expires = QStringLiteral("");
const QString QZSettings:: code = QStringLiteral("code");
const QString QZSettings:: default_code = QStringLiteral("");
//--------------------------------------------------------------------------------------------
const QString QZSettings:: ui_zoom = QStringLiteral("ui_zoom");
const QString QZSettings:: bike_heartrate_service = QStringLiteral("bike_heartrate_service");
const QString QZSettings:: bike_resistance_offset = QStringLiteral("bike_resistance_offset");
const QString QZSettings:: bike_resistance_gain_f = QStringLiteral("bike_resistance_gain_f");
const QString QZSettings:: zwift_erg = QStringLiteral("zwift_erg");
const QString QZSettings:: zwift_erg_filter = QStringLiteral("zwift_erg_filter");
const QString QZSettings:: zwift_erg_filter_down = QStringLiteral("zwift_erg_filter_down");
const QString QZSettings:: zwift_negative_inclination_x2 = QStringLiteral("zwift_negative_inclination_x2");
const QString QZSettings:: zwift_inclination_offset = QStringLiteral("zwift_inclination_offset");
const QString QZSettings:: zwift_inclination_gain = QStringLiteral("zwift_inclination_gain");
const QString QZSettings:: echelon_resistance_offset = QStringLiteral("echelon_resistance_offset");
const QString QZSettings:: echelon_resistance_gain = QStringLiteral("echelon_resistance_gain");
const QString QZSettings:: speed_power_based = QStringLiteral("speed_power_based");
const QString QZSettings:: bike_resistance_start = QStringLiteral("bike_resistance_start");
const QString QZSettings:: age = QStringLiteral("age");
const QString QZSettings:: weight = QStringLiteral("weight");
const QString QZSettings:: ftp = QStringLiteral("ftp");
const QString QZSettings:: user_email = QStringLiteral("user_email");
const QString QZSettings:: default_user_email = QLatin1String("");
const QString QZSettings:: user_nickname = QStringLiteral("user_nickname");
const QString QZSettings:: default_user_nickname = QStringLiteral("");
const QString QZSettings:: miles_unit = QStringLiteral("miles_unit");
const QString QZSettings:: pause_on_start = QStringLiteral("pause_on_start");
const QString QZSettings:: treadmill_force_speed = QStringLiteral("treadmill_force_speed");
const QString QZSettings:: pause_on_start_treadmill = QStringLiteral("pause_on_start_treadmill");
const QString QZSettings:: continuous_moving = QStringLiteral("continuous_moving");
const QString QZSettings:: bike_cadence_sensor = QStringLiteral("bike_cadence_sensor");
const QString QZSettings:: run_cadence_sensor = QStringLiteral("run_cadence_sensor");
const QString QZSettings:: bike_power_sensor = QStringLiteral("bike_power_sensor");
const QString QZSettings:: heart_rate_belt_name = QStringLiteral("heart_rate_belt_name");
const QString QZSettings:: default_heart_rate_belt_name = QStringLiteral("Disabled");
const QString QZSettings:: heart_ignore_builtin = QStringLiteral("heart_ignore_builtin");
const QString QZSettings:: kcal_ignore_builtin = QStringLiteral("kcal_ignore_builtin");
const QString QZSettings:: ant_cadence = QStringLiteral("ant_cadence");
const QString QZSettings:: ant_heart = QStringLiteral("ant_heart");
const QString QZSettings:: ant_garmin = QStringLiteral("ant_garmin");
const QString QZSettings:: top_bar_enabled = QStringLiteral("top_bar_enabled");
const QString QZSettings:: peloton_username = QStringLiteral("peloton_username");
const QString QZSettings:: default_peloton_username = QStringLiteral("username");
const QString QZSettings:: peloton_password = QStringLiteral("peloton_password");
const QString QZSettings:: default_peloton_password = QStringLiteral("password");
const QString QZSettings:: peloton_difficulty = QStringLiteral("peloton_difficulty");
const QString QZSettings:: default_peloton_difficulty = QStringLiteral("lower");
const QString QZSettings:: peloton_cadence_metric = QStringLiteral("peloton_cadence_metric");
const QString QZSettings:: default_peloton_cadence_metric = QStringLiteral("Cadence");
const QString QZSettings:: peloton_heartrate_metric = QStringLiteral("peloton_heartrate_metric");
const QString QZSettings:: default_peloton_heartrate_metric = QStringLiteral("Heart Rate");
const QString QZSettings:: peloton_date = QStringLiteral("peloton_date");
const QString QZSettings:: default_peloton_date = QStringLiteral("Before Title");
const QString QZSettings:: peloton_description_link = QStringLiteral("peloton_description_link");
const QString QZSettings:: pzp_username = QStringLiteral("pzp_username");
const QString QZSettings:: default_pzp_username = QStringLiteral("username");
const QString QZSettings:: pzp_password = QStringLiteral("pzp_password");
const QString QZSettings:: default_pzp_password = QStringLiteral("username");
const QString QZSettings:: tile_speed_enabled = QStringLiteral("tile_speed_enabled");
const QString QZSettings:: tile_speed_order = QStringLiteral("tile_speed_order");
const QString QZSettings:: tile_inclination_enabled = QStringLiteral("tile_inclination_enabled");
const QString QZSettings:: tile_inclination_order = QStringLiteral("tile_inclination_order");
const QString QZSettings:: tile_cadence_enabled = QStringLiteral("tile_cadence_enabled");
const QString QZSettings:: tile_cadence_order = QStringLiteral("tile_cadence_order");
const QString QZSettings:: tile_elevation_enabled = QStringLiteral("tile_elevation_enabled");
const QString QZSettings:: tile_elevation_order = QStringLiteral("tile_elevation_order");
const QString QZSettings:: tile_calories_enabled = QStringLiteral("tile_calories_enabled");
const QString QZSettings:: tile_calories_order = QStringLiteral("tile_calories_order");
const QString QZSettings:: tile_odometer_enabled = QStringLiteral("tile_odometer_enabled");
const QString QZSettings:: tile_odometer_order = QStringLiteral("tile_odometer_order");
const QString QZSettings:: tile_pace_enabled = QStringLiteral("tile_pace_enabled");
const QString QZSettings:: tile_pace_order = QStringLiteral("tile_pace_order");
const QString QZSettings:: tile_resistance_enabled = QStringLiteral("tile_resistance_enabled");
const QString QZSettings:: tile_resistance_order = QStringLiteral("tile_resistance_order");
const QString QZSettings:: tile_watt_enabled = QStringLiteral("tile_watt_enabled");
const QString QZSettings:: tile_watt_order = QStringLiteral("tile_watt_order");
const QString QZSettings:: tile_weight_loss_enabled = QStringLiteral("tile_weight_loss_enabled");
const QString QZSettings:: tile_weight_loss_order = QStringLiteral("tile_weight_loss_order");
const QString QZSettings:: tile_avgwatt_enabled = QStringLiteral("tile_avgwatt_enabled");
const QString QZSettings:: tile_avgwatt_order = QStringLiteral("tile_avgwatt_order");
const QString QZSettings:: tile_ftp_enabled = QStringLiteral("tile_ftp_enabled");
const QString QZSettings:: tile_ftp_order = QStringLiteral("tile_ftp_order");
const QString QZSettings:: tile_heart_enabled = QStringLiteral("tile_heart_enabled");
const QString QZSettings:: tile_heart_order = QStringLiteral("tile_heart_order");
const QString QZSettings:: tile_fan_enabled = QStringLiteral("tile_fan_enabled");
const QString QZSettings:: tile_fan_order = QStringLiteral("tile_fan_order");
const QString QZSettings:: tile_jouls_enabled = QStringLiteral("tile_jouls_enabled");
const QString QZSettings:: tile_jouls_order = QStringLiteral("tile_jouls_order");
const QString QZSettings:: tile_elapsed_enabled = QStringLiteral("tile_elapsed_enabled");
const QString QZSettings:: tile_elapsed_order = QStringLiteral("tile_elapsed_order");
const QString QZSettings:: tile_lapelapsed_enabled = QStringLiteral("tile_lapelapsed_enabled");
const QString QZSettings:: tile_lapelapsed_order = QStringLiteral("tile_lapelapsed_order");
const QString QZSettings:: tile_moving_time_enabled = QStringLiteral("tile_moving_time_enabled");
const QString QZSettings:: tile_moving_time_order = QStringLiteral("tile_moving_time_order");
const QString QZSettings:: tile_peloton_offset_enabled = QStringLiteral("tile_peloton_offset_enabled");
const QString QZSettings:: tile_peloton_offset_order = QStringLiteral("tile_peloton_offset_order");
const QString QZSettings:: tile_peloton_difficulty_enabled = QStringLiteral("tile_peloton_difficulty_enabled");
const QString QZSettings:: tile_peloton_difficulty_order = QStringLiteral("tile_peloton_difficulty_order");
const QString QZSettings:: tile_peloton_resistance_enabled = QStringLiteral("tile_peloton_resistance_enabled");
const QString QZSettings:: tile_peloton_resistance_order = QStringLiteral("tile_peloton_resistance_order");
const QString QZSettings:: tile_datetime_enabled = QStringLiteral("tile_datetime_enabled");
const QString QZSettings:: tile_datetime_order = QStringLiteral("tile_datetime_order");
const QString QZSettings:: tile_target_resistance_enabled = QStringLiteral("tile_target_resistance_enabled");
const QString QZSettings:: tile_target_resistance_order = QStringLiteral("tile_target_resistance_order");
const QString QZSettings:: tile_target_peloton_resistance_enabled = QStringLiteral("tile_target_peloton_resistance_enabled");
const QString QZSettings:: tile_target_peloton_resistance_order = QStringLiteral("tile_target_peloton_resistance_order");
const QString QZSettings:: tile_target_cadence_enabled = QStringLiteral("tile_target_cadence_enabled");
const QString QZSettings:: tile_target_cadence_order = QStringLiteral("tile_target_cadence_order");
const QString QZSettings:: tile_target_power_enabled = QStringLiteral("tile_target_power_enabled");
const QString QZSettings:: tile_target_power_order = QStringLiteral("tile_target_power_order");
const QString QZSettings:: tile_target_zone_enabled = QStringLiteral("tile_target_zone_enabled");
const QString QZSettings:: tile_target_zone_order = QStringLiteral("tile_target_zone_order");
const QString QZSettings:: tile_target_speed_enabled = QStringLiteral("tile_target_speed_enabled");
const QString QZSettings:: tile_target_speed_order = QStringLiteral("tile_target_speed_order");
const QString QZSettings:: tile_target_incline_enabled = QStringLiteral("tile_target_incline_enabled");
const QString QZSettings:: tile_target_incline_order = QStringLiteral("tile_target_incline_order");
const QString QZSettings:: tile_strokes_count_enabled = QStringLiteral("tile_strokes_count_enabled");
const QString QZSettings:: tile_strokes_count_order = QStringLiteral("tile_strokes_count_order");
const QString QZSettings:: tile_strokes_length_enabled = QStringLiteral("tile_strokes_length_enabled");
const QString QZSettings:: tile_strokes_length_order = QStringLiteral("tile_strokes_length_order");
const QString QZSettings:: tile_watt_kg_enabled = QStringLiteral("tile_watt_kg_enabled");
const QString QZSettings:: tile_watt_kg_order = QStringLiteral("tile_watt_kg_order");
const QString QZSettings:: tile_gears_enabled = QStringLiteral("tile_gears_enabled");
const QString QZSettings:: tile_gears_order = QStringLiteral("tile_gears_order");
const QString QZSettings:: tile_remainingtimetrainprogramrow_enabled = QStringLiteral("tile_remainingtimetrainprogramrow_enabled");
const QString QZSettings:: tile_remainingtimetrainprogramrow_order = QStringLiteral("tile_remainingtimetrainprogramrow_order");
const QString QZSettings:: tile_nextrowstrainprogram_enabled = QStringLiteral("tile_nextrowstrainprogram_enabled");
const QString QZSettings:: tile_nextrowstrainprogram_order = QStringLiteral("tile_nextrowstrainprogram_order");
const QString QZSettings:: tile_mets_enabled = QStringLiteral("tile_mets_enabled");
const QString QZSettings:: tile_mets_order = QStringLiteral("tile_mets_order");
const QString QZSettings:: tile_targetmets_enabled = QStringLiteral("tile_targetmets_enabled");
const QString QZSettings:: tile_targetmets_order = QStringLiteral("tile_targetmets_order");
const QString QZSettings:: tile_steering_angle_enabled = QStringLiteral("tile_steering_angle_enabled");
const QString QZSettings:: tile_steering_angle_order = QStringLiteral("tile_steering_angle_order");
const QString QZSettings:: tile_pid_hr_enabled = QStringLiteral("tile_pid_hr_enabled");
const QString QZSettings:: tile_pid_hr_order = QStringLiteral("tile_pid_hr_order");
const QString QZSettings:: heart_rate_zone1 = QStringLiteral("heart_rate_zone1");
const QString QZSettings:: heart_rate_zone2 = QStringLiteral("heart_rate_zone2");
const QString QZSettings:: heart_rate_zone3 = QStringLiteral("heart_rate_zone3");
const QString QZSettings:: heart_rate_zone4 = QStringLiteral("heart_rate_zone4");
const QString QZSettings:: heart_max_override_enable = QStringLiteral("heart_max_override_enable");
const QString QZSettings:: heart_max_override_value = QStringLiteral("heart_max_override_value");
const QString QZSettings:: peloton_gain = QStringLiteral("peloton_gain");
const QString QZSettings:: peloton_offset = QStringLiteral("peloton_offset");
const QString QZSettings:: treadmill_pid_heart_zone = QStringLiteral("treadmill_pid_heart_zone");
const QString QZSettings:: default_treadmill_pid_heart_zone = QStringLiteral("Disabled");
const QString QZSettings:: pacef_1mile = QStringLiteral("pacef_1mile");
const QString QZSettings:: pacef_5km = QStringLiteral("pacef_5km");
const QString QZSettings:: pacef_10km = QStringLiteral("pacef_10km");
const QString QZSettings:: pacef_halfmarathon = QStringLiteral("pacef_halfmarathon");
const QString QZSettings:: pacef_marathon = QStringLiteral("pacef_marathon");
const QString QZSettings:: pace_default = QStringLiteral("pace_default");
const QString QZSettings:: default_pace_default = QStringLiteral("Half Marathon");
const QString QZSettings:: domyos_treadmill_buttons = QStringLiteral("domyos_treadmill_buttons");
const QString QZSettings:: domyos_treadmill_distance_display = QStringLiteral("domyos_treadmill_distance_display");
const QString QZSettings:: domyos_treadmill_display_invert = QStringLiteral("domyos_treadmill_display_invert");
const QString QZSettings:: domyos_bike_cadence_filter = QStringLiteral("domyos_bike_cadence_filter");
const QString QZSettings:: domyos_bike_display_calories = QStringLiteral("domyos_bike_display_calories");
const QString QZSettings:: domyos_elliptical_speed_ratio = QStringLiteral("domyos_elliptical_speed_ratio");
const QString QZSettings:: eslinker_cadenza = QStringLiteral("eslinker_cadenza");
const QString QZSettings:: echelon_watttable = QStringLiteral("echelon_watttable");
const QString QZSettings:: default_echelon_watttable = QStringLiteral("Echelon");
const QString QZSettings:: proform_wheel_ratio = QStringLiteral("proform_wheel_ratio");
const QString QZSettings:: proform_tour_de_france_clc = QStringLiteral("proform_tour_de_france_clc");
const QString QZSettings:: proform_tdf_jonseed_watt = QStringLiteral("proform_tdf_jonseed_watt");
const QString QZSettings:: proform_studio = QStringLiteral("proform_studio");
const QString QZSettings:: proform_tdf_10 = QStringLiteral("proform_tdf_10");
const QString QZSettings:: horizon_gr7_cadence_multiplier = QStringLiteral("horizon_gr7_cadence_multiplier");
const QString QZSettings:: fitshow_user_id = QStringLiteral("fitshow_user_id");
const QString QZSettings:: inspire_peloton_formula = QStringLiteral("inspire_peloton_formula");
const QString QZSettings:: inspire_peloton_formula2 = QStringLiteral("inspire_peloton_formula2");
const QString QZSettings:: hammer_racer_s = QStringLiteral("hammer_racer_s");
const QString QZSettings:: pafers_treadmill = QStringLiteral("pafers_treadmill");
const QString QZSettings:: yesoul_peloton_formula = QStringLiteral("yesoul_peloton_formula");
const QString QZSettings:: nordictrack_10_treadmill = QStringLiteral("nordictrack_10_treadmill");
const QString QZSettings:: nordictrack_t65s_treadmill = QStringLiteral("nordictrack_t65s_treadmill");
//const QString QZSettings:: proform_treadmill_995i = QStringLiteral("proform_treadmill_995i");
//
const QString QZSettings:: toorx_3_0 = QStringLiteral("toorx_3_0");
const QString QZSettings:: toorx_65s_evo = QStringLiteral("toorx_65s_evo");
const QString QZSettings:: jtx_fitness_sprint_treadmill = QStringLiteral("jtx_fitness_sprint_treadmill");
const QString QZSettings:: dkn_endurun_treadmill = QStringLiteral("dkn_endurun_treadmill");
const QString QZSettings:: trx_route_key = QStringLiteral("trx_route_key");
const QString QZSettings:: bh_spada_2 = QStringLiteral("bh_spada_2");
const QString QZSettings:: toorx_bike = QStringLiteral("toorx_bike");
const QString QZSettings:: toorx_ftms = QStringLiteral("toorx_ftms");
const QString QZSettings:: jll_IC400_bike = QStringLiteral("jll_IC400_bike");
const QString QZSettings:: fytter_ri08_bike = QStringLiteral("fytter_ri08_bike");
const QString QZSettings:: asviva_bike = QStringLiteral("asviva_bike");
const QString QZSettings:: hertz_xr_770 = QStringLiteral("hertz_xr_770");
const QString QZSettings:: m3i_bike_id = QStringLiteral("m3i_bike_id");
const QString QZSettings:: m3i_bike_speed_buffsize = QStringLiteral("m3i_bike_speed_buffsize");
const QString QZSettings:: m3i_bike_qt_search = QStringLiteral("m3i_bike_qt_search");
const QString QZSettings:: m3i_bike_kcal = QStringLiteral("m3i_bike_kcal");
const QString QZSettings:: snode_bike = QStringLiteral("snode_bike");
const QString QZSettings:: fitplus_bike = QStringLiteral("fitplus_bike");
const QString QZSettings:: virtufit_etappe = QStringLiteral("virtufit_etappe");
const QString QZSettings:: flywheel_filter = QStringLiteral("flywheel_filter");
const QString QZSettings:: flywheel_life_fitness_ic8 = QStringLiteral("flywheel_life_fitness_ic8");
const QString QZSettings:: sole_treadmill_inclination = QStringLiteral("sole_treadmill_inclination");
const QString QZSettings:: sole_treadmill_miles = QStringLiteral("sole_treadmill_miles");
const QString QZSettings:: sole_treadmill_f65 = QStringLiteral("sole_treadmill_f65");
const QString QZSettings:: sole_treadmill_f63 = QStringLiteral("sole_treadmill_f63");
const QString QZSettings:: sole_treadmill_tt8 = QStringLiteral("sole_treadmill_tt8");
const QString QZSettings:: schwinn_bike_resistance = QStringLiteral("schwinn_bike_resistance");
const QString QZSettings:: schwinn_bike_resistance_v2 = QStringLiteral("schwinn_bike_resistance_v2");
const QString QZSettings:: technogym_myrun_treadmill_experimental = QStringLiteral("technogym_myrun_treadmill_experimental");
const QString QZSettings:: trainprogram_random = QStringLiteral("trainprogram_random");
const QString QZSettings:: trainprogram_total = QStringLiteral("trainprogram_total");
const QString QZSettings:: trainprogram_period_seconds = QStringLiteral("trainprogram_period_seconds");
const QString QZSettings:: trainprogram_speed_min = QStringLiteral("trainprogram_speed_min");
const QString QZSettings:: trainprogram_speed_max = QStringLiteral("trainprogram_speed_max");
const QString QZSettings:: trainprogram_incline_min = QStringLiteral("trainprogram_incline_min");
const QString QZSettings:: trainprogram_incline_max = QStringLiteral("trainprogram_incline_max");
const QString QZSettings:: trainprogram_resistance_min = QStringLiteral("trainprogram_resistance_min");
const QString QZSettings:: trainprogram_resistance_max = QStringLiteral("trainprogram_resistance_max");
const QString QZSettings:: watt_offset = QStringLiteral("watt_offset");
const QString QZSettings:: watt_gain = QStringLiteral("watt_gain");
const QString QZSettings:: power_avg_5s = QStringLiteral("power_avg_5s");
const QString QZSettings:: instant_power_on_pause = QStringLiteral("instant_power_on_pause");
const QString QZSettings:: speed_offset = QStringLiteral("speed_offset");
const QString QZSettings:: speed_gain = QStringLiteral("speed_gain");
const QString QZSettings:: filter_device = QStringLiteral("filter_device");
const QString QZSettings:: default_filter_device = QStringLiteral("Disabled");
const QString QZSettings:: strava_suffix = QStringLiteral("strava_suffix");
const QString QZSettings:: default_strava_suffix = QStringLiteral("#QZ");
const QString QZSettings:: cadence_sensor_name = QStringLiteral("cadence_sensor_name");
const QString QZSettings:: default_cadence_sensor_name = QStringLiteral("Disabled");
const QString QZSettings:: cadence_sensor_as_bike = QStringLiteral("cadence_sensor_as_bike");
const QString QZSettings:: cadence_sensor_speed_ratio = QStringLiteral("cadence_sensor_speed_ratio");
const QString QZSettings:: power_hr_pwr1 = QStringLiteral("power_hr_pwr1");
const QString QZSettings:: power_hr_hr1 = QStringLiteral("power_hr_hr1");
const QString QZSettings:: power_hr_pwr2 = QStringLiteral("power_hr_pwr2");
const QString QZSettings:: power_hr_hr2 = QStringLiteral("power_hr_hr2");
const QString QZSettings:: power_sensor_name = QStringLiteral("power_sensor_name");
const QString QZSettings:: default_power_sensor_name = QStringLiteral("Disabled");
const QString QZSettings:: power_sensor_as_bike = QStringLiteral("power_sensor_as_bike");
const QString QZSettings:: power_sensor_as_treadmill = QStringLiteral("power_sensor_as_treadmill");
const QString QZSettings:: powr_sensor_running_cadence_double = QStringLiteral("powr_sensor_running_cadence_double");
const QString QZSettings:: elite_rizer_name = QStringLiteral("elite_rizer_name");
const QString QZSettings:: default_elite_rizer_name = QStringLiteral("Disabled");
const QString QZSettings:: elite_sterzo_smart_name = QStringLiteral("elite_sterzo_smart_name");
const QString QZSettings:: default_elite_sterzo_smart_name = QStringLiteral("Disabled");
const QString QZSettings:: ftms_accessory_name = QStringLiteral("ftms_accessory_name");
const QString QZSettings:: default_ftms_accessory_name = QStringLiteral("Disabled");
const QString QZSettings:: ss2k_shift_step = QStringLiteral("ss2k_shift_step");
const QString QZSettings:: fitmetria_fanfit_enable = QStringLiteral("fitmetria_fanfit_enable");
const QString QZSettings:: fitmetria_fanfit_mode = QStringLiteral("fitmetria_fanfit_mode");
const QString QZSettings:: default_fitmetria_fanfit_mode = QStringLiteral("Heart");
const QString QZSettings:: fitmetria_fanfit_min = QStringLiteral("fitmetria_fanfit_min");
const QString QZSettings:: fitmetria_fanfit_max = QStringLiteral("fitmetria_fanfit_max");
const QString QZSettings:: virtualbike_forceresistance = QStringLiteral("virtualbike_forceresistance");
const QString QZSettings:: bluetooth_relaxed = QStringLiteral("bluetooth_relaxed");
const QString QZSettings:: bluetooth_30m_hangs = QStringLiteral("bluetooth_30m_hangs");
const QString QZSettings:: battery_service = QStringLiteral("battery_service");
const QString QZSettings:: service_changed = QStringLiteral("service_changed");
const QString QZSettings:: virtual_device_enabled = QStringLiteral("virtual_device_enabled");
const QString QZSettings:: virtual_device_bluetooth = QStringLiteral("virtual_device_bluetooth");
const QString QZSettings:: ios_peloton_workaround = QStringLiteral("ios_peloton_workaround");
const QString QZSettings:: android_wakelock = QStringLiteral("android_wakelock");
const QString QZSettings:: log_debug = QStringLiteral("log_debug");
const QString QZSettings:: virtual_device_onlyheart = QStringLiteral("virtual_device_onlyheart");
const QString QZSettings:: virtual_device_echelon = QStringLiteral("virtual_device_echelon");
const QString QZSettings:: virtual_device_ifit = QStringLiteral("virtual_device_ifit");
const QString QZSettings:: virtual_device_rower = QStringLiteral("virtual_device_rower");
const QString QZSettings:: virtual_device_force_bike = QStringLiteral("virtual_device_force_bike");
const QString QZSettings:: volume_change_gears = QStringLiteral("volume_change_gears");
const QString QZSettings:: applewatch_fakedevice = QStringLiteral("applewatch_fakedevice");
const QString QZSettings:: zwift_erg_resistance_down = QStringLiteral("zwift_erg_resistance_down");
const QString QZSettings:: zwift_erg_resistance_up = QStringLiteral("zwift_erg_resistance_up");
const QString QZSettings:: horizon_paragon_x = QStringLiteral("horizon_paragon_x");
const QString QZSettings:: treadmill_step_speed = QStringLiteral("treadmill_step_speed");
const QString QZSettings:: treadmill_step_incline = QStringLiteral("treadmill_step_incline");
const QString QZSettings:: fitshow_anyrun = QStringLiteral("fitshow_anyrun");
const QString QZSettings:: nordictrack_s30_treadmill = QStringLiteral("nordictrack_s30_treadmill");
// from version 2.10.23
// not used anymore because it's an elliptical not a treadmill. Don't remove this
// it will cause corruption in the settings
//const QString QZSettings:: nordictrack_fs5i_treadmill = QStringLiteral("nordictrack_fs5i_treadmill");
//
const QString QZSettings:: renpho_peloton_conversion_v2 = QStringLiteral("renpho_peloton_conversion_v2");
const QString QZSettings:: ss2k_resistance_sample_1 = QStringLiteral("ss2k_resistance_sample_1");
const QString QZSettings:: ss2k_shift_step_sample_1 = QStringLiteral("ss2k_shift_step_sample_1");
const QString QZSettings:: ss2k_resistance_sample_2 = QStringLiteral("ss2k_resistance_sample_2");
const QString QZSettings:: ss2k_shift_step_sample_2 = QStringLiteral("ss2k_shift_step_sample_2");
const QString QZSettings:: ss2k_resistance_sample_3 = QStringLiteral("ss2k_resistance_sample_3");
const QString QZSettings:: ss2k_shift_step_sample_3 = QStringLiteral("ss2k_shift_step_sample_3");
const QString QZSettings:: ss2k_resistance_sample_4 = QStringLiteral("ss2k_resistance_sample_4");
const QString QZSettings:: ss2k_shift_step_sample_4 = QStringLiteral("ss2k_shift_step_sample_4");
const QString QZSettings:: fitshow_truetimer = QStringLiteral("fitshow_truetimer");
const QString QZSettings:: elite_rizer_gain = QStringLiteral("elite_rizer_gain");
const QString QZSettings:: tile_ext_incline_enabled = QStringLiteral("tile_ext_incline_enabled");
const QString QZSettings:: tile_ext_incline_order = QStringLiteral("tile_ext_incline_order");
const QString QZSettings:: reebok_fr30_treadmill = QStringLiteral("reebok_fr30_treadmill");
const QString QZSettings:: horizon_treadmill_7_8 = QStringLiteral("horizon_treadmill_7_8");
const QString QZSettings:: profile_name = QStringLiteral("profile_name");
const QString QZSettings:: default_profile_name = QStringLiteral("default");
const QString QZSettings:: tile_cadence_color_enabled = QStringLiteral("tile_cadence_color_enabled");
const QString QZSettings:: tile_peloton_remaining_enabled = QStringLiteral("tile_peloton_remaining_enabled");
const QString QZSettings:: tile_peloton_remaining_order = QStringLiteral("tile_peloton_remaining_order");
const QString QZSettings:: tile_peloton_resistance_color_enabled = QStringLiteral("tile_peloton_resistance_color_enabled");
const QString QZSettings:: dircon_yes = QStringLiteral("dircon_yes");
const QString QZSettings:: dircon_server_base_port = QStringLiteral("dircon_server_base_port");
const QString QZSettings:: ios_cache_heart_device = QStringLiteral("ios_cache_heart_device");
const QString QZSettings:: app_opening = QStringLiteral("app_opening");
const QString QZSettings:: proformtdf4ip = QStringLiteral("proformtdf4ip");
const QString QZSettings:: default_proformtdf4ip = QStringLiteral("");
const QString QZSettings:: fitfiu_mc_v460 = QStringLiteral("fitfiu_mc_v460");
const QString QZSettings:: bike_weight = QStringLiteral("bike_weight");
const QString QZSettings:: kingsmith_encrypt_v2 = QStringLiteral("kingsmith_encrypt_v2");
const QString QZSettings:: proform_treadmill_9_0 = QStringLiteral("proform_treadmill_9_0");
const QString QZSettings:: proform_treadmill_1800i = QStringLiteral("proform_treadmill_1800i");
const QString QZSettings:: cadence_offset = QStringLiteral("cadence_offset");
const QString QZSettings:: cadence_gain = QStringLiteral("cadence_gain");
const QString QZSettings:: sp_ht_9600ie = QStringLiteral("sp_ht_9600ie");
const QString QZSettings:: tts_enabled = QStringLiteral("tts_enabled");
const QString QZSettings:: tts_summary_sec = QStringLiteral("tts_summary_sec");
const QString QZSettings:: tts_act_speed = QStringLiteral("tts_act_speed");
const QString QZSettings:: tts_avg_speed = QStringLiteral("tts_avg_speed");
const QString QZSettings:: tts_max_speed = QStringLiteral("tts_max_speed");
const QString QZSettings:: tts_act_inclination = QStringLiteral("tts_act_inclination");
const QString QZSettings:: tts_act_cadence = QStringLiteral("tts_act_cadence");
const QString QZSettings:: tts_avg_cadence = QStringLiteral("tts_avg_cadence");
const QString QZSettings:: tts_max_cadence = QStringLiteral("tts_max_cadence");
const QString QZSettings:: tts_act_elevation = QStringLiteral("tts_act_elevation");
const QString QZSettings:: tts_act_calories = QStringLiteral("tts_act_calories");
const QString QZSettings:: tts_act_odometer = QStringLiteral("tts_act_odometer");
const QString QZSettings:: tts_act_pace = QStringLiteral("tts_act_pace");
const QString QZSettings:: tts_avg_pace = QStringLiteral("tts_avg_pace");
const QString QZSettings:: tts_max_pace = QStringLiteral("tts_max_pace");
const QString QZSettings:: tts_act_resistance = QStringLiteral("tts_act_resistance");
const QString QZSettings:: tts_avg_resistance = QStringLiteral("tts_avg_resistance");
const QString QZSettings:: tts_max_resistance = QStringLiteral("tts_max_resistance");
const QString QZSettings:: tts_act_watt = QStringLiteral("tts_act_watt");
const QString QZSettings:: tts_avg_watt = QStringLiteral("tts_avg_watt");
const QString QZSettings:: tts_max_watt = QStringLiteral("tts_max_watt");
const QString QZSettings:: tts_act_ftp = QStringLiteral("tts_act_ftp");
const QString QZSettings:: tts_avg_ftp = QStringLiteral("tts_avg_ftp");
const QString QZSettings:: tts_max_ftp = QStringLiteral("tts_max_ftp");
const QString QZSettings:: tts_act_heart = QStringLiteral("tts_act_heart");
const QString QZSettings:: tts_avg_heart = QStringLiteral("tts_avg_heart");
const QString QZSettings:: tts_max_heart = QStringLiteral("tts_max_heart");
const QString QZSettings:: tts_act_jouls = QStringLiteral("tts_act_jouls");
const QString QZSettings:: tts_act_elapsed = QStringLiteral("tts_act_elapsed");
const QString QZSettings:: tts_act_peloton_resistance = QStringLiteral("tts_act_peloton_resistance");
const QString QZSettings:: tts_avg_peloton_resistance = QStringLiteral("tts_avg_peloton_resistance");
const QString QZSettings:: tts_max_peloton_resistance = QStringLiteral("tts_max_peloton_resistance");
const QString QZSettings:: tts_act_target_peloton_resistance = QStringLiteral("tts_act_target_peloton_resistance");
const QString QZSettings:: tts_act_target_cadence = QStringLiteral("tts_act_target_cadence");
const QString QZSettings:: tts_act_target_power = QStringLiteral("tts_act_target_power");
const QString QZSettings:: tts_act_target_zone = QStringLiteral("tts_act_target_zone");
const QString QZSettings:: tts_act_target_speed = QStringLiteral("tts_act_target_speed");
const QString QZSettings:: tts_act_target_incline = QStringLiteral("tts_act_target_incline");
const QString QZSettings:: tts_act_watt_kg = QStringLiteral("tts_act_watt_kg");
const QString QZSettings:: tts_avg_watt_kg = QStringLiteral("tts_avg_watt_kg");
const QString QZSettings:: tts_max_watt_kg = QStringLiteral("tts_max_watt_kg");
const QString QZSettings:: fakedevice_elliptical = QStringLiteral("fakedevice_elliptical");
const QString QZSettings:: nordictrack_2950_ip = QStringLiteral("nordictrack_2950_ip");
const QString QZSettings:: default_nordictrack_2950_ip = QStringLiteral("");
const QString QZSettings:: tile_instantaneous_stride_length_enabled = QStringLiteral("tile_instantaneous_stride_length_enabled");
const QString QZSettings:: tile_instantaneous_stride_length_order = QStringLiteral("tile_instantaneous_stride_length_order");
const QString QZSettings:: tile_ground_contact_enabled = QStringLiteral("tile_ground_contact_enabled");
const QString QZSettings:: tile_ground_contact_order = QStringLiteral("tile_ground_contact_order");
const QString QZSettings:: tile_vertical_oscillation_enabled = QStringLiteral("tile_vertical_oscillation_enabled");
const QString QZSettings:: tile_vertical_oscillation_order = QStringLiteral("tile_vertical_oscillation_order");
const QString QZSettings:: sex = QStringLiteral("sex");
const QString QZSettings:: default_sex = QStringLiteral("Male");
const QString QZSettings:: maps_type = QStringLiteral("maps_type");
const QString QZSettings:: default_maps_type = QStringLiteral("3D");
const QString QZSettings:: ss2k_max_resistance = QStringLiteral("ss2k_max_resistance");
const QString QZSettings:: ss2k_min_resistance = QStringLiteral("ss2k_min_resistance");
const QString QZSettings:: proform_treadmill_se = QStringLiteral("proform_treadmill_se");
const QString QZSettings:: proformtreadmillip = QStringLiteral("proformtreadmillip");
const QString QZSettings:: default_proformtreadmillip = QStringLiteral("");
// from version 2.11.22
const QString QZSettings:: kingsmith_encrypt_v3 = QStringLiteral("kingsmith_encrypt_v3");
const QString QZSettings:: tdf_10_ip = QStringLiteral("tdf_10_ip");
const QString QZSettings:: default_tdf_10_ip = QStringLiteral("");
const QString QZSettings:: fakedevice_treadmill = QStringLiteral("fakedevice_treadmill");
const QString QZSettings:: video_playback_window_s = QStringLiteral("video_playback_window_s");
const QString QZSettings:: horizon_treadmill_profile_user1 = QStringLiteral("horizon_treadmill_profile_user1");
const QString QZSettings:: default_horizon_treadmill_profile_user1 = QStringLiteral("user1");
const QString QZSettings:: horizon_treadmill_profile_user2 = QStringLiteral("horizon_treadmill_profile_user2");
const QString QZSettings:: default_horizon_treadmill_profile_user2 = QStringLiteral("user2");
const QString QZSettings:: horizon_treadmill_profile_user3 = QStringLiteral("horizon_treadmill_profile_user3");
const QString QZSettings:: default_horizon_treadmill_profile_user3 = QStringLiteral("user3");
const QString QZSettings:: horizon_treadmill_profile_user4 = QStringLiteral("horizon_treadmill_profile_user4");
const QString QZSettings:: default_horizon_treadmill_profile_user4 = QStringLiteral("user4");
const QString QZSettings:: horizon_treadmill_profile_user5 = QStringLiteral("horizon_treadmill_profile_user5");
const QString QZSettings:: default_horizon_treadmill_profile_user5 = QStringLiteral("user5");
const QString QZSettings:: nordictrack_gx_2_7 = QStringLiteral("nordictrack_gx_2_7");
const QString QZSettings:: rolling_resistance = QStringLiteral("rolling_resistance");

const uint32_t allSettingsCount = 367;
QVariant allSettings[allSettingsCount][2] =  {
    { QZSettings::cryptoKeySettingsProfiles, QZSettings::default_cryptoKeySettingsProfiles },
    { QZSettings::bluetooth_no_reconnection, QZSettings::default_bluetooth_no_reconnection },
    { QZSettings::bike_wheel_revs, QZSettings::default_bike_wheel_revs },
    { QZSettings::bluetooth_lastdevice_name, QZSettings::default_bluetooth_lastdevice_name },
    { QZSettings::bluetooth_lastdevice_address, QZSettings::default_bluetooth_lastdevice_address },
    { QZSettings::hrm_lastdevice_name, QZSettings::default_hrm_lastdevice_name },
    { QZSettings::hrm_lastdevice_address, QZSettings::default_hrm_lastdevice_address },
    { QZSettings::ftms_accessory_address, QZSettings::default_ftms_accessory_address },
    { QZSettings::ftms_accessory_lastdevice_name, QZSettings::default_ftms_accessory_lastdevice_name },
    { QZSettings::csc_sensor_address, QZSettings::default_csc_sensor_address },
    { QZSettings::csc_sensor_lastdevice_name, QZSettings::default_csc_sensor_lastdevice_name },
    { QZSettings::power_sensor_lastdevice_name, QZSettings::default_power_sensor_lastdevice_name },
    { QZSettings::power_sensor_address, QZSettings::default_power_sensor_address },
    { QZSettings::elite_rizer_lastdevice_name, QZSettings::default_elite_rizer_lastdevice_name },
    { QZSettings::elite_rizer_address, QZSettings::default_elite_rizer_address },
    { QZSettings::elite_sterzo_smart_lastdevice_name, QZSettings::default_elite_sterzo_smart_lastdevice_name },
    { QZSettings::elite_sterzo_smart_address, QZSettings::default_elite_sterzo_smart_address },
    { QZSettings::strava_accesstoken, QZSettings::default_strava_accesstoken },
    { QZSettings::strava_refreshtoken, QZSettings::default_strava_refreshtoken },
    { QZSettings::strava_lastrefresh, QZSettings::default_strava_lastrefresh },
    { QZSettings::strava_expires, QZSettings::default_strava_expires },
    { QZSettings::ui_zoom, QZSettings::default_ui_zoom },
    { QZSettings::bike_heartrate_service, QZSettings::default_bike_heartrate_service },
    { QZSettings::bike_resistance_offset, QZSettings::default_bike_resistance_offset },
    { QZSettings::bike_resistance_gain_f, QZSettings::default_bike_resistance_gain_f },
    { QZSettings::zwift_erg, QZSettings::default_zwift_erg },
    { QZSettings::zwift_erg_filter, QZSettings::default_zwift_erg_filter },
    { QZSettings::zwift_erg_filter_down, QZSettings::default_zwift_erg_filter_down },
    { QZSettings::zwift_negative_inclination_x2, QZSettings::default_zwift_negative_inclination_x2 },
    { QZSettings::zwift_inclination_offset, QZSettings::default_zwift_inclination_offset },
    { QZSettings::zwift_inclination_gain, QZSettings::default_zwift_inclination_gain },
    { QZSettings::echelon_resistance_offset, QZSettings::default_echelon_resistance_offset },
    { QZSettings::echelon_resistance_gain, QZSettings::default_echelon_resistance_gain },
    { QZSettings::speed_power_based, QZSettings::default_speed_power_based },
    { QZSettings::bike_resistance_start, QZSettings::default_bike_resistance_start },
    { QZSettings::age, QZSettings::default_age },
    { QZSettings::weight, QZSettings::default_weight },
    { QZSettings::ftp, QZSettings::default_ftp },
    { QZSettings::user_email, QZSettings::default_user_email },
    { QZSettings::user_nickname, QZSettings::default_user_nickname },
    { QZSettings::miles_unit, QZSettings::default_miles_unit },
    { QZSettings::pause_on_start, QZSettings::default_pause_on_start },
    { QZSettings::treadmill_force_speed, QZSettings::default_treadmill_force_speed },
    { QZSettings::pause_on_start_treadmill, QZSettings::default_pause_on_start_treadmill },
    { QZSettings::continuous_moving, QZSettings::default_continuous_moving },
    { QZSettings::bike_cadence_sensor, QZSettings::default_bike_cadence_sensor },
    { QZSettings::run_cadence_sensor, QZSettings::default_run_cadence_sensor },
    { QZSettings::bike_power_sensor, QZSettings::default_bike_power_sensor },
    { QZSettings::heart_rate_belt_name, QZSettings::default_heart_rate_belt_name },
    { QZSettings::heart_ignore_builtin, QZSettings::default_heart_ignore_builtin },
    { QZSettings::kcal_ignore_builtin, QZSettings::default_kcal_ignore_builtin },
    { QZSettings::ant_cadence, QZSettings::default_ant_cadence },
    { QZSettings::ant_heart, QZSettings::default_ant_heart },
    { QZSettings::ant_garmin, QZSettings::default_ant_garmin },
    { QZSettings::top_bar_enabled, QZSettings::default_top_bar_enabled },
    { QZSettings::peloton_username, QZSettings::default_peloton_username },
    { QZSettings::peloton_password, QZSettings::default_peloton_password },
    { QZSettings::peloton_difficulty, QZSettings::default_peloton_difficulty },
    { QZSettings::peloton_cadence_metric, QZSettings::default_peloton_cadence_metric },
    { QZSettings::peloton_heartrate_metric, QZSettings::default_peloton_heartrate_metric },
    { QZSettings::peloton_date, QZSettings::default_peloton_date },
    { QZSettings::peloton_description_link, QZSettings::default_peloton_description_link },
    { QZSettings::pzp_username, QZSettings::default_pzp_username },
    { QZSettings::pzp_password, QZSettings::default_pzp_password },
    { QZSettings::tile_speed_enabled, QZSettings::default_tile_speed_enabled },
    { QZSettings::tile_speed_order, QZSettings::default_tile_speed_order },
    { QZSettings::tile_inclination_enabled, QZSettings::default_tile_inclination_enabled },
    { QZSettings::tile_inclination_order, QZSettings::default_tile_inclination_order },
    { QZSettings::tile_cadence_enabled, QZSettings::default_tile_cadence_enabled },
    { QZSettings::tile_cadence_order, QZSettings::default_tile_cadence_order },
    { QZSettings::tile_elevation_enabled, QZSettings::default_tile_elevation_enabled },
    { QZSettings::tile_elevation_order, QZSettings::default_tile_elevation_order },
    { QZSettings::tile_calories_enabled, QZSettings::default_tile_calories_enabled },
    { QZSettings::tile_calories_order, QZSettings::default_tile_calories_order },
    { QZSettings::tile_odometer_enabled, QZSettings::default_tile_odometer_enabled },
    { QZSettings::tile_odometer_order, QZSettings::default_tile_odometer_order },
    { QZSettings::tile_pace_enabled, QZSettings::default_tile_pace_enabled },
    { QZSettings::tile_pace_order, QZSettings::default_tile_pace_order },
    { QZSettings::tile_resistance_enabled, QZSettings::default_tile_resistance_enabled },
    { QZSettings::tile_resistance_order, QZSettings::default_tile_resistance_order },
    { QZSettings::tile_watt_enabled, QZSettings::default_tile_watt_enabled },
    { QZSettings::tile_watt_order, QZSettings::default_tile_watt_order },
    { QZSettings::tile_weight_loss_enabled, QZSettings::default_tile_weight_loss_enabled },
    { QZSettings::tile_weight_loss_order, QZSettings::default_tile_weight_loss_order },
    { QZSettings::tile_avgwatt_enabled, QZSettings::default_tile_avgwatt_enabled },
    { QZSettings::tile_avgwatt_order, QZSettings::default_tile_avgwatt_order },
    { QZSettings::tile_ftp_enabled, QZSettings::default_tile_ftp_enabled },
    { QZSettings::tile_ftp_order, QZSettings::default_tile_ftp_order },
    { QZSettings::tile_heart_enabled, QZSettings::default_tile_heart_enabled },
    { QZSettings::tile_heart_order, QZSettings::default_tile_heart_order },
    { QZSettings::tile_fan_enabled, QZSettings::default_tile_fan_enabled },
    { QZSettings::tile_fan_order, QZSettings::default_tile_fan_order },
    { QZSettings::tile_jouls_enabled, QZSettings::default_tile_jouls_enabled },
    { QZSettings::tile_jouls_order, QZSettings::default_tile_jouls_order },
    { QZSettings::tile_elapsed_enabled, QZSettings::default_tile_elapsed_enabled },
    { QZSettings::tile_elapsed_order, QZSettings::default_tile_elapsed_order },
    { QZSettings::tile_lapelapsed_enabled, QZSettings::default_tile_lapelapsed_enabled },
    { QZSettings::tile_lapelapsed_order, QZSettings::default_tile_lapelapsed_order },
    { QZSettings::tile_moving_time_enabled, QZSettings::default_tile_moving_time_enabled },
    { QZSettings::tile_moving_time_order, QZSettings::default_tile_moving_time_order },
    { QZSettings::tile_peloton_offset_enabled, QZSettings::default_tile_peloton_offset_enabled },
    { QZSettings::tile_peloton_offset_order, QZSettings::default_tile_peloton_offset_order },
    { QZSettings::tile_peloton_difficulty_enabled, QZSettings::default_tile_peloton_difficulty_enabled },
    { QZSettings::tile_peloton_difficulty_order, QZSettings::default_tile_peloton_difficulty_order },
    { QZSettings::tile_peloton_resistance_enabled, QZSettings::default_tile_peloton_resistance_enabled },
    { QZSettings::tile_peloton_resistance_order, QZSettings::default_tile_peloton_resistance_order },
    { QZSettings::tile_datetime_enabled, QZSettings::default_tile_datetime_enabled },
    { QZSettings::tile_datetime_order, QZSettings::default_tile_datetime_order },
    { QZSettings::tile_target_resistance_enabled, QZSettings::default_tile_target_resistance_enabled },
    { QZSettings::tile_target_resistance_order, QZSettings::default_tile_target_resistance_order },
    { QZSettings::tile_target_peloton_resistance_enabled, QZSettings::default_tile_target_peloton_resistance_enabled },
    { QZSettings::tile_target_peloton_resistance_order, QZSettings::default_tile_target_peloton_resistance_order },
    { QZSettings::tile_target_cadence_enabled, QZSettings::default_tile_target_cadence_enabled },
    { QZSettings::tile_target_cadence_order, QZSettings::default_tile_target_cadence_order },
    { QZSettings::tile_target_power_enabled, QZSettings::default_tile_target_power_enabled },
    { QZSettings::tile_target_power_order, QZSettings::default_tile_target_power_order },
    { QZSettings::tile_target_zone_enabled, QZSettings::default_tile_target_zone_enabled },
    { QZSettings::tile_target_zone_order, QZSettings::default_tile_target_zone_order },
    { QZSettings::tile_target_speed_enabled, QZSettings::default_tile_target_speed_enabled },
    { QZSettings::tile_target_speed_order, QZSettings::default_tile_target_speed_order },
    { QZSettings::tile_target_incline_enabled, QZSettings::default_tile_target_incline_enabled },
    { QZSettings::tile_target_incline_order, QZSettings::default_tile_target_incline_order },
    { QZSettings::tile_strokes_count_enabled, QZSettings::default_tile_strokes_count_enabled },
    { QZSettings::tile_strokes_count_order, QZSettings::default_tile_strokes_count_order },
    { QZSettings::tile_strokes_length_enabled, QZSettings::default_tile_strokes_length_enabled },
    { QZSettings::tile_strokes_length_order, QZSettings::default_tile_strokes_length_order },
    { QZSettings::tile_watt_kg_enabled, QZSettings::default_tile_watt_kg_enabled },
    { QZSettings::tile_watt_kg_order, QZSettings::default_tile_watt_kg_order },
    { QZSettings::tile_gears_enabled, QZSettings::default_tile_gears_enabled },
    { QZSettings::tile_gears_order, QZSettings::default_tile_gears_order },
    { QZSettings::tile_remainingtimetrainprogramrow_enabled, QZSettings::default_tile_remainingtimetrainprogramrow_enabled },
    { QZSettings::tile_remainingtimetrainprogramrow_order, QZSettings::default_tile_remainingtimetrainprogramrow_order },
    { QZSettings::tile_nextrowstrainprogram_enabled, QZSettings::default_tile_nextrowstrainprogram_enabled },
    { QZSettings::tile_nextrowstrainprogram_order, QZSettings::default_tile_nextrowstrainprogram_order },
    { QZSettings::tile_mets_enabled, QZSettings::default_tile_mets_enabled },
    { QZSettings::tile_mets_order, QZSettings::default_tile_mets_order },
    { QZSettings::tile_targetmets_enabled, QZSettings::default_tile_targetmets_enabled },
    { QZSettings::tile_targetmets_order, QZSettings::default_tile_targetmets_order },
    { QZSettings::tile_steering_angle_enabled, QZSettings::default_tile_steering_angle_enabled },
    { QZSettings::tile_steering_angle_order, QZSettings::default_tile_steering_angle_order },
    { QZSettings::tile_pid_hr_enabled, QZSettings::default_tile_pid_hr_enabled },
    { QZSettings::tile_pid_hr_order, QZSettings::default_tile_pid_hr_order },
    { QZSettings::heart_rate_zone1, QZSettings::default_heart_rate_zone1 },
    { QZSettings::heart_rate_zone2, QZSettings::default_heart_rate_zone2 },
    { QZSettings::heart_rate_zone3, QZSettings::default_heart_rate_zone3 },
    { QZSettings::heart_rate_zone4, QZSettings::default_heart_rate_zone4 },
    { QZSettings::heart_max_override_enable, QZSettings::default_heart_max_override_enable },
    { QZSettings::heart_max_override_value, QZSettings::default_heart_max_override_value },
    { QZSettings::peloton_gain, QZSettings::default_peloton_gain },
    { QZSettings::peloton_offset, QZSettings::default_peloton_offset },
    { QZSettings::treadmill_pid_heart_zone, QZSettings::default_treadmill_pid_heart_zone },
    { QZSettings::pacef_1mile, QZSettings::default_pacef_1mile },
    { QZSettings::pacef_5km, QZSettings::default_pacef_5km },
    { QZSettings::pacef_10km, QZSettings::default_pacef_10km },
    { QZSettings::pacef_halfmarathon, QZSettings::default_pacef_halfmarathon },
    { QZSettings::pacef_marathon, QZSettings::default_pacef_marathon },
    { QZSettings::pace_default, QZSettings::default_pace_default },
    { QZSettings::domyos_treadmill_buttons, QZSettings::default_domyos_treadmill_buttons },
    { QZSettings::domyos_treadmill_distance_display, QZSettings::default_domyos_treadmill_distance_display },
    { QZSettings::domyos_treadmill_display_invert, QZSettings::default_domyos_treadmill_display_invert },
    { QZSettings::domyos_bike_cadence_filter, QZSettings::default_domyos_bike_cadence_filter },
    { QZSettings::domyos_bike_display_calories, QZSettings::default_domyos_bike_display_calories },
    { QZSettings::domyos_elliptical_speed_ratio, QZSettings::default_domyos_elliptical_speed_ratio },
    { QZSettings::eslinker_cadenza, QZSettings::default_eslinker_cadenza },
    { QZSettings::echelon_watttable, QZSettings::default_echelon_watttable },
    { QZSettings::proform_wheel_ratio, QZSettings::default_proform_wheel_ratio },
    { QZSettings::proform_tour_de_france_clc, QZSettings::default_proform_tour_de_france_clc },
    { QZSettings::proform_tdf_jonseed_watt, QZSettings::default_proform_tdf_jonseed_watt },
    { QZSettings::proform_studio, QZSettings::default_proform_studio },
    { QZSettings::proform_tdf_10, QZSettings::default_proform_tdf_10 },
    { QZSettings::horizon_gr7_cadence_multiplier, QZSettings::default_horizon_gr7_cadence_multiplier },
    { QZSettings::fitshow_user_id, QZSettings::default_fitshow_user_id },
    { QZSettings::inspire_peloton_formula, QZSettings::default_inspire_peloton_formula },
    { QZSettings::inspire_peloton_formula2, QZSettings::default_inspire_peloton_formula2 },
    { QZSettings::hammer_racer_s, QZSettings::default_hammer_racer_s },
    { QZSettings::pafers_treadmill, QZSettings::default_pafers_treadmill },
    { QZSettings::yesoul_peloton_formula, QZSettings::default_yesoul_peloton_formula },
    { QZSettings::nordictrack_10_treadmill, QZSettings::default_nordictrack_10_treadmill },
    { QZSettings::nordictrack_t65s_treadmill, QZSettings::default_nordictrack_t65s_treadmill },
    { QZSettings::toorx_3_0, QZSettings::default_toorx_3_0 },
    { QZSettings::toorx_65s_evo, QZSettings::default_toorx_65s_evo },
    { QZSettings::jtx_fitness_sprint_treadmill, QZSettings::default_jtx_fitness_sprint_treadmill },
    { QZSettings::dkn_endurun_treadmill, QZSettings::default_dkn_endurun_treadmill },
    { QZSettings::trx_route_key, QZSettings::default_trx_route_key },
    { QZSettings::bh_spada_2, QZSettings::default_bh_spada_2 },
    { QZSettings::toorx_bike, QZSettings::default_toorx_bike },
    { QZSettings::toorx_ftms, QZSettings::default_toorx_ftms },
    { QZSettings::jll_IC400_bike, QZSettings::default_jll_IC400_bike },
    { QZSettings::fytter_ri08_bike, QZSettings::default_fytter_ri08_bike },
    { QZSettings::asviva_bike, QZSettings::default_asviva_bike },
    { QZSettings::hertz_xr_770, QZSettings::default_hertz_xr_770 },
    { QZSettings::m3i_bike_id, QZSettings::default_m3i_bike_id },
    { QZSettings::m3i_bike_speed_buffsize, QZSettings::default_m3i_bike_speed_buffsize },
    { QZSettings::m3i_bike_qt_search, QZSettings::default_m3i_bike_qt_search },
    { QZSettings::m3i_bike_kcal, QZSettings::default_m3i_bike_kcal },
    { QZSettings::snode_bike, QZSettings::default_snode_bike },
    { QZSettings::fitplus_bike, QZSettings::default_fitplus_bike },
    { QZSettings::virtufit_etappe, QZSettings::default_virtufit_etappe },
    { QZSettings::flywheel_filter, QZSettings::default_flywheel_filter },
    { QZSettings::flywheel_life_fitness_ic8, QZSettings::default_flywheel_life_fitness_ic8 },
    { QZSettings::sole_treadmill_inclination, QZSettings::default_sole_treadmill_inclination },
    { QZSettings::sole_treadmill_miles, QZSettings::default_sole_treadmill_miles },
    { QZSettings::sole_treadmill_f65, QZSettings::default_sole_treadmill_f65 },
    { QZSettings::sole_treadmill_f63, QZSettings::default_sole_treadmill_f63 },
    { QZSettings::sole_treadmill_tt8, QZSettings::default_sole_treadmill_tt8 },
    { QZSettings::schwinn_bike_resistance, QZSettings::default_schwinn_bike_resistance },
    { QZSettings::schwinn_bike_resistance_v2, QZSettings::default_schwinn_bike_resistance_v2 },
    { QZSettings::technogym_myrun_treadmill_experimental, QZSettings::default_technogym_myrun_treadmill_experimental },
    { QZSettings::trainprogram_random, QZSettings::default_trainprogram_random },
    { QZSettings::trainprogram_total, QZSettings::default_trainprogram_total },
    { QZSettings::trainprogram_period_seconds, QZSettings::default_trainprogram_period_seconds },
    { QZSettings::trainprogram_speed_min, QZSettings::default_trainprogram_speed_min },
    { QZSettings::trainprogram_speed_max, QZSettings::default_trainprogram_speed_max },
    { QZSettings::trainprogram_incline_min, QZSettings::default_trainprogram_incline_min },
    { QZSettings::trainprogram_incline_max, QZSettings::default_trainprogram_incline_max },
    { QZSettings::trainprogram_resistance_min, QZSettings::default_trainprogram_resistance_min },
    { QZSettings::trainprogram_resistance_max, QZSettings::default_trainprogram_resistance_max },
    { QZSettings::watt_offset, QZSettings::default_watt_offset },
    { QZSettings::watt_gain, QZSettings::default_watt_gain },
    { QZSettings::power_avg_5s, QZSettings::default_power_avg_5s },
    { QZSettings::instant_power_on_pause, QZSettings::default_instant_power_on_pause },
    { QZSettings::speed_offset, QZSettings::default_speed_offset },
    { QZSettings::speed_gain, QZSettings::default_speed_gain },
    { QZSettings::filter_device, QZSettings::default_filter_device },
    { QZSettings::strava_suffix, QZSettings::default_strava_suffix },
    { QZSettings::cadence_sensor_name, QZSettings::default_cadence_sensor_name },
    { QZSettings::cadence_sensor_as_bike, QZSettings::default_cadence_sensor_as_bike },
    { QZSettings::cadence_sensor_speed_ratio, QZSettings::default_cadence_sensor_speed_ratio },
    { QZSettings::power_hr_pwr1, QZSettings::default_power_hr_pwr1 },
    { QZSettings::power_hr_hr1, QZSettings::default_power_hr_hr1 },
    { QZSettings::power_hr_pwr2, QZSettings::default_power_hr_pwr2 },
    { QZSettings::power_hr_hr2, QZSettings::default_power_hr_hr2 },
    { QZSettings::power_sensor_name, QZSettings::default_power_sensor_name },
    { QZSettings::power_sensor_as_bike, QZSettings::default_power_sensor_as_bike },
    { QZSettings::power_sensor_as_treadmill, QZSettings::default_power_sensor_as_treadmill },
    { QZSettings::powr_sensor_running_cadence_double, QZSettings::default_powr_sensor_running_cadence_double },
    { QZSettings::elite_rizer_name, QZSettings::default_elite_rizer_name },
    { QZSettings::elite_sterzo_smart_name, QZSettings::default_elite_sterzo_smart_name },
    { QZSettings::ftms_accessory_name, QZSettings::default_ftms_accessory_name },
    { QZSettings::ss2k_shift_step, QZSettings::default_ss2k_shift_step },
    { QZSettings::fitmetria_fanfit_enable, QZSettings::default_fitmetria_fanfit_enable },
    { QZSettings::fitmetria_fanfit_mode, QZSettings::default_fitmetria_fanfit_mode },
    { QZSettings::fitmetria_fanfit_min, QZSettings::default_fitmetria_fanfit_min },
    { QZSettings::fitmetria_fanfit_max, QZSettings::default_fitmetria_fanfit_max },
    { QZSettings::virtualbike_forceresistance, QZSettings::default_virtualbike_forceresistance },
    { QZSettings::bluetooth_relaxed, QZSettings::default_bluetooth_relaxed },
    { QZSettings::bluetooth_30m_hangs, QZSettings::default_bluetooth_30m_hangs },
    { QZSettings::battery_service, QZSettings::default_battery_service },
    { QZSettings::service_changed, QZSettings::default_service_changed },
    { QZSettings::virtual_device_enabled, QZSettings::default_virtual_device_enabled },
    { QZSettings::virtual_device_bluetooth, QZSettings::default_virtual_device_bluetooth },
    { QZSettings::ios_peloton_workaround, QZSettings::default_ios_peloton_workaround },
    { QZSettings::android_wakelock, QZSettings::default_android_wakelock },
    { QZSettings::log_debug, QZSettings::default_log_debug },
    { QZSettings::virtual_device_onlyheart, QZSettings::default_virtual_device_onlyheart },
    { QZSettings::virtual_device_echelon, QZSettings::default_virtual_device_echelon },
    { QZSettings::virtual_device_ifit, QZSettings::default_virtual_device_ifit },
    { QZSettings::virtual_device_rower, QZSettings::default_virtual_device_rower },
    { QZSettings::virtual_device_force_bike, QZSettings::default_virtual_device_force_bike },
    { QZSettings::volume_change_gears, QZSettings::default_volume_change_gears },
    { QZSettings::applewatch_fakedevice, QZSettings::default_applewatch_fakedevice },
    { QZSettings::zwift_erg_resistance_down, QZSettings::default_zwift_erg_resistance_down },
    { QZSettings::zwift_erg_resistance_up, QZSettings::default_zwift_erg_resistance_up },
    { QZSettings::horizon_paragon_x, QZSettings::default_horizon_paragon_x },
    { QZSettings::treadmill_step_speed, QZSettings::default_treadmill_step_speed },
    { QZSettings::treadmill_step_incline, QZSettings::default_treadmill_step_incline },
    { QZSettings::fitshow_anyrun, QZSettings::default_fitshow_anyrun },
    { QZSettings::nordictrack_s30_treadmill, QZSettings::default_nordictrack_s30_treadmill },
    { QZSettings::renpho_peloton_conversion_v2, QZSettings::default_renpho_peloton_conversion_v2 },
    { QZSettings::ss2k_resistance_sample_1, QZSettings::default_ss2k_resistance_sample_1 },
    { QZSettings::ss2k_shift_step_sample_1, QZSettings::default_ss2k_shift_step_sample_1 },
    { QZSettings::ss2k_resistance_sample_2, QZSettings::default_ss2k_resistance_sample_2 },
    { QZSettings::ss2k_shift_step_sample_2, QZSettings::default_ss2k_shift_step_sample_2 },
    { QZSettings::ss2k_resistance_sample_3, QZSettings::default_ss2k_resistance_sample_3 },
    { QZSettings::ss2k_shift_step_sample_3, QZSettings::default_ss2k_shift_step_sample_3 },
    { QZSettings::ss2k_resistance_sample_4, QZSettings::default_ss2k_resistance_sample_4 },
    { QZSettings::ss2k_shift_step_sample_4, QZSettings::default_ss2k_shift_step_sample_4 },
    { QZSettings::fitshow_truetimer, QZSettings::default_fitshow_truetimer },
    { QZSettings::elite_rizer_gain, QZSettings::default_elite_rizer_gain },
    { QZSettings::tile_ext_incline_enabled, QZSettings::default_tile_ext_incline_enabled },
    { QZSettings::tile_ext_incline_order, QZSettings::default_tile_ext_incline_order },
    { QZSettings::reebok_fr30_treadmill, QZSettings::default_reebok_fr30_treadmill },
    { QZSettings::horizon_treadmill_7_8, QZSettings::default_horizon_treadmill_7_8 },
    { QZSettings::profile_name, QZSettings::default_profile_name },
    { QZSettings::tile_cadence_color_enabled, QZSettings::default_tile_cadence_color_enabled },
    { QZSettings::tile_peloton_remaining_enabled, QZSettings::default_tile_peloton_remaining_enabled },
    { QZSettings::tile_peloton_remaining_order, QZSettings::default_tile_peloton_remaining_order },
    { QZSettings::tile_peloton_resistance_color_enabled, QZSettings::default_tile_peloton_resistance_color_enabled },
    { QZSettings::dircon_yes, QZSettings::default_dircon_yes },
    { QZSettings::dircon_server_base_port, QZSettings::default_dircon_server_base_port },
    { QZSettings::ios_cache_heart_device, QZSettings::default_ios_cache_heart_device },
    { QZSettings::app_opening, QZSettings::default_app_opening },
    { QZSettings::proformtdf4ip, QZSettings::default_proformtdf4ip },
    { QZSettings::fitfiu_mc_v460, QZSettings::default_fitfiu_mc_v460 },
    { QZSettings::bike_weight, QZSettings::default_bike_weight },
    { QZSettings::kingsmith_encrypt_v2, QZSettings::default_kingsmith_encrypt_v2 },
    { QZSettings::proform_treadmill_9_0, QZSettings::default_proform_treadmill_9_0 },
    { QZSettings::proform_treadmill_1800i, QZSettings::default_proform_treadmill_1800i },
    { QZSettings::cadence_offset, QZSettings::default_cadence_offset },
    { QZSettings::cadence_gain, QZSettings::default_cadence_gain },
    { QZSettings::sp_ht_9600ie, QZSettings::default_sp_ht_9600ie },
    { QZSettings::tts_enabled, QZSettings::default_tts_enabled },
    { QZSettings::tts_summary_sec, QZSettings::default_tts_summary_sec },
    { QZSettings::tts_act_speed, QZSettings::default_tts_act_speed },
    { QZSettings::tts_avg_speed, QZSettings::default_tts_avg_speed },
    { QZSettings::tts_max_speed, QZSettings::default_tts_max_speed },
    { QZSettings::tts_act_inclination, QZSettings::default_tts_act_inclination },
    { QZSettings::tts_act_cadence, QZSettings::default_tts_act_cadence },
    { QZSettings::tts_avg_cadence, QZSettings::default_tts_avg_cadence },
    { QZSettings::tts_max_cadence, QZSettings::default_tts_max_cadence },
    { QZSettings::tts_act_elevation, QZSettings::default_tts_act_elevation },
    { QZSettings::tts_act_calories, QZSettings::default_tts_act_calories },
    { QZSettings::tts_act_odometer, QZSettings::default_tts_act_odometer },
    { QZSettings::tts_act_pace, QZSettings::default_tts_act_pace },
    { QZSettings::tts_avg_pace, QZSettings::default_tts_avg_pace },
    { QZSettings::tts_max_pace, QZSettings::default_tts_max_pace },
    { QZSettings::tts_act_resistance, QZSettings::default_tts_act_resistance },
    { QZSettings::tts_avg_resistance, QZSettings::default_tts_avg_resistance },
    { QZSettings::tts_max_resistance, QZSettings::default_tts_max_resistance },
    { QZSettings::tts_act_watt, QZSettings::default_tts_act_watt },
    { QZSettings::tts_avg_watt, QZSettings::default_tts_avg_watt },
    { QZSettings::tts_max_watt, QZSettings::default_tts_max_watt },
    { QZSettings::tts_act_ftp, QZSettings::default_tts_act_ftp },
    { QZSettings::tts_avg_ftp, QZSettings::default_tts_avg_ftp },
    { QZSettings::tts_max_ftp, QZSettings::default_tts_max_ftp },
    { QZSettings::tts_act_heart, QZSettings::default_tts_act_heart },
    { QZSettings::tts_avg_heart, QZSettings::default_tts_avg_heart },
    { QZSettings::tts_max_heart, QZSettings::default_tts_max_heart },
    { QZSettings::tts_act_jouls, QZSettings::default_tts_act_jouls },
    { QZSettings::tts_act_elapsed, QZSettings::default_tts_act_elapsed },
    { QZSettings::tts_act_peloton_resistance, QZSettings::default_tts_act_peloton_resistance },
    { QZSettings::tts_avg_peloton_resistance, QZSettings::default_tts_avg_peloton_resistance },
    { QZSettings::tts_max_peloton_resistance, QZSettings::default_tts_max_peloton_resistance },
    { QZSettings::tts_act_target_peloton_resistance, QZSettings::default_tts_act_target_peloton_resistance },
    { QZSettings::tts_act_target_cadence, QZSettings::default_tts_act_target_cadence },
    { QZSettings::tts_act_target_power, QZSettings::default_tts_act_target_power },
    { QZSettings::tts_act_target_zone, QZSettings::default_tts_act_target_zone },
    { QZSettings::tts_act_target_speed, QZSettings::default_tts_act_target_speed },
    { QZSettings::tts_act_target_incline, QZSettings::default_tts_act_target_incline },
    { QZSettings::tts_act_watt_kg, QZSettings::default_tts_act_watt_kg },
    { QZSettings::tts_avg_watt_kg, QZSettings::default_tts_avg_watt_kg },
    { QZSettings::tts_max_watt_kg, QZSettings::default_tts_max_watt_kg },
    { QZSettings::fakedevice_elliptical, QZSettings::default_fakedevice_elliptical },
    { QZSettings::nordictrack_2950_ip, QZSettings::default_nordictrack_2950_ip },
    { QZSettings::tile_instantaneous_stride_length_enabled, QZSettings::default_tile_instantaneous_stride_length_enabled },
    { QZSettings::tile_instantaneous_stride_length_order, QZSettings::default_tile_instantaneous_stride_length_order },
    { QZSettings::tile_ground_contact_enabled, QZSettings::default_tile_ground_contact_enabled },
    { QZSettings::tile_ground_contact_order, QZSettings::default_tile_ground_contact_order },
    { QZSettings::tile_vertical_oscillation_enabled, QZSettings::default_tile_vertical_oscillation_enabled },
    { QZSettings::tile_vertical_oscillation_order, QZSettings::default_tile_vertical_oscillation_order },
    { QZSettings::sex, QZSettings::default_sex },
    { QZSettings::maps_type, QZSettings::default_maps_type },
    { QZSettings::ss2k_max_resistance, QZSettings::default_ss2k_max_resistance },
    { QZSettings::ss2k_min_resistance, QZSettings::default_ss2k_min_resistance },
    { QZSettings::proform_treadmill_se, QZSettings::default_proform_treadmill_se },
    { QZSettings::proformtreadmillip, QZSettings::default_proformtreadmillip },
    { QZSettings::kingsmith_encrypt_v3, QZSettings::default_kingsmith_encrypt_v3 },
    { QZSettings::tdf_10_ip, QZSettings::default_tdf_10_ip },
    { QZSettings::fakedevice_treadmill, QZSettings::default_fakedevice_treadmill },
    { QZSettings::video_playback_window_s, QZSettings::default_video_playback_window_s },
    { QZSettings::horizon_treadmill_profile_user1, QZSettings::default_horizon_treadmill_profile_user1},
    { QZSettings::horizon_treadmill_profile_user2, QZSettings::default_horizon_treadmill_profile_user2},
    { QZSettings::horizon_treadmill_profile_user3, QZSettings::default_horizon_treadmill_profile_user3},
    { QZSettings::horizon_treadmill_profile_user4, QZSettings::default_horizon_treadmill_profile_user4},
    { QZSettings::horizon_treadmill_profile_user5, QZSettings::default_horizon_treadmill_profile_user5},
    { QZSettings::nordictrack_gx_2_7, QZSettings::default_nordictrack_gx_2_7},
    { QZSettings::rolling_resistance, QZSettings::default_rolling_resistance}
};

void QZSettings::qDebugAllSettings(bool showDefaults) {
    QSettings settings;
    // make a copy of the settings for sorting
    std::vector<QVariant*> sorted;
    for(uint32_t i=0; i<allSettingsCount; i++) {
        sorted.push_back(allSettings[i]);
    }
    // sort the settings alphabetically
    struct { bool operator()(QVariant * a, QVariant * b) { return a[0].toString() < b[0].toString(); }} comparer;
    std::sort(sorted.begin(), sorted.end(), comparer);
    for(uint32_t i=0; i<sorted.size(); i++) {
        QVariant * item = sorted[i];
        QString key = item[0].toString();
        QVariant defaultValue = item[1];
        if(!showDefaults) {
            qDebug() << key << settings.value(key, defaultValue);
        } else {
            qDebug() << "("
                     << key
                     <<", "
                     << defaultValue
                     << ") = "
                     << settings.value(key, defaultValue);
        }
    }
}